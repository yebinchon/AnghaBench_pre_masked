
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_2__* server_p ;
typedef int sdp_pdu_t ;
typedef TYPE_3__* sdp_pdu_p ;
struct TYPE_13__ {int handle; } ;
typedef TYPE_4__ provider_t ;
struct TYPE_14__ {int dsize; scalar_t__ (* valid ) (int const*,int) ;} ;
typedef TYPE_5__ profile_t ;
typedef size_t int32_t ;
typedef int bdaddr_t ;
typedef int * bdaddr_p ;
struct TYPE_12__ {int len; } ;
struct TYPE_11__ {TYPE_1__* fdidx; int * req; } ;
struct TYPE_10__ {int rsp_size; scalar_t__ rsp_cs; int * rsp; scalar_t__ omtu; scalar_t__ rsp_limit; int priv; int control; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t,int const*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 TYPE_5__* FUNC_3 (size_t) ;
 TYPE_4__* FUNC_4 (TYPE_5__*,int *,size_t,int const*,int) ;
 scalar_t__ FUNC_5 (int const*,int) ;

int32_t
FUNC_6(server_p VAR_2, int32_t VAR_3)
{
 uint8_t const *VAR_4 = VAR_2->req + sizeof(sdp_pdu_t);
 uint8_t const *VAR_5 = VAR_4 + ((sdp_pdu_p)(VAR_2->req))->len;
 uint8_t *VAR_6 = VAR_2->fdidx[VAR_3].rsp;

 profile_t *VAR_7 = ((void*)0);
 provider_t *VAR_8 = ((void*)0);
 bdaddr_t *VAR_9 = ((void*)0);
 int32_t VAR_10;
 if (!VAR_2->fdidx[VAR_3].control ||
     !VAR_2->fdidx[VAR_3].priv || VAR_5 - VAR_4 < 8)
  return (VAR_1);


 FUNC_0(VAR_10, VAR_4);


 VAR_9 = (bdaddr_p) VAR_4;
 VAR_4 += sizeof(*VAR_9);


 VAR_7 = FUNC_3(VAR_10);
 if (VAR_7 == ((void*)0))
  return (VAR_1);


 if (VAR_5 - VAR_4 < VAR_7->dsize ||
     VAR_7->valid == ((void*)0) ||
     (VAR_7->valid)(VAR_4, VAR_5 - VAR_4) == 0)
  return (VAR_1);


 VAR_8 = FUNC_4(VAR_7, VAR_9, VAR_3, VAR_4, VAR_5 - VAR_4);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 FUNC_1(0, VAR_6);
 FUNC_2(VAR_8->handle, VAR_6);


 VAR_2->fdidx[VAR_3].rsp_limit = VAR_2->fdidx[VAR_3].omtu - sizeof(sdp_pdu_t);
 VAR_2->fdidx[VAR_3].rsp_size = VAR_6 - VAR_2->fdidx[VAR_3].rsp;
 VAR_2->fdidx[VAR_3].rsp_cs = 0;

 return (0);
}

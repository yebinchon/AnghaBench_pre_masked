
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef TYPE_3__* server_p ;
typedef int sdp_pdu_t ;
typedef TYPE_4__* sdp_pdu_p ;
struct TYPE_13__ {size_t fd; TYPE_1__* profile; } ;
typedef TYPE_5__ provider_t ;
typedef size_t int32_t ;
struct TYPE_12__ {int len; } ;
struct TYPE_11__ {TYPE_2__* fdidx; int * req; } ;
struct TYPE_10__ {int rsp_size; scalar_t__ rsp_cs; int * rsp; scalar_t__ omtu; scalar_t__ rsp_limit; int priv; int control; } ;
struct TYPE_9__ {int dsize; scalar_t__ (* valid ) (int const*,int) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_5__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int const*,int) ;
 scalar_t__ FUNC_4 (int const*,int) ;

int32_t
FUNC_5(server_p VAR_3, int32_t VAR_4)
{
 uint8_t const *VAR_5 = VAR_3->req + sizeof(sdp_pdu_t);
 uint8_t const *VAR_6 = VAR_5 + ((sdp_pdu_p)(VAR_3->req))->len;
 uint8_t *VAR_7 = VAR_3->fdidx[VAR_4].rsp;

 provider_t *VAR_8 = ((void*)0);
 uint32_t VAR_9;







 if (!VAR_3->fdidx[VAR_4].control ||
     !VAR_3->fdidx[VAR_4].priv || VAR_6 - VAR_5 < 4)
  return (VAR_1);


 FUNC_0(VAR_9, VAR_5);


 VAR_8 = FUNC_2(VAR_9);
 if (VAR_8 == ((void*)0) || VAR_8->fd != VAR_4)
  return (VAR_2);


 if (VAR_6 - VAR_5 < VAR_8->profile->dsize ||
     VAR_8->profile->valid == ((void*)0) ||
     (VAR_8->profile->valid)(VAR_5, VAR_6 - VAR_5) == 0)
  return (VAR_1);


 if (FUNC_3(VAR_8, VAR_5, VAR_6 - VAR_5) < 0)
  return (VAR_0);

 FUNC_1(0, VAR_7);


 VAR_3->fdidx[VAR_4].rsp_limit = VAR_3->fdidx[VAR_4].omtu - sizeof(sdp_pdu_t);
 VAR_3->fdidx[VAR_4].rsp_size = VAR_7 - VAR_3->fdidx[VAR_4].rsp;
 VAR_3->fdidx[VAR_4].rsp_cs = 0;

 return (0);
}

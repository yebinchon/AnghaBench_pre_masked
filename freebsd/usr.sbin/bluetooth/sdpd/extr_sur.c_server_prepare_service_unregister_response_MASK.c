
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef TYPE_2__* server_p ;
typedef int sdp_pdu_t ;
typedef TYPE_3__* sdp_pdu_p ;
struct TYPE_11__ {size_t fd; } ;
typedef TYPE_4__ provider_t ;
typedef size_t int32_t ;
struct TYPE_10__ {int len; } ;
struct TYPE_9__ {TYPE_1__* fdidx; int * req; } ;
struct TYPE_8__ {int rsp_size; scalar_t__ rsp_cs; int * rsp; scalar_t__ omtu; scalar_t__ rsp_limit; int priv; int control; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int *) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;

int32_t
FUNC_4(server_p VAR_2, int32_t VAR_3)
{
 uint8_t const *VAR_4 = VAR_2->req + sizeof(sdp_pdu_t);
 uint8_t const *VAR_5 = VAR_4 + ((sdp_pdu_p)(VAR_2->req))->len;
 uint8_t *VAR_6 = VAR_2->fdidx[VAR_3].rsp;

 provider_t *VAR_7 = ((void*)0);
 uint32_t VAR_8;







 if (!VAR_2->fdidx[VAR_3].control ||
     !VAR_2->fdidx[VAR_3].priv || VAR_5 - VAR_4 < 4)
  return (VAR_0);


 FUNC_0(VAR_8, VAR_4);


 VAR_7 = FUNC_2(VAR_8);
 if (VAR_7 == ((void*)0) || VAR_7->fd != VAR_3)
  return (VAR_1);

 FUNC_3(VAR_7);
 FUNC_1(0, VAR_6);


 VAR_2->fdidx[VAR_3].rsp_limit = VAR_2->fdidx[VAR_3].omtu - sizeof(sdp_pdu_t);
 VAR_2->fdidx[VAR_3].rsp_size = VAR_6 - VAR_2->fdidx[VAR_3].rsp;
 VAR_2->fdidx[VAR_3].rsp_cs = 0;

 return (0);
}

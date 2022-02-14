
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const uint8_t ;
typedef size_t uint32_t ;
typedef TYPE_2__* server_p ;
typedef int sdp_pdu_t ;
typedef TYPE_3__* sdp_pdu_p ;
typedef int provider_t ;
typedef size_t int32_t ;
struct TYPE_7__ {int len; } ;
struct TYPE_6__ {TYPE_1__* fdidx; int const* req; } ;
struct TYPE_5__ {size_t rsp_cs; scalar_t__ rsp_size; int rsp_limit; int omtu; int const* rsp; } ;


 int VAR_0 ;



 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (size_t,int const*) ;
 int FUNC_1 (size_t,int const*) ;
 int FUNC_2 (size_t,int const*) ;
 int * FUNC_3 (size_t) ;
 size_t FUNC_4 (int *,int const*,int const*,int const*,int const*) ;

int32_t
FUNC_5(server_p VAR_5, int32_t VAR_6)
{
 uint8_t const *VAR_7 = VAR_5->req + sizeof(sdp_pdu_t);
 uint8_t const *VAR_8 = VAR_7 + ((sdp_pdu_p)(VAR_5->req))->len;
 uint8_t *VAR_9 = VAR_5->fdidx[VAR_6].rsp;
 uint8_t const *VAR_10 = VAR_9 + VAR_0;

 uint8_t *VAR_11 = ((void*)0);
 provider_t *VAR_12 = ((void*)0);
 uint32_t VAR_13;
 int32_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 if (VAR_8 - VAR_7 < 12)
  return (VAR_3);


 FUNC_1(VAR_13, VAR_7);
 FUNC_0(VAR_15, VAR_7);
 if (VAR_15 <= 0)
  return (VAR_3);


 VAR_16 = 0;
 FUNC_2(VAR_14, VAR_7);
 switch (VAR_14) {
 case 128:
  FUNC_2(VAR_16, VAR_7);
  break;

 case 130:
  FUNC_0(VAR_16, VAR_7);
  break;

 case 129:
  FUNC_1(VAR_16, VAR_7);
   break;
 }
 if (VAR_16 <= 0)
  return (VAR_3);

 VAR_11 = (uint8_t *) VAR_7 + VAR_16;


 if (VAR_11 + 1 > VAR_8)
  return (VAR_3);

 FUNC_2(VAR_17, VAR_11);
 if (VAR_17 != 0) {
  if (VAR_17 != 2 || VAR_8 - VAR_11 != 2)
   return (VAR_3);

  FUNC_0(VAR_18, VAR_11);
 } else
  VAR_18 = 0;


 if (VAR_5->fdidx[VAR_6].rsp_cs != VAR_18)
  return (VAR_2);
 if (VAR_5->fdidx[VAR_6].rsp_size > 0)
  return (0);


 if ((VAR_12 = FUNC_3(VAR_13)) == ((void*)0))
  return (VAR_4);
 VAR_18 = FUNC_4(VAR_12, VAR_7, VAR_7+VAR_16, VAR_9, VAR_10);
 if (VAR_18 < 0)
  return (VAR_1);


 VAR_5->fdidx[VAR_6].rsp_limit = VAR_5->fdidx[VAR_6].omtu - sizeof(sdp_pdu_t) - 2;
 if (VAR_5->fdidx[VAR_6].rsp_limit > VAR_15)
  VAR_5->fdidx[VAR_6].rsp_limit = VAR_15;

 VAR_5->fdidx[VAR_6].rsp_size = VAR_18;
 VAR_5->fdidx[VAR_6].rsp_cs = 0;

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* keydat_val; scalar_t__ keydat_len; } ;
struct TYPE_10__ {char* valdat_val; scalar_t__ valdat_len; } ;
struct TYPE_16__ {int stat; TYPE_2__ key; TYPE_1__ val; } ;
struct TYPE_13__ {TYPE_9__ yp_resp_key_valtype; } ;
struct TYPE_14__ {TYPE_4__ ypresponse_u; int yp_resptype; } ;
typedef TYPE_5__ ypresponse ;
typedef int ypresp_key_val ;
struct TYPE_12__ {int yp_req_nokeytype; } ;
struct TYPE_15__ {scalar_t__ yp_reqtype; TYPE_3__ yprequest_u; } ;
typedef TYPE_6__ yprequest ;
struct svc_req {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_9__*,int) ;
 int * FUNC_1 (int *,struct svc_req*) ;

ypresponse *
FUNC_2(yprequest *VAR_3, struct svc_req *VAR_4)
{
 static ypresponse VAR_5;
 ypresp_key_val *VAR_6;

 VAR_5.yp_resptype = VAR_1;
 VAR_5.ypresponse_u.yp_resp_key_valtype.val.valdat_val =
 VAR_5.ypresponse_u.yp_resp_key_valtype.key.keydat_val = "";
 VAR_5.ypresponse_u.yp_resp_key_valtype.val.valdat_len =
 VAR_5.ypresponse_u.yp_resp_key_valtype.key.keydat_len = 0;

 if (VAR_3->yp_reqtype != VAR_0) {
  VAR_5.ypresponse_u.yp_resp_key_valtype.stat = VAR_2;
  return(&VAR_5);
 }

 VAR_6 = FUNC_1(&VAR_3->yprequest_u.yp_req_nokeytype,
         VAR_4);
 if (VAR_6 == ((void*)0))
  return(((void*)0));

 FUNC_0(VAR_6, &VAR_5.ypresponse_u.yp_resp_key_valtype,
       sizeof(ypresp_key_val));

 return (&VAR_5);
}

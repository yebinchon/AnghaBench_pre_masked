
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oa_flavor; } ;
struct svc_req {scalar_t__ rq_clntcred; TYPE_1__ rq_cred; } ;
struct TYPE_4__ {int window; } ;
struct authdes_cred {TYPE_2__ adc_fullname; } ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static enum auth_stat
FUNC_1(struct svc_req *VAR_5)
{
 struct authdes_cred *VAR_6;

 switch (VAR_5->rq_cred.oa_flavor) {
 case 130:
  VAR_6 = (struct authdes_cred *) VAR_5->rq_clntcred;
  if (VAR_6->adc_fullname.window > VAR_4) {
   FUNC_0("warning: client-specified window size was too large -- possible spoof attempt");

   return(VAR_0);
  }
  return(VAR_1);
  break;
 case 128:
 case 129:
  FUNC_0("warning: client didn't use DES authentication");
  return(VAR_3);
  break;
 default:
  FUNC_0("client used unknown auth flavor");
  return(VAR_2);
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int yp_buf_val; int yp_buf_len; } ;
struct ypdelete_args {TYPE_2__ key; int mapname; } ;
struct svc_req {scalar_t__ rq_clntcred; int rq_xprt; } ;
struct TYPE_3__ {char* name; } ;
struct authdes_cred {TYPE_1__ adc_fullname; } ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct svc_req*) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int *) ;

unsigned int *
FUNC_4(struct ypdelete_args *VAR_2, struct svc_req *VAR_3)
{
 struct authdes_cred *VAR_4;
 static int VAR_5;
 char *VAR_6;
 enum auth_stat VAR_7;

 VAR_5 = 0;

 VAR_7 = FUNC_2(VAR_3);

 if (VAR_7 != VAR_0) {
  FUNC_1(VAR_3->rq_xprt, VAR_7);
  return(&VAR_5);
 }

 VAR_4 = (struct authdes_cred *) VAR_3->rq_clntcred;
 VAR_6 = VAR_4->adc_fullname.name;

 VAR_5 = FUNC_0(VAR_6, "/etc/publickey", VAR_1,
  VAR_2->key.yp_buf_len, VAR_2->key.yp_buf_val,
  0, ((void*)0));

 if (VAR_5)
  return (&VAR_5);

 VAR_5 = FUNC_3(VAR_6, VAR_2->mapname, VAR_1,
  VAR_2->key.yp_buf_len, VAR_2->key.yp_buf_val,
  0, ((void*)0));

 return (&VAR_5);
}

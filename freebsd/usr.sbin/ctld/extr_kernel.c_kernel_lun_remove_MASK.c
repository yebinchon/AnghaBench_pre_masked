
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lun {int l_ctl_lun; int l_backend; } ;
struct TYPE_3__ {int lun_id; } ;
struct TYPE_4__ {TYPE_1__ rm; } ;
struct ctl_lun_req {int status; int error_str; TYPE_2__ reqdata; int reqtype; int backend; } ;
typedef int req ;


 int VAR_0 ;


 int VAR_1 ;

 int FUNC_0 (struct ctl_lun_req*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct ctl_lun_req*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ,int ,int) ;

int
FUNC_5(struct lun *VAR_3)
{
 struct ctl_lun_req VAR_4;

 FUNC_0(&VAR_4, sizeof(VAR_4));

 FUNC_4(VAR_4.backend, VAR_3->l_backend, sizeof(VAR_4.backend));
 VAR_4.reqtype = VAR_0;

 VAR_4.reqdata.rm.lun_id = VAR_3->l_ctl_lun;

 if (FUNC_1(VAR_2, VAR_1, &VAR_4) == -1) {
  FUNC_2("error issuing CTL_LUN_REQ ioctl");
  return (1);
 }

 switch (VAR_4.status) {
 case 130:
  FUNC_3("LUN removal error: %s", VAR_4.error_str);
  return (1);
 case 128:
  FUNC_3("LUN removal warning: %s", VAR_4.error_str);
  break;
 case 129:
  break;
 default:
  FUNC_3("unknown LUN removal status: %d", VAR_4.status);
  return (1);
 }

 return (0);
}

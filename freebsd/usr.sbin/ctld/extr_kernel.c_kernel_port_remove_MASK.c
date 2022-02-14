
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int t_name; } ;
struct portal_group {int pg_tag; } ;
struct port {int p_ctl_port; scalar_t__ p_ioctl_port; struct portal_group* p_portal_group; struct target* p_target; } ;
struct ctl_req {scalar_t__ status; scalar_t__ error_str; void* lun; void* plun; int port; int * args_nvl; int * args; int args_len; int reqtype; int driver; int targ_port; } ;
struct ctl_port_entry {scalar_t__ status; scalar_t__ error_str; void* lun; void* plun; int port; int * args_nvl; int * args; int args_len; int reqtype; int driver; int targ_port; } ;
struct ctl_lun_map {scalar_t__ status; scalar_t__ error_str; void* lun; void* plun; int port; int * args_nvl; int * args; int args_len; int reqtype; int driver; int targ_port; } ;
typedef int req ;
typedef int entry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct ctl_req*,int) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,struct ctl_req*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,char*,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,char*,int) ;

int
FUNC_11(struct port *VAR_8)
{
 struct ctl_port_entry VAR_9;
 struct ctl_lun_map VAR_10;
 struct ctl_req VAR_11;
 struct target *VAR_12 = VAR_8->p_target;
 struct portal_group *VAR_13 = VAR_8->p_portal_group;
 int VAR_14;


 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9.targ_port = VAR_8->p_ctl_port;
 VAR_14 = FUNC_1(VAR_7, VAR_0, &VAR_9);
 if (VAR_14 != 0) {
  FUNC_3("CTL_DISABLE_PORT ioctl failed");
  return (-1);
 }


 if (VAR_8->p_portal_group || VAR_8->p_ioctl_port) {
  FUNC_0(&VAR_11, sizeof(VAR_11));
  FUNC_10(VAR_11.driver, VAR_8->p_ioctl_port ? "ioctl" : "iscsi",
      sizeof(VAR_11.driver));
  VAR_11.reqtype = VAR_5;
  VAR_11.args_nvl = FUNC_7(0);
  if (VAR_11.args_nvl == ((void*)0))
   FUNC_2(1, "nvlist_create");

  if (VAR_8->p_ioctl_port)
   FUNC_6(VAR_11.args_nvl, "port_id", "%d",
       VAR_8->p_ctl_port);
  else {
   FUNC_5(VAR_11.args_nvl, "cfiscsi_target",
       VAR_12->t_name);
   FUNC_6(VAR_11.args_nvl,
       "cfiscsi_portal_group_tag", "%u", VAR_13->pg_tag);
  }

  VAR_11.args = FUNC_9(VAR_11.args_nvl, &VAR_11.args_len);
  if (VAR_11.args == ((void*)0)) {
   FUNC_3("error packing nvlist");
   return (1);
  }

  VAR_14 = FUNC_1(VAR_7, VAR_4, &VAR_11);
  FUNC_8(VAR_11.args_nvl);

  if (VAR_14 != 0) {
   FUNC_3("error issuing CTL_PORT_REQ ioctl");
   return (1);
  }
  if (VAR_11.status == VAR_1) {
   FUNC_4("error returned from port removal request: %s",
       VAR_11.error_str);
   return (1);
  }
  if (VAR_11.status != VAR_3) {
   FUNC_4("unknown port removal request status %d",
       VAR_11.status);
   return (1);
  }
 } else {

  VAR_10.port = VAR_8->p_ctl_port;
  VAR_10.plun = VAR_6;
  VAR_10.lun = VAR_6;
  VAR_14 = FUNC_1(VAR_7, VAR_2, &VAR_10);
  if (VAR_14 != 0)
   FUNC_3("CTL_LUN_MAP ioctl failed");
 }
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_user {struct ipmi_smi* intf; } ;
struct ipmi_smi {int maintenance_mode; int maintenance_mode_enable; int maintenance_mode_lock; int auto_maintenance_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct ipmi_user* FUNC_0 (struct ipmi_user*,int*) ;
 int FUNC_1 (struct ipmi_smi*) ;
 int FUNC_2 (struct ipmi_user*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct ipmi_user *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5;
 unsigned long VAR_6;
 struct ipmi_smi *VAR_7 = VAR_2->intf;

 VAR_2 = FUNC_0(VAR_2, &VAR_5);
 if (!VAR_2)
  return -VAR_1;

 FUNC_3(&VAR_7->maintenance_mode_lock, VAR_6);
 if (VAR_7->maintenance_mode != VAR_3) {
  switch (VAR_3) {
  case 130:
   VAR_7->maintenance_mode_enable
    = (VAR_7->auto_maintenance_timeout > 0);
   break;

  case 129:
   VAR_7->maintenance_mode_enable = 0;
   break;

  case 128:
   VAR_7->maintenance_mode_enable = 1;
   break;

  default:
   VAR_4 = -VAR_0;
   goto out_unlock;
  }
  VAR_7->maintenance_mode = VAR_3;

  FUNC_1(VAR_7);
 }
 out_unlock:
 FUNC_4(&VAR_7->maintenance_mode_lock, VAR_6);
 FUNC_2(VAR_2, VAR_5);

 return VAR_4;
}

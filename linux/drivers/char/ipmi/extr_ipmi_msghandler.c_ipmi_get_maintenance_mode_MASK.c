
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_user {TYPE_1__* intf; } ;
struct TYPE_2__ {int maintenance_mode; int maintenance_mode_lock; } ;


 int VAR_0 ;
 struct ipmi_user* FUNC_0 (struct ipmi_user*,int*) ;
 int FUNC_1 (struct ipmi_user*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct ipmi_user *VAR_1)
{
 int VAR_2, VAR_3;
 unsigned long VAR_4;

 VAR_1 = FUNC_0(VAR_1, &VAR_3);
 if (!VAR_1)
  return -VAR_0;

 FUNC_2(&VAR_1->intf->maintenance_mode_lock, VAR_4);
 VAR_2 = VAR_1->intf->maintenance_mode;
 FUNC_3(&VAR_1->intf->maintenance_mode_lock, VAR_4);
 FUNC_1(VAR_1, VAR_3);

 return VAR_2;
}

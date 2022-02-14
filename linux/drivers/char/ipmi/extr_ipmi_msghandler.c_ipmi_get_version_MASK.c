
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_user {int intf; } ;
struct ipmi_device_id {int dummy; } ;


 int VAR_0 ;
 struct ipmi_user* FUNC_0 (struct ipmi_user*,int*) ;
 int FUNC_1 (int ,int *,struct ipmi_device_id*,int *,int *) ;
 unsigned char FUNC_2 (struct ipmi_device_id*) ;
 unsigned char FUNC_3 (struct ipmi_device_id*) ;
 int FUNC_4 (struct ipmi_user*,int) ;

int FUNC_5(struct ipmi_user *VAR_1,
       unsigned char *VAR_2,
       unsigned char *VAR_3)
{
 struct ipmi_device_id VAR_4;
 int VAR_5, VAR_6;

 VAR_1 = FUNC_0(VAR_1, &VAR_6);
 if (!VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1->intf, ((void*)0), &VAR_4, ((void*)0), ((void*)0));
 if (!VAR_5) {
  *VAR_2 = FUNC_2(&VAR_4);
  *VAR_3 = FUNC_3(&VAR_4);
 }
 FUNC_4(VAR_1, VAR_6);

 return VAR_5;
}

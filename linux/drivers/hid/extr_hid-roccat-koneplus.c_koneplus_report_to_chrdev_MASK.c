
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u8 ;
struct koneplus_roccat_report {scalar_t__ type; scalar_t__ data2; scalar_t__ profile; int data1; } ;
struct koneplus_mouse_report_button {scalar_t__ type; scalar_t__ data2; int data1; } ;
struct koneplus_device {int chrdev_minor; scalar_t__ actual_profile; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static void FUNC_1(struct koneplus_device const *VAR_4,
  u8 const *VAR_5)
{
 struct koneplus_roccat_report VAR_6;
 struct koneplus_mouse_report_button const *VAR_7;

 if (VAR_5[0] != VAR_3)
  return;

 VAR_7 = (struct koneplus_mouse_report_button const *)VAR_5;

 if ((VAR_7->type == VAR_1 ||
   VAR_7->type == VAR_2) &&
   VAR_7->data2 != VAR_0)
  return;

 VAR_6.type = VAR_7->type;
 VAR_6.data1 = VAR_7->data1;
 VAR_6.data2 = VAR_7->data2;
 VAR_6.profile = VAR_4->actual_profile + 1;
 FUNC_0(VAR_4->chrdev_minor,
   (uint8_t const *)&VAR_6);
}

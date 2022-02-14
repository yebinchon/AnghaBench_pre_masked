
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u8 ;
struct kovaplus_roccat_report {scalar_t__ type; int data2; scalar_t__ data1; scalar_t__ button; scalar_t__ profile; } ;
struct kovaplus_mouse_report_button {scalar_t__ type; int data2; scalar_t__ data1; } ;
struct kovaplus_device {int chrdev_minor; scalar_t__ actual_profile; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ const VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int const*) ;

__attribute__((used)) static void FUNC_2(struct kovaplus_device const *VAR_7,
  u8 const *VAR_8)
{
 struct kovaplus_roccat_report VAR_9;
 struct kovaplus_mouse_report_button const *VAR_10;

 if (VAR_8[0] != VAR_6)
  return;

 VAR_10 = (struct kovaplus_mouse_report_button const *)VAR_8;

 if (VAR_10->type == VAR_2)
  return;

 VAR_9.type = VAR_10->type;
 VAR_9.profile = VAR_7->actual_profile + 1;

 if (VAR_9.type == VAR_1 ||
   VAR_9.type == VAR_4 ||
   VAR_9.type == VAR_3 ||
   VAR_9.type == VAR_5)
  VAR_9.button = VAR_10->data1;
 else
  VAR_9.button = 0;

 if (VAR_9.type == VAR_0)
  VAR_9.data1 = FUNC_0(VAR_10->data1);
 else
  VAR_9.data1 = VAR_10->data1;

 VAR_9.data2 = VAR_10->data2;

 FUNC_1(VAR_7->chrdev_minor,
   (uint8_t const *)&VAR_9);
}

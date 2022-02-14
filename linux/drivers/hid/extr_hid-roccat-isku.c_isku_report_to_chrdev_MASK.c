
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u8 ;
struct isku_roccat_report {scalar_t__ profile; int data2; int data1; int event; } ;
struct isku_report_button {int data2; int data1; int event; } ;
struct isku_device {int chrdev_minor; scalar_t__ actual_profile; } ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static void FUNC_1(struct isku_device const *VAR_1,
  u8 const *VAR_2)
{
 struct isku_roccat_report VAR_3;
 struct isku_report_button const *VAR_4;

 if (VAR_2[0] != VAR_0)
  return;

 VAR_4 = (struct isku_report_button const *)VAR_2;

 VAR_3.event = VAR_4->event;
 VAR_3.data1 = VAR_4->data1;
 VAR_3.data2 = VAR_4->data2;
 VAR_3.profile = VAR_1->actual_profile + 1;
 FUNC_0(VAR_1->chrdev_minor,
   (uint8_t const *)&VAR_3);
}

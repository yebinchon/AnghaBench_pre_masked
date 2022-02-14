
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u8 ;
struct savu_roccat_report {int * data; int type; } ;
struct savu_mouse_report_special {int * data; int type; } ;
struct roccat_common2_device {int chrdev_minor; } ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static void FUNC_1(struct roccat_common2_device const *VAR_1,
  u8 const *VAR_2)
{
 struct savu_roccat_report VAR_3;
 struct savu_mouse_report_special const *VAR_4;

 if (VAR_2[0] != VAR_0)
  return;

 VAR_4 = (struct savu_mouse_report_special const *)VAR_2;

 VAR_3.type = VAR_4->type;
 VAR_3.data[0] = VAR_4->data[0];
 VAR_3.data[1] = VAR_4->data[1];
 FUNC_0(VAR_1->chrdev_minor,
   (uint8_t const *)&VAR_3);
}

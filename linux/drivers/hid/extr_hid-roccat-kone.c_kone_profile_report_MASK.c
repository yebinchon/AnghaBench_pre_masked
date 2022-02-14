
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint ;
struct kone_roccat_report {scalar_t__ key; int value; int event; } ;
struct kone_device {int chrdev_minor; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct kone_device *VAR_1, uint VAR_2)
{
 struct kone_roccat_report VAR_3;

 VAR_3.event = VAR_0;
 VAR_3.value = VAR_2;
 VAR_3.key = 0;
 FUNC_0(VAR_1->chrdev_minor, (uint8_t *)&VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu_backlight {int cdev; } ;
struct ims_pcu {struct ims_pcu_backlight backlight; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ims_pcu *VAR_0)
{
 struct ims_pcu_backlight *VAR_1 = &VAR_0->backlight;

 FUNC_0(&VAR_1->cdev);
}

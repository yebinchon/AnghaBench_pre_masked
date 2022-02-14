
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aat1290_led_config_data {int max_flash_current; } ;
struct aat1290_led {int* mm_current_scale; TYPE_1__* pdev; } ;
typedef int max_mm_current_percent ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_1 (int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct aat1290_led *VAR_3,
   struct aat1290_led_config_data *VAR_4)
{
 static const int VAR_5[] = {
  20, 22, 25, 28, 32, 36, 40, 45, 50, 56,
  63, 71, 79, 89, 100
 };
 int VAR_6, VAR_7 =
   FUNC_0(VAR_4->max_flash_current);

 VAR_3->mm_current_scale = FUNC_1(&VAR_3->pdev->dev,
     sizeof(VAR_5),
     VAR_2);
 if (!VAR_3->mm_current_scale)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
  VAR_3->mm_current_scale[VAR_6] = VAR_7 *
       VAR_5[VAR_6] / 100;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bmp280_data {TYPE_1__* chip_info; int oversampling_press; } ;
struct TYPE_2__ {int* oversampling_press_avail; int num_oversampling_press_avail; int (* chip_config ) (struct bmp280_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bmp280_data*) ;

__attribute__((used)) static int FUNC_2(struct bmp280_data *VAR_1,
            int VAR_2)
{
 int VAR_3;
 const int *VAR_4 = VAR_1->chip_info->oversampling_press_avail;
 const int VAR_5 = VAR_1->chip_info->num_oversampling_press_avail;

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  if (VAR_4[VAR_3] == VAR_2) {
   VAR_1->oversampling_press = FUNC_0(VAR_2);

   return VAR_1->chip_info->chip_config(VAR_1);
  }
 }
 return -VAR_0;
}

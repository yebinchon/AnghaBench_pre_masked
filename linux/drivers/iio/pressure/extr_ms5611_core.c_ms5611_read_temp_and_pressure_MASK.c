
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ms5611_state {int (* read_adc_temp_and_pressure ) (int *,int *,int *) ;TYPE_1__* chip_info; } ;
struct iio_dev {int dev; } ;
typedef int s32 ;
struct TYPE_2__ {int (* temp_and_pressure_compensate ) (TYPE_1__*,int *,int *) ;} ;


 int FUNC_0 (int *,char*) ;
 struct ms5611_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_0,
      s32 *VAR_1, s32 *VAR_2)
{
 int VAR_3;
 struct ms5611_state *VAR_4 = FUNC_1(VAR_0);

 VAR_3 = VAR_4->read_adc_temp_and_pressure(&VAR_0->dev, VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->dev,
   "failed to read temperature and pressure\n");
  return VAR_3;
 }

 return VAR_4->chip_info->temp_and_pressure_compensate(VAR_4->chip_info,
          VAR_1, VAR_2);
}

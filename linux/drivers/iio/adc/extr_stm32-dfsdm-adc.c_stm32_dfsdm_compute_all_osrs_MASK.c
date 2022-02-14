
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_filter {int * flo; } ;
struct stm32_dfsdm_adc {size_t fl_id; TYPE_1__* dfsdm; } ;
struct iio_dev {int dev; } ;
struct TYPE_2__ {struct stm32_dfsdm_filter* fl_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct stm32_dfsdm_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct stm32_dfsdm_filter*,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
     unsigned int VAR_2)
{
 struct stm32_dfsdm_adc *VAR_3 = FUNC_1(VAR_1);
 struct stm32_dfsdm_filter *VAR_4 = &VAR_3->dfsdm->fl_list[VAR_3->fl_id];
 int VAR_5, VAR_6;

 FUNC_2(&VAR_4->flo[0], 0, sizeof(VAR_4->flo[0]));
 FUNC_2(&VAR_4->flo[1], 0, sizeof(VAR_4->flo[1]));

 VAR_5 = FUNC_3(VAR_4, 0, VAR_2);
 VAR_6 = FUNC_3(VAR_4, 1, VAR_2);
 if (VAR_5 < 0 && VAR_6 < 0) {
  FUNC_0(&VAR_1->dev,
   "Filter parameters not found: errors %d/%d\n",
   VAR_5, VAR_6);
  return -VAR_0;
 }

 return 0;
}

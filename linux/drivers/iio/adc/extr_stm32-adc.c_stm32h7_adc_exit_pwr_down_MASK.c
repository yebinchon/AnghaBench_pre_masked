
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stm32_adc {TYPE_2__* cfg; TYPE_1__* common; } ;
struct iio_dev {int dev; } ;
struct TYPE_4__ {int has_vregready; } ;
struct TYPE_3__ {scalar_t__ rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (struct stm32_adc*) ;
 int FUNC_2 (struct stm32_adc*,int ,int ) ;
 int FUNC_3 (int ,int,int,int,int ) ;
 int FUNC_4 (struct stm32_adc*,int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct stm32_adc *VAR_8)
{
 struct iio_dev *VAR_9 = FUNC_1(VAR_8);
 int VAR_10;
 u32 VAR_11;


 FUNC_2(VAR_8, VAR_0, VAR_5);
 FUNC_4(VAR_8, VAR_0, VAR_2);

 if (VAR_8->common->rate > VAR_4)
  FUNC_4(VAR_8, VAR_0, VAR_3);


 if (!VAR_8->cfg->has_vregready) {
  FUNC_5(10, 20);
  return 0;
 }

 VAR_10 = FUNC_3(VAR_1, VAR_11,
        VAR_11 & VAR_6, 100,
        VAR_7);
 if (VAR_10) {
  FUNC_4(VAR_8, VAR_0, VAR_5);
  FUNC_0(&VAR_9->dev, "Failed to exit power down\n");
 }

 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; int dev; } ;
struct exynos_adc {int read_ts; int ts_x; int ts_y; TYPE_1__* data; int completion; int regs; } ;
struct TYPE_2__ {int (* init_hw ) (struct exynos_adc*) ;int (* start_conv ) (struct exynos_adc*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 struct exynos_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct exynos_adc*,int ) ;
 int FUNC_7 (struct exynos_adc*) ;
 unsigned long FUNC_8 (int *,int ) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_5, int *VAR_6, int *VAR_7)
{
 struct exynos_adc *VAR_8 = FUNC_2(VAR_5);
 unsigned long VAR_9;
 int VAR_10;

 FUNC_3(&VAR_5->mlock);
 VAR_8->read_ts = 1;

 FUNC_5(&VAR_8->completion);

 FUNC_9(VAR_1 | VAR_2,
        FUNC_0(VAR_8->regs));


 VAR_8->data->start_conv(VAR_8, VAR_0);

 VAR_9 = FUNC_8(&VAR_8->completion,
           VAR_4);
 if (VAR_9 == 0) {
  FUNC_1(&VAR_5->dev, "Conversion timed out! Resetting\n");
  if (VAR_8->data->init_hw)
   VAR_8->data->init_hw(VAR_8);
  VAR_10 = -VAR_3;
 } else {
  *VAR_6 = VAR_8->ts_x;
  *VAR_7 = VAR_8->ts_y;
  VAR_10 = 0;
 }

 VAR_8->read_ts = 0;
 FUNC_4(&VAR_5->mlock);

 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; int dev; } ;
struct iio_chan_spec {int address; } ;
struct exynos_adc {int value; TYPE_1__* data; int completion; } ;
struct TYPE_2__ {int (* init_hw ) (struct exynos_adc*) ;int (* start_conv ) (struct exynos_adc*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct exynos_adc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct exynos_adc*,int ) ;
 int FUNC_6 (struct exynos_adc*) ;
 unsigned long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_5,
    struct iio_chan_spec const *VAR_6,
    int *VAR_7,
    int *VAR_8,
    long VAR_9)
{
 struct exynos_adc *VAR_10 = FUNC_1(VAR_5);
 unsigned long VAR_11;
 int VAR_12;

 if (VAR_9 != VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_5->mlock);
 FUNC_4(&VAR_10->completion);


 if (VAR_10->data->start_conv)
  VAR_10->data->start_conv(VAR_10, VAR_6->address);

 VAR_11 = FUNC_7(&VAR_10->completion,
           VAR_2);
 if (VAR_11 == 0) {
  FUNC_0(&VAR_5->dev, "Conversion timed out! Resetting\n");
  if (VAR_10->data->init_hw)
   VAR_10->data->init_hw(VAR_10);
  VAR_12 = -VAR_1;
 } else {
  *VAR_7 = VAR_10->value;
  *VAR_8 = 0;
  VAR_12 = VAR_4;
 }

 FUNC_3(&VAR_5->mlock);

 return VAR_12;
}

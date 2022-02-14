
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef enum ads8688_range { ____Placeholder_ads8688_range } ads8688_range ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_0,
       struct iio_chan_spec const *VAR_1,
       enum ads8688_range VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1->channel);
 VAR_4 = FUNC_1(VAR_0, VAR_3, VAR_2);

 return VAR_4;
}

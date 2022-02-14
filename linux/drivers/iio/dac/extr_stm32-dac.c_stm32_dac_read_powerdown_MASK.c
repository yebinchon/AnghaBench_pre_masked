
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct iio_dev*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct iio_dev *VAR_0,
     uintptr_t VAR_1,
     const struct iio_chan_spec *VAR_2,
     char *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0, VAR_2->channel);

 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_3, "%d\n", VAR_4 ? 0 : 1);
}

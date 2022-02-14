
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (struct iio_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
        const struct iio_chan_spec *VAR_3,
        int VAR_4,
        int VAR_5,
        long VAR_6)
{
 if ((VAR_6 != VAR_1) || VAR_5)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_4);
}

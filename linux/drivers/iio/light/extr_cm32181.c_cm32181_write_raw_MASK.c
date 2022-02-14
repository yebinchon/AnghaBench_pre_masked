
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct cm32181_chip {int calibscale; } ;


 int VAR_0 ;


 int FUNC_0 (struct cm32181_chip*,int) ;
 struct cm32181_chip* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
        struct iio_chan_spec const *VAR_2,
        int VAR_3, int VAR_4, long VAR_5)
{
 struct cm32181_chip *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 129:
  VAR_6->calibscale = VAR_3;
  return VAR_3;
 case 128:
  VAR_7 = FUNC_0(VAR_6, VAR_4);
  return VAR_7;
 }

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max11100_state {int vref_reg; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct max11100_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
        struct iio_chan_spec const *VAR_5,
        int *VAR_6, int *VAR_7, long VAR_8)
{
 int VAR_9, VAR_10;
 struct max11100_state *VAR_11 = FUNC_0(VAR_4);

 switch (VAR_8) {
 case 129:
  VAR_9 = FUNC_1(VAR_4, VAR_6);
  if (VAR_9)
   return VAR_9;

  return VAR_2;

 case 128:
  VAR_10 = FUNC_2(VAR_11->vref_reg);
  if (VAR_10 < 0)

   return -VAR_0;

  *VAR_6 = VAR_10 / 1000;
  *VAR_7 = VAR_3;
  return VAR_1;
 }

 return -VAR_0;
}

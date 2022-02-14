
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rescale {int source; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 struct rescale* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int const**,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
         struct iio_chan_spec const *VAR_3,
         const int **VAR_4, int *VAR_5, int *VAR_6,
         long VAR_7)
{
 struct rescale *VAR_8 = FUNC_0(VAR_2);

 switch (VAR_7) {
 case 128:
  *VAR_5 = VAR_1;
  return FUNC_1(VAR_8->source,
        VAR_4, VAR_6);
 default:
  return -VAR_0;
 }
}

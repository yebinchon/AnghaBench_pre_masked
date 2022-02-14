
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct ad7768_state {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct ad7768_state*,int) ;
 struct ad7768_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int VAR_3, int VAR_4, long VAR_5)
{
 struct ad7768_state *VAR_6 = FUNC_1(VAR_1);

 switch (VAR_5) {
 case 128:
  return FUNC_0(VAR_6, VAR_3);
 default:
  return -VAR_0;
 }
}

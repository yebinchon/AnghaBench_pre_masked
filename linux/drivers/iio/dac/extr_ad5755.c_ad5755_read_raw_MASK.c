
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
struct ad5755_state {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ad5755_state*,struct iio_chan_spec const*,long,int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct ad5755_state*,struct iio_chan_spec const*,int*,int*) ;
 int FUNC_2 (struct ad5755_state*,struct iio_chan_spec const*) ;
 int FUNC_3 (struct iio_dev*,unsigned int) ;
 struct ad5755_state* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
 const struct iio_chan_spec *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct ad5755_state *VAR_8 = FUNC_4(VAR_3);
 unsigned int VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 switch (VAR_7) {
 case 128:
  FUNC_1(VAR_8, VAR_4, &VAR_12, &VAR_13);
  *VAR_5 = VAR_13 - VAR_12;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;
 case 129:
  *VAR_5 = FUNC_2(VAR_8, VAR_4);
  return VAR_2;
 default:
  VAR_14 = FUNC_0(VAR_8, VAR_4, VAR_7, 0,
      &VAR_9, &VAR_10, &VAR_11);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_3(VAR_3, VAR_9);
  if (VAR_14 < 0)
   return VAR_14;

  *VAR_5 = (VAR_14 - VAR_11) >> VAR_10;

  return VAR_2;
 }

 return -VAR_0;
}

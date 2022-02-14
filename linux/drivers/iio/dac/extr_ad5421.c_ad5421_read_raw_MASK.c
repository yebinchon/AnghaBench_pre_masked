
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
struct ad5421_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ad5421_state*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct ad5421_state*) ;
 int FUNC_2 (struct iio_dev*,int ) ;
 struct ad5421_state* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_7,
 struct iio_chan_spec const *VAR_8, int *VAR_9, int *VAR_10, long VAR_11)
{
 struct ad5421_state *VAR_12 = FUNC_3(VAR_7);
 unsigned int VAR_13, VAR_14;
 int VAR_15;

 if (VAR_8->type != VAR_4)
  return -VAR_3;

 switch (VAR_11) {
 case 129:
  VAR_15 = FUNC_2(VAR_7, VAR_0);
  if (VAR_15 < 0)
   return VAR_15;
  *VAR_9 = VAR_15;
  return VAR_6;
 case 128:
  FUNC_0(VAR_12, &VAR_13, &VAR_14);
  *VAR_9 = VAR_14 - VAR_13;
  *VAR_10 = (1 << 16) * 1000;
  return VAR_5;
 case 130:
  *VAR_9 = FUNC_1(VAR_12);
  return VAR_6;
 case 132:
  VAR_15 = FUNC_2(VAR_7, VAR_2);
  if (VAR_15 < 0)
   return VAR_15;
  *VAR_9 = VAR_15 - 32768;
  return VAR_6;
 case 131:
  VAR_15 = FUNC_2(VAR_7, VAR_1);
  if (VAR_15 < 0)
   return VAR_15;
  *VAR_9 = VAR_15;
  return VAR_6;
 }

 return -VAR_3;
}

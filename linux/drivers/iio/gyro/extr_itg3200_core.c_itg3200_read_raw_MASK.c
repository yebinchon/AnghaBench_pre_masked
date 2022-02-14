
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iio_dev*,int ,int*) ;
 int FUNC_1 (struct iio_dev*,int,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_7,
  const struct iio_chan_spec *VAR_8,
  int *VAR_9, int *VAR_10, long VAR_11)
{
 int VAR_12 = 0;
 u8 VAR_13;
 u8 VAR_14;

 switch (VAR_11) {
 case 130:
  VAR_13 = (u8)VAR_8->address;
  VAR_12 = FUNC_1(VAR_7, VAR_13, VAR_9);
  return VAR_2;
 case 128:
  *VAR_9 = 0;
  if (VAR_8->type == VAR_1)
   *VAR_10 = 1000000000/280;
  else
   *VAR_10 = 1214142;
  return VAR_3;
 case 131:

  *VAR_9 = 23000;
  return VAR_2;
 case 129:
  VAR_12 = FUNC_0(VAR_7, VAR_5, &VAR_14);
  if (VAR_12)
   return VAR_12;

  *VAR_9 = (VAR_14 & VAR_4) ? 1000 : 8000;

  VAR_12 = FUNC_0(VAR_7,
      VAR_6,
      &VAR_14);
  if (VAR_12)
   return VAR_12;

  *VAR_9 /= VAR_14 + 1;
  return VAR_2;

 default:
  return -VAR_0;
 }
}

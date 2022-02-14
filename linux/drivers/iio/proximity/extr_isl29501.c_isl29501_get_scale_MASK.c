
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isl29501_private {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int** VAR_6 ;
 int FUNC_1 (struct isl29501_private*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct isl29501_private *VAR_7,
         const struct iio_chan_spec *VAR_8,
         int *VAR_9, int *VAR_10)
{
 int VAR_11;
 u32 VAR_12;

 switch (VAR_8->type) {
 case 129:

  *VAR_9 = 3331;
  *VAR_10 = 6553600;

  return VAR_1;
 case 130:

  *VAR_9 = 0;
  *VAR_10 = 95874;

  return VAR_4;
 case 131:

  *VAR_9 = 35;
  *VAR_10 = 10000;

  return VAR_1;
 case 132:
  VAR_11 = FUNC_1(VAR_7,
          VAR_5,
          &VAR_12);
  if (VAR_11 < 0)
   return VAR_11;

  if (VAR_12 > FUNC_0(VAR_6))
   return -VAR_0;

  if (!VAR_12) {
   *VAR_9 = 0;
   *VAR_10 = 0;
   return VAR_2;
  }

  *VAR_9 = VAR_6[VAR_12 - 1][0];
  *VAR_10 = VAR_6[VAR_12 - 1][1];

  return VAR_3;
 case 128:

  *VAR_9 = 125;
  *VAR_10 = 100000;

  return VAR_1;
 default:
  return -VAR_0;
 }
}

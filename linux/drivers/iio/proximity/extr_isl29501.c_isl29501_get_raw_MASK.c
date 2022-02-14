
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29501_private {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct isl29501_private*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct isl29501_private *VAR_7,
       const struct iio_chan_spec *VAR_8,
       int *VAR_9)
{
 int VAR_10;

 switch (VAR_8->type) {
 case 129:
  VAR_10 = FUNC_0(VAR_7, VAR_3, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  return VAR_1;
 case 131:
  VAR_10 = FUNC_0(VAR_7,
          VAR_2,
          VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  return VAR_1;
 case 130:
  VAR_10 = FUNC_0(VAR_7, VAR_5, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  return VAR_1;
 case 132:
  VAR_10 = FUNC_0(VAR_7, VAR_4, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  return VAR_1;
 case 128:
  VAR_10 = FUNC_0(VAR_7, VAR_6, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;

  return VAR_1;
 default:
  return -VAR_0;
 }
}

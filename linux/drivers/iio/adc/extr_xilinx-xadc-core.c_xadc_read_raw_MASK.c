
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct xadc {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {unsigned char sign; } ;
struct iio_chan_spec {int address; int type; TYPE_1__ scan_type; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iio_dev*) ;
 struct xadc* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int,int) ;
 unsigned int FUNC_3 (struct xadc*) ;
 int FUNC_4 (struct xadc*,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_7,
 struct iio_chan_spec const *VAR_8, int *VAR_9, int *VAR_10, long VAR_11)
{
 struct xadc *VAR_12 = FUNC_1(VAR_7);
 unsigned int VAR_13;
 uint16_t VAR_14;
 int VAR_15;

 switch (VAR_11) {
 case 140:
  if (FUNC_0(VAR_7))
   return -VAR_0;
  VAR_15 = FUNC_4(VAR_12, VAR_8->address, &VAR_14);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_14 >>= 4;
  if (VAR_8->scan_type.sign == 'u')
   *VAR_9 = VAR_14;
  else
   *VAR_9 = FUNC_2(VAR_14, 11);

  return VAR_3;
 case 138:
  switch (VAR_8->type) {
  case 136:

   switch (VAR_8->address) {
   case 133:
   case 135:
   case 128:
   case 129:
   case 134:
   case 130:
   case 131:
   case 132:
    *VAR_9 = 3000;
    break;
   default:
    *VAR_9 = 1000;
    break;
   }
   *VAR_10 = 12;
   return VAR_2;
  case 137:

   *VAR_9 = 503975;
   *VAR_10 = 12;
   return VAR_2;
  default:
   return -VAR_1;
  }
 case 141:

  *VAR_9 = -((273150 << 12) / 503975);
  return VAR_3;
 case 139:
  VAR_15 = FUNC_4(VAR_12, VAR_6, &VAR_14);
  if (VAR_15)
   return VAR_15;

  VAR_13 = (VAR_14 & VAR_4) >> VAR_5;
  if (VAR_13 < 2)
   VAR_13 = 2;

  *VAR_9 = FUNC_3(VAR_12) / VAR_13 / 26;

  return VAR_3;
 default:
  return -VAR_1;
 }
}

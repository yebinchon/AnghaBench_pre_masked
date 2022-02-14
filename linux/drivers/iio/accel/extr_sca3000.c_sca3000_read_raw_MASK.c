
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sca3000_state {int* rx; int lock; TYPE_1__* info; int mo_det_use_count; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int type; } ;
typedef int __be16 ;
struct TYPE_2__ {int scale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 struct sca3000_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int ** VAR_6 ;
 int FUNC_4 (struct sca3000_state*,int*) ;
 int FUNC_5 (struct sca3000_state*,int ,int) ;
 int FUNC_6 (struct sca3000_state*,int*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_7,
       struct iio_chan_spec const *VAR_8,
       int *VAR_9,
       int *VAR_10,
       long VAR_11)
{
 struct sca3000_state *VAR_12 = FUNC_1(VAR_7);
 int VAR_13;
 u8 VAR_14;

 switch (VAR_11) {
 case 130:
  FUNC_2(&VAR_12->lock);
  if (VAR_8->type == VAR_2) {
   if (VAR_12->mo_det_use_count) {
    FUNC_3(&VAR_12->lock);
    return -VAR_0;
   }
   VAR_14 = VAR_6[VAR_8->address][0];
   VAR_13 = FUNC_5(VAR_12, VAR_14, 2);
   if (VAR_13 < 0) {
    FUNC_3(&VAR_12->lock);
    return VAR_13;
   }
   *VAR_9 = (FUNC_0((__be16 *)VAR_12->rx) >> 3) & 0x1FFF;
   *VAR_9 = ((*VAR_9) << (sizeof(*VAR_9) * 8 - 13)) >>
    (sizeof(*VAR_9) * 8 - 13);
  } else {

   VAR_13 = FUNC_5(VAR_12,
            VAR_5,
            2);
   if (VAR_13 < 0) {
    FUNC_3(&VAR_12->lock);
    return VAR_13;
   }
   *VAR_9 = ((VAR_12->rx[0] & 0x3F) << 3) |
          ((VAR_12->rx[1] & 0xE0) >> 5);
  }
  FUNC_3(&VAR_12->lock);
  return VAR_3;
 case 128:
  *VAR_9 = 0;
  if (VAR_8->type == VAR_2)
   *VAR_10 = VAR_12->info->scale;
  else
   *VAR_10 = 555556;
  return VAR_4;
 case 131:
  *VAR_9 = -214;
  *VAR_10 = 600000;
  return VAR_4;
 case 129:
  FUNC_2(&VAR_12->lock);
  VAR_13 = FUNC_6(VAR_12, VAR_9);
  FUNC_3(&VAR_12->lock);
  return VAR_13 ? VAR_13 : VAR_3;
 case 132:
  FUNC_2(&VAR_12->lock);
  VAR_13 = FUNC_4(VAR_12, VAR_9);
  FUNC_3(&VAR_12->lock);
  return VAR_13;
 default:
  return -VAR_1;
 }
}

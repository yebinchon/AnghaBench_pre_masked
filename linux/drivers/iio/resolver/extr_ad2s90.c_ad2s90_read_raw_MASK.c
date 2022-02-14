
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
struct ad2s90_state {int* rx; int lock; int sdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 struct ad2s90_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5,
      int *VAR_6,
      int *VAR_7,
      long VAR_8)
{
 int VAR_9;
 struct ad2s90_state *VAR_10 = FUNC_0(VAR_4);

 if (VAR_5->type != VAR_1)
  return -VAR_0;

 switch (VAR_8) {
 case 128:

  *VAR_6 = 6283;
  *VAR_7 = 12;
  return VAR_2;
 case 129:
  FUNC_1(&VAR_10->lock);
  VAR_9 = FUNC_3(VAR_10->sdev, VAR_10->rx, 2);
  if (VAR_9 < 0) {
   FUNC_2(&VAR_10->lock);
   return VAR_9;
  }
  *VAR_6 = (((u16)(VAR_10->rx[0])) << 4) | ((VAR_10->rx[1] & 0xF0) >> 4);

  FUNC_2(&VAR_10->lock);

  return VAR_3;
 default:
  break;
 }

 return -VAR_0;
}

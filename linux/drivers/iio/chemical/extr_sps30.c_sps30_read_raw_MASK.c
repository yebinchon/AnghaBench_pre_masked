
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sps30_state {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int channel2; int type; } ;


 int VAR_0 ;







 int VAR_1 ;
 struct sps30_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sps30_state*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_2,
     struct iio_chan_spec const *VAR_3,
     int *VAR_4, int *VAR_5, long VAR_6)
{
 struct sps30_state *VAR_7 = FUNC_0(VAR_2);
 int VAR_8[4], VAR_9 = -VAR_0;

 switch (VAR_6) {
 case 134:
  switch (VAR_3->type) {
  case 132:
   FUNC_1(&VAR_7->lock);

   switch (VAR_3->channel2) {
   case 131:
    VAR_9 = FUNC_3(VAR_7, VAR_8, 1);
    break;
   case 129:
    VAR_9 = FUNC_3(VAR_7, VAR_8, 2);
    break;
   case 128:
    VAR_9 = FUNC_3(VAR_7, VAR_8, 3);
    break;
   case 130:
    VAR_9 = FUNC_3(VAR_7, VAR_8, 4);
    break;
   }
   FUNC_2(&VAR_7->lock);
   if (VAR_9)
    return VAR_9;

   *VAR_4 = VAR_8[VAR_3->address] / 100;
   *VAR_5 = (VAR_8[VAR_3->address] % 100) * 10000;

   return VAR_1;
  default:
   return -VAR_0;
  }
 case 133:
  switch (VAR_3->type) {
  case 132:
   switch (VAR_3->channel2) {
   case 131:
   case 129:
   case 128:
   case 130:
    *VAR_4 = 0;
    *VAR_5 = 10000;

    return VAR_1;
   default:
    return -VAR_0;
   }
  default:
   return -VAR_0;
  }
 }

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stx104_iio {int* chan_out_states; int base; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; int output; } ;


 int VAR_0 ;


 struct stx104_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
 struct iio_chan_spec const *VAR_2, int VAR_3, int VAR_4, long VAR_5)
{
 struct stx104_iio *const VAR_6 = FUNC_0(VAR_1);

 switch (VAR_5) {
 case 129:

  switch (VAR_3) {
  case 1:
   FUNC_1(0, VAR_6->base + 11);
   break;
  case 2:
   FUNC_1(1, VAR_6->base + 11);
   break;
  case 4:
   FUNC_1(2, VAR_6->base + 11);
   break;
  case 8:
   FUNC_1(3, VAR_6->base + 11);
   break;
  default:
   return -VAR_0;
  }

  return 0;
 case 128:
  if (VAR_2->output) {

   if ((unsigned int)VAR_3 > 65535)
    return -VAR_0;

   VAR_6->chan_out_states[VAR_2->channel] = VAR_3;
   FUNC_2(VAR_3, VAR_6->base + 4 + 2 * VAR_2->channel);

   return 0;
  }
  return -VAR_0;
 }

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stx104_iio {int* chan_out_states; int base; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; int output; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct stx104_iio* FUNC_1 (struct iio_dev*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
 struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6, long VAR_7)
{
 struct stx104_iio *const VAR_8 = FUNC_1(VAR_3);
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;

 switch (VAR_7) {
 case 131:

  VAR_9 = FUNC_2(VAR_8->base + 11);
  VAR_11 = VAR_9 & 0x3;

  *VAR_5 = 1 << VAR_11;
  return VAR_2;
 case 129:
  if (VAR_4->output) {
   *VAR_5 = VAR_8->chan_out_states[VAR_4->channel];
   return VAR_2;
  }


  FUNC_4(VAR_4->channel | (VAR_4->channel << 4), VAR_8->base + 2);


  FUNC_4(0, VAR_8->base);
  while (FUNC_2(VAR_8->base + 8) & FUNC_0(7));

  *VAR_5 = FUNC_3(VAR_8->base);
  return VAR_2;
 case 130:

  VAR_9 = FUNC_2(VAR_8->base + 11);
  VAR_10 = !(VAR_9 & FUNC_0(2));

  *VAR_5 = -32768 * VAR_10;
  return VAR_2;
 case 128:

  VAR_9 = FUNC_2(VAR_8->base + 11);
  VAR_10 = !(VAR_9 & FUNC_0(2));
  VAR_11 = VAR_9 & 0x3;

  *VAR_5 = 5;
  *VAR_6 = 15 - VAR_10 + VAR_11;
  return VAR_1;
 }

 return -VAR_0;
}

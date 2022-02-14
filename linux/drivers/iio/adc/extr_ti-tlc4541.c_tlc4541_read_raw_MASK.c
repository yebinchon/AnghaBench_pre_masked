
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlc4541_state {int * rx_buf; int scan_single_msg; int spi; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int shift; int realbits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct tlc4541_state* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct tlc4541_state*) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int *VAR_5,
       int *VAR_6,
       long VAR_7)
{
 int VAR_8 = 0;
 struct tlc4541_state *VAR_9 = FUNC_4(VAR_3);

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_2(VAR_3);
  if (VAR_8)
   return VAR_8;
  VAR_8 = FUNC_5(VAR_9->spi, &VAR_9->scan_single_msg);
  FUNC_3(VAR_3);
  if (VAR_8 < 0)
   return VAR_8;
  *VAR_5 = FUNC_1(VAR_9->rx_buf[0]);
  *VAR_5 = *VAR_5 >> VAR_4->scan_type.shift;
  *VAR_5 &= FUNC_0(VAR_4->scan_type.realbits - 1, 0);
  return VAR_2;
 case 128:
  VAR_8 = FUNC_6(VAR_9);
  if (VAR_8 < 0)
   return VAR_8;
  *VAR_5 = VAR_8;
  *VAR_6 = VAR_4->scan_type.realbits;
  return VAR_1;
 }
 return -VAR_0;
}

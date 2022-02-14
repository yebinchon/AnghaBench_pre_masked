
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltc2632_state {int spi_dev; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int realbits; int shift; } ;
struct iio_chan_spec {TYPE_1__ scan_type; int address; } ;


 int VAR_0 ;

 int VAR_1 ;
 struct ltc2632_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int VAR_4,
        int VAR_5,
        long VAR_6)
{
 struct ltc2632_state *VAR_7 = FUNC_0(VAR_2);

 switch (VAR_6) {
 case 128:
  if (VAR_4 >= (1 << VAR_3->scan_type.realbits) || VAR_4 < 0)
   return -VAR_0;

  return FUNC_1(VAR_7->spi_dev,
      VAR_1,
      VAR_3->address, VAR_4,
      VAR_3->scan_type.shift);
 default:
  return -VAR_0;
 }
}

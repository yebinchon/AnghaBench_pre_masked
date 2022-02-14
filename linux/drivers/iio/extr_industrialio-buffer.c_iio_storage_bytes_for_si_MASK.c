
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct TYPE_2__ {int storagebits; int repeat; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;


 struct iio_chan_spec* FUNC_0 (struct iio_dev*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct iio_dev *VAR_0,
          unsigned int VAR_1)
{
 const struct iio_chan_spec *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 VAR_3 = VAR_2->scan_type.storagebits / 8;
 if (VAR_2->scan_type.repeat > 1)
  VAR_3 *= VAR_2->scan_type.repeat;
 return VAR_3;
}

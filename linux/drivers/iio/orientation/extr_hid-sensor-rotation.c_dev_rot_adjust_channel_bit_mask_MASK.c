
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {char sign; int realbits; int storagebits; int repeat; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;



__attribute__((used)) static void FUNC_0(struct iio_chan_spec *VAR_0,
      int VAR_1)
{
 VAR_0->scan_type.sign = 's';

 VAR_0->scan_type.realbits = VAR_1 * 8;

 VAR_0->scan_type.storagebits = sizeof(u32) * 8;
 VAR_0->scan_type.repeat = 4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char sign; int realbits; int storagebits; } ;
struct iio_chan_spec {TYPE_1__ scan_type; } ;
typedef int s32 ;



__attribute__((used)) static void FUNC_0(struct iio_chan_spec *VAR_0,
     int VAR_1, int VAR_2)
{
 VAR_0[VAR_1].scan_type.sign = 's';

 VAR_0[VAR_1].scan_type.realbits = VAR_2 * 8;

 VAR_0[VAR_1].scan_type.storagebits = sizeof(s32) * 8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int realbits; } ;
struct iio_chan_spec {size_t address; TYPE_1__ scan_type; } ;
struct ads1015_data {TYPE_2__* channel_data; } ;
struct TYPE_4__ {int pga; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct ads1015_data *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = FUNC_1((VAR_4 * 1000000LL + VAR_5) <<
    (VAR_3->scan_type.realbits - 1), 1000000);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (VAR_1[VAR_6] == VAR_7) {
   VAR_2->channel_data[VAR_3->address].pga = VAR_6;
   return 0;
  }
 }

 return -VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int mlock; } ;
struct TYPE_2__ {int realbits; } ;
struct iio_chan_spec {size_t channel; int address; TYPE_1__ scan_type; } ;
struct ad7303_state {int* dac_cache; } ;


 int VAR_0 ;

 int FUNC_0 (struct ad7303_state*,int ,int) ;
 struct ad7303_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
 struct iio_chan_spec const *VAR_2, int VAR_3, int VAR_4, long VAR_5)
{
 struct ad7303_state *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;

 switch (VAR_5) {
 case 128:
  if (VAR_3 >= (1 << VAR_2->scan_type.realbits) || VAR_3 < 0)
   return -VAR_0;

  FUNC_2(&VAR_1->mlock);
  VAR_7 = FUNC_0(VAR_6, VAR_2->address, VAR_3);
  if (VAR_7 == 0)
   VAR_6->dac_cache[VAR_2->channel] = VAR_3;
  FUNC_3(&VAR_1->mlock);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}

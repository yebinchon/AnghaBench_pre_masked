
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct ad8366_state {int type; int* ch; int lock; struct ad8366_info* info; } ;
struct ad8366_info {int gain_max; int gain_min; } ;


 int VAR_0 ;




 int FUNC_0 (struct iio_dev*,int,int) ;
 struct ad8366_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int VAR_3,
       int VAR_4,
       long VAR_5)
{
 struct ad8366_state *VAR_6 = FUNC_1(VAR_1);
 struct ad8366_info *VAR_7 = VAR_6->info;
 int VAR_8 = 0, VAR_9;
 int VAR_10;


 if (VAR_3 < 0)
  VAR_9 = (VAR_3 * 1000) - (VAR_4 / 1000);
 else
  VAR_9 = (VAR_3 * 1000) + (VAR_4 / 1000);

 if (VAR_9 > VAR_7->gain_max || VAR_9 < VAR_7->gain_min)
  return -VAR_0;

 switch (VAR_6->type) {
 case 131:
  VAR_8 = (VAR_9 - 4500) / 253;
  break;
 case 130:
  VAR_8 = (15000 - VAR_9) / 1000;
  break;
 case 129:
  VAR_8 = ((VAR_9 - 500 - 20000) / 500) & 0x3F;
  break;
 }

 FUNC_2(&VAR_6->lock);
 switch (VAR_5) {
 case 128:
  VAR_6->ch[VAR_2->channel] = VAR_8;
  VAR_10 = FUNC_0(VAR_1, VAR_6->ch[0], VAR_6->ch[1]);
  break;
 default:
  VAR_10 = -VAR_0;
 }
 FUNC_3(&VAR_6->lock);

 return VAR_10;
}

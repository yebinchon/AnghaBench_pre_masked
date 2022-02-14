
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sca3000_state {int lock; TYPE_1__* info; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ channel2; size_t address; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
struct TYPE_2__ {int* mot_det_mult_y; int* mot_det_mult_xz; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 struct sca3000_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int ** VAR_1 ;
 int FUNC_4 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
         const struct iio_chan_spec *VAR_3,
         enum iio_event_type VAR_4,
         enum iio_event_direction VAR_5,
         enum iio_event_info VAR_6,
         int VAR_7, int VAR_8)
{
 struct sca3000_state *VAR_9 = FUNC_1(VAR_2);
 int VAR_10;
 int VAR_11;
 u8 VAR_12 = 0;

 if (VAR_3->channel2 == VAR_0) {
  VAR_11 = FUNC_0(VAR_9->info->mot_det_mult_y);
  while (VAR_11 > 0)
   if (VAR_7 >= VAR_9->info->mot_det_mult_y[--VAR_11]) {
    VAR_12 |= (1 << VAR_11);
    VAR_7 -= VAR_9->info->mot_det_mult_y[VAR_11];
   }
 } else {
  VAR_11 = FUNC_0(VAR_9->info->mot_det_mult_xz);
  while (VAR_11 > 0)
   if (VAR_7 >= VAR_9->info->mot_det_mult_xz[--VAR_11]) {
    VAR_12 |= (1 << VAR_11);
    VAR_7 -= VAR_9->info->mot_det_mult_xz[VAR_11];
   }
 }

 FUNC_2(&VAR_9->lock);
 VAR_10 = FUNC_4(VAR_9,
         VAR_1[VAR_3->address][1],
         VAR_12);
 FUNC_3(&VAR_9->lock);

 return VAR_10;
}

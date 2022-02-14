
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int num_event_specs; TYPE_1__* event_spec; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
struct TYPE_2__ {int type; int dir; int mask_shared_by_all; int mask_shared_by_dir; int mask_shared_by_type; int mask_separate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iio_dev*,struct iio_chan_spec const*,int,int,int,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_4,
 struct iio_chan_spec const *VAR_5)
{
 int VAR_6 = 0, VAR_7, VAR_8 = 0;
 enum iio_event_direction VAR_9;
 enum iio_event_type VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_event_specs; VAR_7++) {
  VAR_10 = VAR_5->event_spec[VAR_7].type;
  VAR_9 = VAR_5->event_spec[VAR_7].dir;

  VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_10, VAR_9,
   VAR_0, &VAR_5->event_spec[VAR_7].mask_separate);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_8 += VAR_6;

  VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_10, VAR_9,
   VAR_3,
   &VAR_5->event_spec[VAR_7].mask_shared_by_type);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_8 += VAR_6;

  VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_10, VAR_9,
   VAR_2,
   &VAR_5->event_spec[VAR_7].mask_shared_by_dir);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_8 += VAR_6;

  VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_7, VAR_10, VAR_9,
   VAR_1,
   &VAR_5->event_spec[VAR_7].mask_shared_by_all);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_8 += VAR_6;
 }
 VAR_6 = VAR_8;
 return VAR_6;
}

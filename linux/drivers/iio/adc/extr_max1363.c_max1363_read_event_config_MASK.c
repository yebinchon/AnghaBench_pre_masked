
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1363_state {int mask_low; int mask_high; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int channel; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 struct max1363_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1,
 const struct iio_chan_spec *VAR_2, enum iio_event_type VAR_3,
 enum iio_event_direction VAR_4)
{
 struct max1363_state *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;
 int VAR_7 = VAR_2->channel;

 FUNC_1(&VAR_1->mlock);
 if (VAR_4 == VAR_0)
  VAR_6 = (1 << VAR_7) & VAR_5->mask_low;
 else
  VAR_6 = (1 << VAR_7) & VAR_5->mask_high;
 FUNC_2(&VAR_1->mlock);

 return VAR_6;
}

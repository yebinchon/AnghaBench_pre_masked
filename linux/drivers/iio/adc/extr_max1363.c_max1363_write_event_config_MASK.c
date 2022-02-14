
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct max1363_state {int mask_low; int mask_high; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int channel; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 struct max1363_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct max1363_state*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
 const struct iio_chan_spec *VAR_2, enum iio_event_type VAR_3,
 enum iio_event_direction VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 struct max1363_state *VAR_7 = FUNC_1(VAR_1);
 u16 VAR_8;
 int VAR_9 = VAR_2->channel;

 FUNC_3(&VAR_1->mlock);
 VAR_8 = VAR_7->mask_low | VAR_7->mask_high;
 if (VAR_4 == VAR_0) {

  if (VAR_5 == 0)
   VAR_7->mask_low &= ~(1 << VAR_9);
  else {
   VAR_6 = FUNC_0((1 << VAR_9),
        VAR_8);
   if (VAR_6)
    goto error_ret;
   VAR_7->mask_low |= (1 << VAR_9);
  }
 } else {
  if (VAR_5 == 0)
   VAR_7->mask_high &= ~(1 << VAR_9);
  else {
   VAR_6 = FUNC_0((1 << VAR_9),
        VAR_8);
   if (VAR_6)
    goto error_ret;
   VAR_7->mask_high |= (1 << VAR_9);
  }
 }

 FUNC_2(VAR_7, !!(VAR_7->mask_high | VAR_7->mask_low));
error_ret:
 FUNC_4(&VAR_1->mlock);

 return VAR_6;
}

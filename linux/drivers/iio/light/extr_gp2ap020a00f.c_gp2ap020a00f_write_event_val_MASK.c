
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct gp2ap020a00f_data {int* thresh_val; int lock; int flags; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int) ;


 int FUNC_1 (struct iio_chan_spec const*,int) ;
 int FUNC_2 (struct gp2ap020a00f_data*,int,int) ;
 struct gp2ap020a00f_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_6,
     const struct iio_chan_spec *VAR_7,
     enum iio_event_type VAR_8,
     enum iio_event_direction VAR_9,
     enum iio_event_info VAR_10,
     int VAR_11, int VAR_12)
{
 struct gp2ap020a00f_data *VAR_13 = FUNC_3(VAR_6);
 bool VAR_14 = 0;
 u8 VAR_15;
 u8 VAR_16;
 int VAR_17 = 0;

 FUNC_4(&VAR_13->lock);

 VAR_16 = FUNC_1(VAR_7, VAR_9);
 VAR_15 = FUNC_0(VAR_16);

 if (VAR_15 > VAR_5) {
  VAR_17 = -VAR_0;
  goto error_unlock;
 }

 switch (VAR_16) {
 case 129:
  VAR_14 = FUNC_6(VAR_2,
       &VAR_13->flags);
  break;
 case 128:
  VAR_14 = FUNC_6(VAR_1,
       &VAR_13->flags);
  break;
 case 131:
  if (VAR_11 == 0) {
   VAR_17 = -VAR_0;
   goto error_unlock;
  }
  VAR_14 = FUNC_6(VAR_4,
       &VAR_13->flags);
  break;
 case 130:
  if (VAR_11 == 0) {
   VAR_17 = -VAR_0;
   goto error_unlock;
  }
  VAR_14 = FUNC_6(VAR_3,
       &VAR_13->flags);
  break;
 }

 VAR_13->thresh_val[VAR_15] = VAR_11;
 VAR_17 = FUNC_2(VAR_13, VAR_15,
       VAR_14);
error_unlock:
 FUNC_5(&VAR_13->lock);

 return VAR_17;
}

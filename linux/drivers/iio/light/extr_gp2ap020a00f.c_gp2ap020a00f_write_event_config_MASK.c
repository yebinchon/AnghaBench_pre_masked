
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct gp2ap020a00f_data {int lock; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
typedef enum gp2ap020a00f_cmd { ____Placeholder_gp2ap020a00f_cmd } gp2ap020a00f_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (struct gp2ap020a00f_data*,int) ;
 int FUNC_1 (struct iio_dev*,int) ;
 struct gp2ap020a00f_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_6,
        const struct iio_chan_spec *VAR_7,
        enum iio_event_type VAR_8,
        enum iio_event_direction VAR_9,
        int VAR_10)
{
 struct gp2ap020a00f_data *VAR_11 = FUNC_2(VAR_6);
 enum gp2ap020a00f_cmd VAR_12;
 int VAR_13;

 FUNC_3(&VAR_11->lock);

 switch (VAR_7->type) {
 case 128:
  VAR_13 = FUNC_1(VAR_6, VAR_10);
  break;
 case 129:
  if (VAR_9 == VAR_5) {
   VAR_12 = VAR_10 ? VAR_2 :
          VAR_1;
   VAR_13 = FUNC_0(VAR_11, VAR_12);
  } else {
   VAR_12 = VAR_10 ? VAR_4 :
          VAR_3;
   VAR_13 = FUNC_0(VAR_11, VAR_12);
  }
  break;
 default:
  VAR_13 = -VAR_0;
 }

 FUNC_4(&VAR_11->lock);

 return VAR_13;
}

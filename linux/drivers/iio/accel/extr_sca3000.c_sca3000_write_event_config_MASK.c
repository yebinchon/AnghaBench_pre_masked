
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; int address; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;




 struct sca3000_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iio_dev*,int) ;
 int FUNC_4 (struct iio_dev*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1,
          const struct iio_chan_spec *VAR_2,
          enum iio_event_type VAR_3,
          enum iio_event_direction VAR_4,
          int VAR_5)
{
 struct sca3000_state *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;

 FUNC_1(&VAR_6->lock);
 switch (VAR_2->channel2) {
 case 130:
  VAR_7 = FUNC_3(VAR_1, VAR_5);
  break;

 case 131:
 case 129:
 case 128:
  VAR_7 = FUNC_4(VAR_1,
            VAR_2->address,
            VAR_5);
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }
 FUNC_2(&VAR_6->lock);

 return VAR_7;
}

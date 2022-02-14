
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; size_t address; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sca3000_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int** VAR_6 ;
 int FUNC_3 (struct sca3000_state*,int ) ;
 int FUNC_4 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_7,
         const struct iio_chan_spec *VAR_8,
         enum iio_event_type VAR_9,
         enum iio_event_direction VAR_10)
{
 struct sca3000_state *VAR_11 = FUNC_0(VAR_7);
 int VAR_12;

 FUNC_1(&VAR_11->lock);

 VAR_12 = FUNC_4(VAR_11, VAR_2, 1);
 if (VAR_12)
  goto error_ret;

 switch (VAR_8->channel2) {
 case 130:
  VAR_12 = !!(VAR_11->rx[0] & VAR_3);
  break;
 case 131:
 case 129:
 case 128:




  if ((VAR_11->rx[0] & VAR_5)
      != VAR_4) {
   VAR_12 = 0;
  } else {
   VAR_12 = FUNC_3(VAR_11,
      VAR_1);
   if (VAR_12 < 0)
    goto error_ret;

   VAR_12 = !!(VAR_12 & VAR_6[VAR_8->address][2]);
  }
  break;
 default:
  VAR_12 = -VAR_0;
 }

error_ret:
 FUNC_2(&VAR_11->lock);

 return VAR_12;
}

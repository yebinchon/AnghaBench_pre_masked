
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct opt3001 {int high_thresh_mantissa; int high_thresh_exp; int low_thresh_mantissa; int low_thresh_exp; int lock; int dev; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,int,int) ;
 struct opt3001* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct opt3001*,int,int,int*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_3,
  const struct iio_chan_spec *VAR_4, enum iio_event_type VAR_5,
  enum iio_event_direction VAR_6, enum iio_event_info VAR_7,
  int VAR_8, int VAR_9)
{
 struct opt3001 *VAR_10 = FUNC_2(VAR_3);
 int VAR_11;

 u16 VAR_12;
 u16 VAR_13;
 u16 VAR_14;

 u8 VAR_15;

 if (VAR_8 < 0)
  return -VAR_0;

 FUNC_3(&VAR_10->lock);

 VAR_11 = FUNC_5(VAR_10, VAR_8, VAR_9, &VAR_15);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->dev, "can't find scale for %d.%06u\n", VAR_8, VAR_9);
  goto err;
 }

 VAR_12 = (((VAR_8 * 1000) + (VAR_9 / 1000)) / 10) >> VAR_15;
 VAR_13 = (VAR_15 << 12) | VAR_12;

 switch (VAR_6) {
 case 128:
  VAR_14 = VAR_1;
  VAR_10->high_thresh_mantissa = VAR_12;
  VAR_10->high_thresh_exp = VAR_15;
  break;
 case 129:
  VAR_14 = VAR_2;
  VAR_10->low_thresh_mantissa = VAR_12;
  VAR_10->low_thresh_exp = VAR_15;
  break;
 default:
  VAR_11 = -VAR_0;
  goto err;
 }

 VAR_11 = FUNC_1(VAR_10->client, VAR_14, VAR_13);
 if (VAR_11 < 0) {
  FUNC_0(VAR_10->dev, "failed to write register %02x\n", VAR_14);
  goto err;
 }

err:
 FUNC_4(&VAR_10->lock);

 return VAR_11;
}

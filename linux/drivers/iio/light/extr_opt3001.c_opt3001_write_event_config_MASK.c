
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct opt3001 {scalar_t__ mode; int lock; int dev; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct opt3001* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct opt3001*,int*,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
  const struct iio_chan_spec *VAR_4, enum iio_event_type VAR_5,
  enum iio_event_direction VAR_6, int VAR_7)
{
 struct opt3001 *VAR_8 = FUNC_3(VAR_3);
 int VAR_9;
 u16 VAR_10;
 u16 VAR_11;

 if (VAR_7 && VAR_8->mode == VAR_1)
  return 0;

 if (!VAR_7 && VAR_8->mode == VAR_2)
  return 0;

 FUNC_4(&VAR_8->lock);

 VAR_10 = VAR_7 ? VAR_1
  : VAR_2;

 VAR_9 = FUNC_1(VAR_8->client, VAR_0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_8->dev, "failed to read register %02x\n",
    VAR_0);
  goto err;
 }

 VAR_11 = VAR_9;
 FUNC_6(VAR_8, &VAR_11, VAR_10);

 VAR_9 = FUNC_2(VAR_8->client, VAR_0,
   VAR_11);
 if (VAR_9 < 0) {
  FUNC_0(VAR_8->dev, "failed to write register %02x\n",
    VAR_0);
  goto err;
 }

err:
 FUNC_5(&VAR_8->lock);

 return VAR_9;
}

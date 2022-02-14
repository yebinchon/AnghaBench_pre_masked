
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct serdev_device {int dev; } ;
struct pms7003_state {int frame_ready; int lock; struct serdev_device* serdev; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int available_scan_masks; int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,struct pms7003_state*) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 int FUNC_5 (int *,struct iio_dev*,int *,int ,int *) ;
 int FUNC_6 (int *,struct serdev_device*) ;
 struct pms7003_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int FUNC_10 (struct pms7003_state*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (struct serdev_device*,int) ;
 int FUNC_12 (struct serdev_device*,int *) ;
 int FUNC_13 (struct serdev_device*,struct iio_dev*) ;
 int FUNC_14 (struct serdev_device*,int) ;
 int FUNC_15 (struct serdev_device*,int ) ;

__attribute__((used)) static int FUNC_16(struct serdev_device *VAR_12)
{
 struct pms7003_state *VAR_13;
 struct iio_dev *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_3(&VAR_12->dev, sizeof(*VAR_13));
 if (!VAR_14)
  return -VAR_2;

 VAR_13 = FUNC_7(VAR_14);
 FUNC_13(VAR_12, VAR_14);
 VAR_13->serdev = VAR_12;
 VAR_14->dev.parent = &VAR_12->dev;
 VAR_14->info = &VAR_7;
 VAR_14->name = VAR_4;
 VAR_14->channels = VAR_6,
 VAR_14->num_channels = FUNC_0(VAR_6);
 VAR_14->modes = VAR_3;
 VAR_14->available_scan_masks = VAR_8;

 FUNC_9(&VAR_13->lock);
 FUNC_8(&VAR_13->frame_ready);

 FUNC_12(VAR_12, &VAR_9);
 VAR_15 = FUNC_6(&VAR_12->dev, VAR_12);
 if (VAR_15)
  return VAR_15;

 FUNC_11(VAR_12, 9600);
 FUNC_14(VAR_12, 0);

 VAR_15 = FUNC_15(VAR_12, VAR_5);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_10(VAR_13, VAR_1);
 if (VAR_15) {
  FUNC_1(&VAR_12->dev, "failed to wakeup sensor\n");
  return VAR_15;
 }

 VAR_15 = FUNC_10(VAR_13, VAR_0);
 if (VAR_15) {
  FUNC_1(&VAR_12->dev, "failed to enter passive mode\n");
  return VAR_15;
 }

 VAR_15 = FUNC_2(&VAR_12->dev, VAR_10, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_5(&VAR_12->dev, VAR_14, ((void*)0),
           VAR_11, ((void*)0));
 if (VAR_15)
  return VAR_15;

 return FUNC_4(&VAR_12->dev, VAR_14);
}

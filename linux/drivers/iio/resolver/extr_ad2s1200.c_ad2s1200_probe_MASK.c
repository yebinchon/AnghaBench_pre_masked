
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int dev; int mode; int max_speed_hz; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_dev {int name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct ad2s1200_state {void* rdvel; void* sample; struct spi_device* sdev; int lock; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,char*,...) ;
 void* FUNC_4 (int *,char*,int ) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct iio_dev*) ;
 struct ad2s1200_state* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 TYPE_2__* FUNC_9 (struct spi_device*) ;
 int FUNC_10 (struct spi_device*,struct iio_dev*) ;
 int FUNC_11 (struct spi_device*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_7)
{
 struct ad2s1200_state *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(&VAR_7->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_1;

 FUNC_10(VAR_7, VAR_9);
 VAR_8 = FUNC_7(VAR_9);
 FUNC_8(&VAR_8->lock);
 VAR_8->sdev = VAR_7;

 VAR_8->sample = FUNC_4(&VAR_7->dev, "adi,sample", VAR_2);
 if (FUNC_1(VAR_8->sample)) {
  FUNC_3(&VAR_7->dev, "Failed to claim SAMPLE gpio: err=%ld\n",
   FUNC_2(VAR_8->sample));
  return FUNC_2(VAR_8->sample);
 }

 VAR_8->rdvel = FUNC_4(&VAR_7->dev, "adi,rdvel", VAR_2);
 if (FUNC_1(VAR_8->rdvel)) {
  FUNC_3(&VAR_7->dev, "Failed to claim RDVEL gpio: err=%ld\n",
   FUNC_2(VAR_8->rdvel));
  return FUNC_2(VAR_8->rdvel);
 }

 VAR_9->dev.parent = &VAR_7->dev;
 VAR_9->info = &VAR_6;
 VAR_9->modes = VAR_3;
 VAR_9->channels = VAR_5;
 VAR_9->num_channels = FUNC_0(VAR_5);
 VAR_9->name = FUNC_9(VAR_7)->name;

 VAR_7->max_speed_hz = VAR_0;
 VAR_7->mode = VAR_4;
 VAR_10 = FUNC_11(VAR_7);

 if (VAR_10 < 0) {
  FUNC_3(&VAR_7->dev, "spi_setup failed!\n");
  return VAR_10;
 }

 return FUNC_6(&VAR_7->dev, VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct spi_device {int dev; } ;
struct TYPE_8__ {int * parent; } ;
struct iio_dev {int available_scan_masks; int modes; int * info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct TYPE_10__ {TYPE_7__* burst; } ;
struct adis16400_state {TYPE_3__ adis; TYPE_6__* variant; int avail_scan_mask; } ;
struct TYPE_12__ {int extra_len; } ;
struct TYPE_11__ {int flags; int num_channels; int channels; } ;
struct TYPE_9__ {size_t driver_data; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__ VAR_4 ;
 TYPE_6__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct iio_dev*) ;
 int VAR_7 ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct adis16400_state*) ;
 int VAR_8 ;
 int FUNC_3 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_4 (TYPE_3__*,struct iio_dev*,struct spi_device*,int *) ;
 int FUNC_5 (TYPE_3__*,struct iio_dev*,int ) ;
 struct iio_dev* FUNC_6 (int *,int) ;
 int FUNC_7 (struct iio_dev*) ;
 struct adis16400_state* FUNC_8 (struct iio_dev*) ;
 TYPE_2__* FUNC_9 (struct spi_device*) ;
 int FUNC_10 (struct spi_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_9)
{
 struct adis16400_state *VAR_10;
 struct iio_dev *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_6(&VAR_9->dev, sizeof(*VAR_10));
 if (VAR_11 == ((void*)0))
  return -VAR_2;

 VAR_10 = FUNC_8(VAR_11);

 FUNC_10(VAR_9, VAR_11);


 VAR_10->variant = &VAR_5[FUNC_9(VAR_9)->driver_data];
 VAR_11->dev.parent = &VAR_9->dev;
 VAR_11->name = FUNC_9(VAR_9)->name;
 VAR_11->channels = VAR_10->variant->channels;
 VAR_11->num_channels = VAR_10->variant->num_channels;
 VAR_11->info = &VAR_7;
 VAR_11->modes = VAR_3;

 if (!(VAR_10->variant->flags & VAR_1)) {
  FUNC_2(VAR_10);
  VAR_11->available_scan_masks = VAR_10->avail_scan_mask;
  VAR_10->adis.burst = &VAR_4;
  if (VAR_10->variant->flags & VAR_0)
   VAR_10->adis.burst->extra_len = sizeof(u16);
 }

 VAR_12 = FUNC_4(&VAR_10->adis, VAR_11, VAR_9, &VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_5(&VAR_10->adis, VAR_11,
   VAR_8);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12)
  goto error_cleanup_buffer;
 VAR_12 = FUNC_7(VAR_11);
 if (VAR_12)
  goto error_cleanup_buffer;

 FUNC_0(VAR_11);
 return 0;

error_cleanup_buffer:
 FUNC_3(&VAR_10->adis, VAR_11);
 return VAR_12;
}

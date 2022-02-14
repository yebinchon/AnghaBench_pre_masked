
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ms5611_state {int * pressure_osr; int * temp_osr; int * chip_info; int lock; } ;
struct TYPE_2__ {struct device* parent; } ;
struct iio_dev {char const* name; int num_channels; int available_scan_masks; int modes; int * channels; int * info; TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct ms5611_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int *,int ,int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_6 (struct iio_dev*) ;
 int VAR_5 ;
 int FUNC_7 (struct iio_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *) ;

int FUNC_9(struct iio_dev *VAR_8, struct device *VAR_9,
   const char *VAR_10, int VAR_11)
{
 int VAR_12;
 struct ms5611_state *VAR_13 = FUNC_3(VAR_8);

 FUNC_8(&VAR_13->lock);
 VAR_13->chip_info = &VAR_1[VAR_11];
 VAR_13->temp_osr =
  &VAR_3[FUNC_0(VAR_3) - 1];
 VAR_13->pressure_osr =
  &VAR_2[FUNC_0(VAR_2)
        - 1];
 VAR_8->dev.parent = VAR_9;
 VAR_8->name = VAR_10;
 VAR_8->info = &VAR_5;
 VAR_8->channels = VAR_4;
 VAR_8->num_channels = FUNC_0(VAR_4);
 VAR_8->modes = VAR_0;
 VAR_8->available_scan_masks = VAR_6;

 VAR_12 = FUNC_7(VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_8, ((void*)0),
      VAR_7, ((void*)0));
 if (VAR_12 < 0) {
  FUNC_1(VAR_9, "iio triggered buffer setup failed\n");
  goto err_fini;
 }

 VAR_12 = FUNC_2(VAR_8);
 if (VAR_12 < 0) {
  FUNC_1(VAR_9, "unable to register iio device\n");
  goto err_buffer_cleanup;
 }

 return 0;

err_buffer_cleanup:
 FUNC_4(VAR_8);
err_fini:
 FUNC_6(VAR_8);
 return VAR_12;
}

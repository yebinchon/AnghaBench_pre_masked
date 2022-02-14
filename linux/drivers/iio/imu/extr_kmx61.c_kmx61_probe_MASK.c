
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmx61_data {void* acc_dready_trig; void* mag_dready_trig; void* motion_trig; void* acc_indio_dev; void* mag_indio_dev; struct i2c_client* client; int lock; } ;
struct i2c_device_id {char* name; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,char*) ;
 struct kmx61_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,scalar_t__,int ,int ,int ,int ,struct kmx61_data*) ;
 int FUNC_7 (struct i2c_client*,struct kmx61_data*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int VAR_9 ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*,int *,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (struct kmx61_data*) ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_14 (struct kmx61_data*,int *,int ,int ,char const*) ;
 int VAR_14 ;
 int VAR_15 ;
 char* FUNC_15 (int *) ;
 int FUNC_16 (struct kmx61_data*,int ,int,int) ;
 int VAR_16 ;
 void* FUNC_17 (struct kmx61_data*,void*,char*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_17,
         const struct i2c_device_id *VAR_18)
{
 int VAR_19;
 struct kmx61_data *VAR_20;
 const char *VAR_21 = ((void*)0);

 VAR_20 = FUNC_5(&VAR_17->dev, sizeof(*VAR_20), VAR_2);
 if (!VAR_20)
  return -VAR_1;

 FUNC_7(VAR_17, VAR_20);
 VAR_20->client = VAR_17;

 FUNC_18(&VAR_20->lock);

 if (VAR_18)
  VAR_21 = VAR_18->name;
 else if (FUNC_0(&VAR_17->dev))
  VAR_21 = FUNC_15(&VAR_17->dev);
 else
  return -VAR_0;

 VAR_20->acc_indio_dev =
  FUNC_14(VAR_20, &VAR_11,
         VAR_10,
         FUNC_1(VAR_10),
         VAR_21);
 if (FUNC_2(VAR_20->acc_indio_dev))
  return FUNC_3(VAR_20->acc_indio_dev);

 VAR_20->mag_indio_dev =
  FUNC_14(VAR_20, &VAR_15,
         VAR_14,
         FUNC_1(VAR_14),
         VAR_21);
 if (FUNC_2(VAR_20->mag_indio_dev))
  return FUNC_3(VAR_20->mag_indio_dev);

 VAR_19 = FUNC_13(VAR_20);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_17->irq > 0) {
  VAR_19 = FUNC_6(&VAR_17->dev, VAR_17->irq,
      VAR_12,
      VAR_13,
      VAR_3,
      VAR_6,
      VAR_20);
  if (VAR_19)
   goto err_chip_uninit;

  VAR_20->acc_dready_trig =
   FUNC_17(VAR_20, VAR_20->acc_indio_dev,
         "dready");
  if (FUNC_2(VAR_20->acc_dready_trig)) {
   VAR_19 = FUNC_3(VAR_20->acc_dready_trig);
   goto err_chip_uninit;
  }

  VAR_20->mag_dready_trig =
   FUNC_17(VAR_20, VAR_20->mag_indio_dev,
         "dready");
  if (FUNC_2(VAR_20->mag_dready_trig)) {
   VAR_19 = FUNC_3(VAR_20->mag_dready_trig);
   goto err_trigger_unregister_acc_dready;
  }

  VAR_20->motion_trig =
   FUNC_17(VAR_20, VAR_20->acc_indio_dev,
         "any-motion");
  if (FUNC_2(VAR_20->motion_trig)) {
   VAR_19 = FUNC_3(VAR_20->motion_trig);
   goto err_trigger_unregister_mag_dready;
  }

  VAR_19 = FUNC_12(VAR_20->acc_indio_dev,
       &VAR_9,
       VAR_16,
       ((void*)0));
  if (VAR_19 < 0) {
   FUNC_4(&VAR_20->client->dev,
    "Failed to setup acc triggered buffer\n");
   goto err_trigger_unregister_motion;
  }

  VAR_19 = FUNC_12(VAR_20->mag_indio_dev,
       &VAR_9,
       VAR_16,
       ((void*)0));
  if (VAR_19 < 0) {
   FUNC_4(&VAR_20->client->dev,
    "Failed to setup mag triggered buffer\n");
   goto err_buffer_cleanup_acc;
  }
 }

 VAR_19 = FUNC_20(&VAR_17->dev);
 if (VAR_19 < 0)
  goto err_buffer_cleanup_mag;

 FUNC_19(&VAR_17->dev);
 FUNC_21(&VAR_17->dev, VAR_8);
 FUNC_22(&VAR_17->dev);

 VAR_19 = FUNC_8(VAR_20->acc_indio_dev);
 if (VAR_19 < 0) {
  FUNC_4(&VAR_17->dev, "Failed to register acc iio device\n");
  goto err_buffer_cleanup_mag;
 }

 VAR_19 = FUNC_8(VAR_20->mag_indio_dev);
 if (VAR_19 < 0) {
  FUNC_4(&VAR_17->dev, "Failed to register mag iio device\n");
  goto err_iio_unregister_acc;
 }

 return 0;

err_iio_unregister_acc:
 FUNC_9(VAR_20->acc_indio_dev);
err_buffer_cleanup_mag:
 if (VAR_17->irq > 0)
  FUNC_11(VAR_20->mag_indio_dev);
err_buffer_cleanup_acc:
 if (VAR_17->irq > 0)
  FUNC_11(VAR_20->acc_indio_dev);
err_trigger_unregister_motion:
 FUNC_10(VAR_20->motion_trig);
err_trigger_unregister_mag_dready:
 FUNC_10(VAR_20->mag_dready_trig);
err_trigger_unregister_acc_dready:
 FUNC_10(VAR_20->acc_dready_trig);
err_chip_uninit:
 FUNC_16(VAR_20, VAR_5, VAR_4 | VAR_7, 1);
 return VAR_19;
}

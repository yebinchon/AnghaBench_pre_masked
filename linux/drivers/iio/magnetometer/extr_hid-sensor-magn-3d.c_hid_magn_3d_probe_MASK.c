
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct hid_sensor_hub_device* platform_data; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_10__ {int data_ready; struct platform_device* pdev; struct hid_sensor_hub_device* hsdev; } ;
struct TYPE_9__ {struct platform_device* pdev; int capture_sample; int send_event; } ;
struct magn_3d_state {TYPE_3__ magn_flux_attributes; TYPE_2__ callbacks; TYPE_3__ rot_attributes; } ;
struct TYPE_8__ {TYPE_6__* parent; } ;
struct iio_dev {int num_channels; char* name; int modes; int * info; TYPE_1__ dev; struct iio_chan_spec* channels; } ;
struct iio_chan_spec {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 struct iio_dev* FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (struct hid_sensor_hub_device*,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct iio_dev*,char*,TYPE_3__*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int VAR_3 ;
 struct magn_3d_state* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*,int *,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct platform_device*,struct hid_sensor_hub_device*,struct iio_chan_spec**,int*,int ,struct magn_3d_state*) ;
 int VAR_6 ;
 int FUNC_12 (struct platform_device*,struct iio_dev*) ;
 int FUNC_13 (struct hid_sensor_hub_device*,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 int VAR_8 = 0;
 static char *VAR_9 = "magn_3d";
 struct iio_dev *VAR_10;
 struct magn_3d_state *VAR_11;
 struct hid_sensor_hub_device *VAR_12 = VAR_7->dev.platform_data;
 struct iio_chan_spec *VAR_13;
 int VAR_14 = 0;

 VAR_10 = FUNC_2(&VAR_7->dev,
       sizeof(struct magn_3d_state));
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 FUNC_12(VAR_7, VAR_10);

 VAR_11 = FUNC_8(VAR_10);
 VAR_11->magn_flux_attributes.hsdev = VAR_12;
 VAR_11->magn_flux_attributes.pdev = VAR_7;

 VAR_8 = FUNC_3(VAR_12,
    VAR_1,
    &VAR_11->magn_flux_attributes);
 if (VAR_8) {
  FUNC_1(&VAR_7->dev, "failed to setup common attributes\n");
  return VAR_8;
 }
 VAR_11->rot_attributes = VAR_11->magn_flux_attributes;

 VAR_8 = FUNC_11(VAR_7, VAR_12,
    &VAR_13, &VAR_14,
    VAR_1, VAR_11);
 if (VAR_8) {
  FUNC_1(&VAR_7->dev, "failed to parse report\n");
  return VAR_8;
 }

 VAR_10->channels = VAR_13;
 VAR_10->num_channels = VAR_14;
 VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->info = &VAR_5;
 VAR_10->name = VAR_9;
 VAR_10->modes = VAR_2;

 VAR_8 = FUNC_10(VAR_10, &VAR_3,
  ((void*)0), ((void*)0));
 if (VAR_8) {
  FUNC_1(&VAR_7->dev, "failed to initialize trigger buffer\n");
  return VAR_8;
 }
 FUNC_0(&VAR_11->magn_flux_attributes.data_ready, 0);
 VAR_8 = FUNC_5(VAR_10, VAR_9,
     &VAR_11->magn_flux_attributes);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_7->dev, "trigger setup failed\n");
  goto error_unreg_buffer_funcs;
 }

 VAR_8 = FUNC_6(VAR_10);
 if (VAR_8) {
  FUNC_1(&VAR_7->dev, "device register failed\n");
  goto error_remove_trigger;
 }

 VAR_11->callbacks.send_event = VAR_6;
 VAR_11->callbacks.capture_sample = VAR_4;
 VAR_11->callbacks.pdev = VAR_7;
 VAR_8 = FUNC_13(VAR_12, VAR_1,
     &VAR_11->callbacks);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_7->dev, "callback reg failed\n");
  goto error_iio_unreg;
 }

 return VAR_8;

error_iio_unreg:
 FUNC_7(VAR_10);
error_remove_trigger:
 FUNC_4(&VAR_11->magn_flux_attributes);
error_unreg_buffer_funcs:
 FUNC_9(VAR_10);
 return VAR_8;
}

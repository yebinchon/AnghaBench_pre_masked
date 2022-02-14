
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_13__ {int addr; struct st_lsm6dsx_ext_dev_settings const* settings; } ;
struct st_lsm6dsx_sensor {int id; int watermark; int name; TYPE_6__ ext_info; int gain; int odr; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {int dev; } ;
struct TYPE_14__ {int addr; } ;
struct TYPE_12__ {TYPE_4__* fs_avl; } ;
struct TYPE_10__ {TYPE_2__* odr_avl; } ;
struct st_lsm6dsx_ext_dev_settings {int id; TYPE_7__ out; TYPE_5__ fs_table; TYPE_3__ odr_table; } ;
struct TYPE_8__ {int parent; } ;
struct iio_dev {int name; int num_channels; struct iio_chan_spec* channels; int available_scan_masks; int * info; TYPE_1__ dev; int modes; } ;
struct iio_chan_spec {int dummy; } ;
typedef int magn_channels ;
typedef enum st_lsm6dsx_sensor_id { ____Placeholder_st_lsm6dsx_sensor_id } st_lsm6dsx_sensor_id ;
struct TYPE_11__ {int gain; } ;
struct TYPE_9__ {int hz; } ;


 int FUNC_0 (struct iio_chan_spec const*) ;
 int VAR_0 ;
 struct iio_chan_spec const FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iio_chan_spec const FUNC_2 (int ,int ,int ,int) ;

 struct iio_dev* FUNC_3 (int ,int) ;
 struct iio_chan_spec* FUNC_4 (int ,int,int ) ;
 struct st_lsm6dsx_sensor* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_chan_spec*,struct iio_chan_spec const*,int) ;
 int FUNC_7 (int ,int,char*,char const*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct iio_dev *
FUNC_8(struct st_lsm6dsx_hw *VAR_8,
        enum st_lsm6dsx_sensor_id VAR_9,
        const struct st_lsm6dsx_ext_dev_settings *VAR_10,
        u8 VAR_11, const char *VAR_12)
{
 struct iio_chan_spec *VAR_13;
 struct st_lsm6dsx_sensor *VAR_14;
 struct iio_dev *VAR_15;

 VAR_15 = FUNC_3(VAR_8->dev, sizeof(*VAR_14));
 if (!VAR_15)
  return ((void*)0);

 VAR_15->modes = VAR_5;
 VAR_15->dev.parent = VAR_8->dev;
 VAR_15->info = &VAR_7;

 VAR_14 = FUNC_5(VAR_15);
 VAR_14->id = VAR_9;
 VAR_14->hw = VAR_8;
 VAR_14->odr = VAR_10->odr_table.odr_avl[0].hz;
 VAR_14->gain = VAR_10->fs_table.fs_avl[0].gain;
 VAR_14->ext_info.settings = VAR_10;
 VAR_14->ext_info.addr = VAR_11;
 VAR_14->watermark = 1;

 switch (VAR_10->id) {
 case 128: {
  const struct iio_chan_spec VAR_16[] = {
   FUNC_2(VAR_1, VAR_10->out.addr,
        VAR_2, 0),
   FUNC_2(VAR_1, VAR_10->out.addr + 2,
        VAR_3, 1),
   FUNC_2(VAR_1, VAR_10->out.addr + 4,
        VAR_4, 2),
   FUNC_1(3),
  };

  VAR_13 = FUNC_4(VAR_8->dev, sizeof(VAR_16),
         VAR_0);
  if (!VAR_13)
   return ((void*)0);

  FUNC_6(VAR_13, VAR_16, sizeof(VAR_16));
  VAR_15->available_scan_masks = VAR_6;
  VAR_15->channels = VAR_13;
  VAR_15->num_channels = FUNC_0(VAR_16);

  FUNC_7(VAR_14->name, sizeof(VAR_14->name), "%s_magn",
     VAR_12);
  break;
 }
 default:
  return ((void*)0);
 }
 VAR_15->name = VAR_14->name;

 return VAR_15;
}

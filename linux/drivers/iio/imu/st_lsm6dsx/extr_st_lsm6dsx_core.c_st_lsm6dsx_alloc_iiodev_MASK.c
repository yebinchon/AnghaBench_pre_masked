
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


struct st_lsm6dsx_sensor {int id; int watermark; int name; int gain; int odr; struct st_lsm6dsx_hw* hw; } ;
struct st_lsm6dsx_hw {TYPE_7__* settings; int dev; } ;
struct TYPE_8__ {int parent; } ;
struct iio_dev {int name; int * info; int num_channels; int channels; int available_scan_masks; TYPE_1__ dev; int modes; } ;
typedef enum st_lsm6dsx_sensor_id { ____Placeholder_st_lsm6dsx_sensor_id } st_lsm6dsx_sensor_id ;
struct TYPE_14__ {TYPE_6__* fs_table; TYPE_4__* odr_table; TYPE_2__* channels; } ;
struct TYPE_13__ {TYPE_5__* fs_avl; } ;
struct TYPE_12__ {int gain; } ;
struct TYPE_11__ {TYPE_3__* odr_avl; } ;
struct TYPE_10__ {int hz; } ;
struct TYPE_9__ {int len; int chan; } ;


 int VAR_0 ;


 struct iio_dev* FUNC_0 (int ,int) ;
 struct st_lsm6dsx_sensor* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct iio_dev *FUNC_3(struct st_lsm6dsx_hw *VAR_4,
            enum st_lsm6dsx_sensor_id VAR_5,
            const char *VAR_6)
{
 struct st_lsm6dsx_sensor *VAR_7;
 struct iio_dev *VAR_8;

 VAR_8 = FUNC_0(VAR_4->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return ((void*)0);

 VAR_8->modes = VAR_0;
 VAR_8->dev.parent = VAR_4->dev;
 VAR_8->available_scan_masks = VAR_2;
 VAR_8->channels = VAR_4->settings->channels[VAR_5].chan;
 VAR_8->num_channels = VAR_4->settings->channels[VAR_5].len;

 VAR_7 = FUNC_1(VAR_8);
 VAR_7->id = VAR_5;
 VAR_7->hw = VAR_4;
 VAR_7->odr = VAR_4->settings->odr_table[VAR_5].odr_avl[0].hz;
 VAR_7->gain = VAR_4->settings->fs_table[VAR_5].fs_avl[0].gain;
 VAR_7->watermark = 1;

 switch (VAR_5) {
 case 129:
  VAR_8->info = &VAR_1;
  FUNC_2(VAR_7->name, sizeof(VAR_7->name), "%s_accel",
     VAR_6);
  break;
 case 128:
  VAR_8->info = &VAR_3;
  FUNC_2(VAR_7->name, sizeof(VAR_7->name), "%s_gyro",
     VAR_6);
  break;
 default:
  return ((void*)0);
 }
 VAR_8->name = VAR_7->name;

 return VAR_8;
}

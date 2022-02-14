
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addr; } ;
struct st_lsm6dsx_shub_settings {TYPE_2__ master_en; } ;
struct st_lsm6dsx_hw {int irq; int * iio_devs; struct device* dev; TYPE_1__* settings; struct regmap* regmap; void* buff; int page_lock; int conf_lock; int fifo_lock; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct st_lsm6dsx_shub_settings shub_settings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,void*) ;
 int FUNC_1 (struct device*,int ) ;
 void* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct st_lsm6dsx_hw*,int,char const*) ;
 int FUNC_5 (struct st_lsm6dsx_hw*,int,char const**) ;
 int FUNC_6 (struct st_lsm6dsx_hw*) ;
 int FUNC_7 (struct st_lsm6dsx_hw*) ;
 int FUNC_8 (struct st_lsm6dsx_hw*,char const*) ;

int FUNC_9(struct device *VAR_5, int VAR_6, int VAR_7,
       struct regmap *VAR_8)
{
 const struct st_lsm6dsx_shub_settings *VAR_9;
 struct st_lsm6dsx_hw *VAR_10;
 const char *VAR_11 = ((void*)0);
 int VAR_12, VAR_13;

 VAR_10 = FUNC_2(VAR_5, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_0(VAR_5, (void *)VAR_10);

 FUNC_3(&VAR_10->fifo_lock);
 FUNC_3(&VAR_10->conf_lock);
 FUNC_3(&VAR_10->page_lock);

 VAR_10->buff = FUNC_2(VAR_5, VAR_2, VAR_1);
 if (!VAR_10->buff)
  return -VAR_0;

 VAR_10->dev = VAR_5;
 VAR_10->irq = VAR_6;
 VAR_10->regmap = VAR_8;

 VAR_13 = FUNC_5(VAR_10, VAR_7, &VAR_11);
 if (VAR_13 < 0)
  return VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_10->iio_devs[VAR_12] = FUNC_4(VAR_10, VAR_12, VAR_11);
  if (!VAR_10->iio_devs[VAR_12])
   return -VAR_0;
 }

 VAR_13 = FUNC_7(VAR_10);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_9 = &VAR_10->settings->shub_settings;
 if (VAR_9->master_en.addr) {
  VAR_13 = FUNC_8(VAR_10, VAR_11);
  if (VAR_13 < 0)
   return VAR_13;
 }

 if (VAR_10->irq > 0) {
  VAR_13 = FUNC_6(VAR_10);
  if (VAR_13 < 0)
   return VAR_13;
 }

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  if (!VAR_10->iio_devs[VAR_12])
   continue;

  VAR_13 = FUNC_1(VAR_10->dev, VAR_10->iio_devs[VAR_12]);
  if (VAR_13)
   return VAR_13;
 }

 return 0;
}

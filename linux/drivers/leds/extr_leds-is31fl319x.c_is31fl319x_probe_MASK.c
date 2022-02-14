
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int brightness_set_blocking; } ;
struct is31fl319x_led {scalar_t__ max_microamp; TYPE_2__ cdev; struct is31fl319x_chip* chip; scalar_t__ configured; } ;
struct is31fl319x_chip {int lock; struct is31fl319x_led* leds; TYPE_1__* cdef; int audio_gain_db; int regmap; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; int adapter; } ;
struct TYPE_3__ {int num_leds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct is31fl319x_chip* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,TYPE_2__*) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct is31fl319x_chip*) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct device*,scalar_t__) ;
 int FUNC_10 (struct device*,struct is31fl319x_chip*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_8 ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_9,
       const struct i2c_device_id *VAR_10)
{
 struct is31fl319x_chip *VAR_11;
 struct device *VAR_12 = &VAR_9->dev;
 int VAR_13;
 int VAR_14 = 0;
 u32 VAR_15 = VAR_5;

 if (!FUNC_6(VAR_9->adapter, VAR_3))
  return -VAR_0;

 VAR_11 = FUNC_3(&VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_12(&VAR_11->lock);

 VAR_13 = FUNC_10(&VAR_9->dev, VAR_11);
 if (VAR_13)
  goto free_mutex;

 VAR_11->client = VAR_9;
 VAR_11->regmap = FUNC_5(VAR_9, &VAR_8);
 if (FUNC_0(VAR_11->regmap)) {
  FUNC_2(&VAR_9->dev, "failed to allocate register map\n");
  VAR_13 = FUNC_1(VAR_11->regmap);
  goto free_mutex;
 }

 FUNC_7(VAR_9, VAR_11);


 VAR_13 = FUNC_13(VAR_11->regmap, VAR_6, 0x00);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_9->dev, "no response from chip write: err = %d\n",
   VAR_13);
  VAR_13 = -VAR_0;
  goto free_mutex;
 }






 for (VAR_14 = 0; VAR_14 < VAR_11->cdef->num_leds; VAR_14++)
  if (VAR_11->leds[VAR_14].configured &&
      VAR_11->leds[VAR_14].max_microamp < VAR_15)
   VAR_15 = VAR_11->leds[VAR_14].max_microamp;

 FUNC_13(VAR_11->regmap, VAR_4,
       FUNC_9(VAR_12, VAR_15) |
       FUNC_8(VAR_11->audio_gain_db));

 for (VAR_14 = 0; VAR_14 < VAR_11->cdef->num_leds; VAR_14++) {
  struct is31fl319x_led *VAR_16 = &VAR_11->leds[VAR_14];

  if (!VAR_16->configured)
   continue;

  VAR_16->chip = VAR_11;
  VAR_16->cdev.brightness_set_blocking = VAR_7;

  VAR_13 = FUNC_4(&VAR_9->dev, &VAR_16->cdev);
  if (VAR_13 < 0)
   goto free_mutex;
 }

 return 0;

free_mutex:
 FUNC_11(&VAR_11->lock);
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rmi_function {int dev; int rmi_dev; } ;
struct TYPE_2__ {scalar_t__ buttonpad; scalar_t__ trackstick_buttons; } ;
struct rmi_device_platform_data {TYPE_1__ f30_data; } ;
struct input_dev {unsigned int* keycode; int keycodesize; int propbit; int keycodemax; } ;
struct f30_data {unsigned int* gpioled_key_map; int gpioled_count; int ctrl; struct input_dev* input; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*) ;
 unsigned int* FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int,int ) ;
 struct rmi_device_platform_data* FUNC_6 (int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct rmi_function *VAR_8,
        struct f30_data *VAR_9)
{
 const struct rmi_device_platform_data *VAR_10 =
     FUNC_6(VAR_8->rmi_dev);
 struct input_dev *VAR_11 = VAR_9->input;
 unsigned int VAR_12 = VAR_0;
 unsigned int VAR_13 = VAR_0;
 bool VAR_14 = 0;
 int VAR_15;
 int VAR_16 = FUNC_4(VAR_7, VAR_9->gpioled_count, VAR_5);

 VAR_9->gpioled_key_map = FUNC_2(&VAR_8->dev,
         VAR_16,
         sizeof(VAR_9->gpioled_key_map[0]),
         VAR_3);
 if (!VAR_9->gpioled_key_map) {
  FUNC_1(&VAR_8->dev, "Failed to allocate gpioled map memory.\n");
  return -VAR_1;
 }

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  if (!FUNC_5(VAR_15, VAR_9->ctrl))
   continue;

  if (VAR_10->f30_data.trackstick_buttons &&
      VAR_15 >= VAR_6 && VAR_15 < VAR_5) {
   VAR_9->gpioled_key_map[VAR_15] = VAR_13++;
  } else if (!VAR_10->f30_data.buttonpad || !VAR_14) {
   VAR_9->gpioled_key_map[VAR_15] = VAR_12;
   FUNC_3(VAR_11, VAR_2, VAR_12++);
   VAR_14 = 1;
  }
 }

 VAR_11->keycode = VAR_9->gpioled_key_map;
 VAR_11->keycodesize = sizeof(VAR_9->gpioled_key_map[0]);
 VAR_11->keycodemax = VAR_9->gpioled_count;






 if (VAR_10->f30_data.buttonpad || (VAR_12 - VAR_0 == 1))
  FUNC_0(VAR_4, VAR_11->propbit);

 return 0;
}

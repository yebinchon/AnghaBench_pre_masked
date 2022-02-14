
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ max_x; scalar_t__ max_y; } ;
struct hideep_ts {int key_num; TYPE_3__* input_dev; int * key_codes; TYPE_4__ prop; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_12__ {int bustype; } ;
struct TYPE_13__ {int keycodesize; int keycodemax; int * keycode; TYPE_2__ id; int name; } ;
struct TYPE_11__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int *,int) ;
 TYPE_3__* FUNC_4 (struct device*) ;
 int FUNC_5 (struct hideep_ts*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int,int ,int ) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (TYPE_3__*,struct hideep_ts*) ;
 int FUNC_11 (TYPE_3__*,int,TYPE_4__*) ;

__attribute__((used)) static int FUNC_12(struct hideep_ts *VAR_15)
{
 struct device *VAR_16 = &VAR_15->client->dev;
 int VAR_17;
 int VAR_18;

 VAR_15->input_dev = FUNC_4(VAR_16);
 if (!VAR_15->input_dev) {
  FUNC_1(VAR_16, "failed to allocate input device\n");
  return -VAR_7;
 }

 VAR_15->input_dev->name = VAR_12;
 VAR_15->input_dev->id.bustype = VAR_5;
 FUNC_10(VAR_15->input_dev, VAR_15);

 FUNC_9(VAR_15->input_dev, VAR_8, VAR_0);
 FUNC_9(VAR_15->input_dev, VAR_8, VAR_1);
 FUNC_8(VAR_15->input_dev, VAR_2, 0, 65535, 0, 0);
 FUNC_8(VAR_15->input_dev, VAR_4, 0, 255, 0, 0);
 FUNC_8(VAR_15->input_dev, VAR_3,
        0, VAR_14, 0, 0);
 FUNC_11(VAR_15->input_dev, 1, &VAR_15->prop);

 if (VAR_15->prop.max_x == 0 || VAR_15->prop.max_y == 0) {
  VAR_18 = FUNC_5(VAR_15);
  if (VAR_18)
   return VAR_18;
 }

 VAR_18 = FUNC_6(VAR_15->input_dev, VAR_11,
        VAR_13);
 if (VAR_18)
  return VAR_18;

 VAR_15->key_num = FUNC_2(VAR_16, "linux,keycodes");
 if (VAR_15->key_num > VAR_10) {
  FUNC_1(VAR_16, "too many keys defined: %d\n",
   VAR_15->key_num);
  return -VAR_6;
 }

 if (VAR_15->key_num <= 0) {
  FUNC_0(VAR_16,
   "missing or malformed 'linux,keycodes' property\n");
 } else {
  VAR_18 = FUNC_3(VAR_16, "linux,keycodes",
             VAR_15->key_codes,
             VAR_15->key_num);
  if (VAR_18) {
   FUNC_0(VAR_16, "failed to read keymap: %d", VAR_18);
   return VAR_18;
  }

  if (VAR_15->key_num) {
   VAR_15->input_dev->keycode = VAR_15->key_codes;
   VAR_15->input_dev->keycodesize = sizeof(VAR_15->key_codes[0]);
   VAR_15->input_dev->keycodemax = VAR_15->key_num;

   for (VAR_17 = 0; VAR_17 < VAR_15->key_num; VAR_17++)
    FUNC_9(VAR_15->input_dev, VAR_9,
     VAR_15->key_codes[VAR_17]);
  }
 }

 VAR_18 = FUNC_7(VAR_15->input_dev);
 if (VAR_18) {
  FUNC_1(VAR_16, "failed to register input device: %d", VAR_18);
  return VAR_18;
 }

 return 0;
}

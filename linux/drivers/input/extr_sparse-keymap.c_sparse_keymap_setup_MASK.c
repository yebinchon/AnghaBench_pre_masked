
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct key_entry {scalar_t__ type; TYPE_1__ sw; int keycode; } ;
struct input_dev {size_t keycodemax; int setkeycode; int getkeycode; struct key_entry* keycode; int mscbit; int evbit; int keybit; int swbit; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;



 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 struct key_entry* FUNC_1 (int *,struct key_entry const*,size_t,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3(struct input_dev *VAR_10,
   const struct key_entry *VAR_11,
   int (*VAR_12)(struct input_dev *, struct key_entry *))
{
 size_t VAR_13 = 1;
 const struct key_entry *VAR_14;
 struct key_entry *VAR_15, *VAR_16;
 int VAR_17;
 int VAR_18;

 for (VAR_14 = VAR_11; VAR_14->type != VAR_6; VAR_14++)
  VAR_13++;

 VAR_15 = FUNC_1(&VAR_10->dev, VAR_11, VAR_13 * sizeof(*VAR_15),
      VAR_4);
 if (!VAR_15)
  return -VAR_0;

 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
  VAR_16 = &VAR_15[VAR_17];

  if (VAR_12) {
   VAR_18 = VAR_12(VAR_10, VAR_16);
   if (VAR_18)
    return VAR_18;
  }

  switch (VAR_16->type) {
  case 130:
   FUNC_0(VAR_1, VAR_10->evbit);
   FUNC_0(VAR_16->keycode, VAR_10->keybit);
   break;

  case 129:
  case 128:
   FUNC_0(VAR_3, VAR_10->evbit);
   FUNC_0(VAR_16->sw.code, VAR_10->swbit);
   break;
  }
 }

 if (FUNC_2(VAR_1, VAR_10->evbit)) {
  FUNC_0(VAR_5, VAR_10->keybit);
  FUNC_0(VAR_2, VAR_10->evbit);
  FUNC_0(VAR_7, VAR_10->mscbit);
 }

 VAR_10->keycode = VAR_15;
 VAR_10->keycodemax = VAR_13;
 VAR_10->getkeycode = VAR_8;
 VAR_10->setkeycode = VAR_9;

 return 0;
}

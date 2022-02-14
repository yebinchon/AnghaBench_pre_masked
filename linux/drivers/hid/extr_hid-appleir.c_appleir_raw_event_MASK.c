
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;
struct appleir {int prev_key_idx; int key_up_timer; int current_key; int lock; int * keymap; } ;
typedef int keyrepeat ;
typedef int keydown ;
typedef int flatbattery ;


 int VAR_0 ;
 int FUNC_0 (struct appleir*) ;
 int FUNC_1 (int) ;
 struct appleir* FUNC_2 (struct hid_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct hid_device*,struct appleir*,int ) ;
 int FUNC_4 (struct hid_device*,struct appleir*,int ) ;
 int FUNC_5 (int*,int const*,int) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct hid_device *VAR_2, struct hid_report *VAR_3,
  u8 *VAR_4, int VAR_5)
{
 struct appleir *VAR_6 = FUNC_2(VAR_2);
 static const u8 VAR_7[] = { 0x25, 0x87, 0xee };
 static const u8 VAR_8[] = { 0x26, };
 static const u8 VAR_9[] = { 0x25, 0x87, 0xe0 };
 unsigned long VAR_10;

 if (VAR_5 != 5)
  goto out;

 if (!FUNC_5(VAR_4, VAR_7, sizeof(VAR_7))) {
  int VAR_11;

  FUNC_7(&VAR_6->lock, VAR_10);




  if (VAR_6->current_key)
   FUNC_4(VAR_2, VAR_6, VAR_6->current_key);


  if (VAR_6->prev_key_idx > 0)
   VAR_11 = VAR_6->prev_key_idx;
  else
   VAR_11 = FUNC_1(VAR_4[4]);

  if (VAR_11 >= 0) {
   VAR_6->current_key = VAR_6->keymap[VAR_11];

   FUNC_3(VAR_2, VAR_6, VAR_6->current_key);





   FUNC_6(&VAR_6->key_up_timer, VAR_1 + VAR_0 / 8);
   VAR_6->prev_key_idx = 0;
  } else

   VAR_6->prev_key_idx = -VAR_11;
  FUNC_8(&VAR_6->lock, VAR_10);
  goto out;
 }

 VAR_6->prev_key_idx = 0;

 if (!FUNC_5(VAR_4, VAR_8, sizeof(VAR_8))) {
  FUNC_3(VAR_2, VAR_6, VAR_6->current_key);




  FUNC_6(&VAR_6->key_up_timer, VAR_1 + VAR_0 / 8);
  goto out;
 }

 if (!FUNC_5(VAR_4, VAR_9, sizeof(VAR_9))) {
  FUNC_0(VAR_6);

 }

out:

 return 0;
}

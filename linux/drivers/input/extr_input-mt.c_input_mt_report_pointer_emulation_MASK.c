
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_slot {int dummy; } ;
struct input_mt {int trkid; int num_slots; struct input_mt_slot* slots; } ;
struct input_dev {int absbit; struct input_mt* mt; } ;


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
 scalar_t__ FUNC_0 (struct input_dev*,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_mt_slot*,int ) ;
 int FUNC_3 (struct input_dev*,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5(struct input_dev *VAR_13, bool VAR_14)
{
 struct input_mt *VAR_15 = VAR_13->mt;
 struct input_mt_slot *VAR_16;
 int VAR_17, VAR_18, VAR_19;

 if (!VAR_15)
  return;

 VAR_16 = ((void*)0);
 VAR_17 = VAR_15->trkid;
 VAR_18 = 0;

 for (VAR_19 = 0; VAR_19 < VAR_15->num_slots; ++VAR_19) {
  struct input_mt_slot *VAR_20 = &VAR_15->slots[VAR_19];
  int VAR_21 = FUNC_2(VAR_20, VAR_5);

  if (VAR_21 < 0)
   continue;
  if ((VAR_21 - VAR_17) & VAR_12) {
   VAR_16 = VAR_20;
   VAR_17 = VAR_21;
  }
  VAR_18++;
 }

 FUNC_1(VAR_13, VAR_11, VAR_9, VAR_18 > 0);

 if (VAR_14) {
  if (VAR_18 == 0 &&
      !FUNC_4(VAR_1, VAR_13->absbit) &&
      FUNC_4(VAR_0, VAR_13->absbit) &&
      FUNC_0(VAR_13, VAR_0) != 0) {






   VAR_18 = 1;
  }

  FUNC_3(VAR_13, VAR_18);
 }

 if (VAR_16) {
  int VAR_22 = FUNC_2(VAR_16, VAR_2);
  int VAR_23 = FUNC_2(VAR_16, VAR_3);

  FUNC_1(VAR_13, VAR_10, VAR_7, VAR_22);
  FUNC_1(VAR_13, VAR_10, VAR_8, VAR_23);

  if (FUNC_4(VAR_4, VAR_13->absbit)) {
   int VAR_24 = FUNC_2(VAR_16, VAR_4);
   FUNC_1(VAR_13, VAR_10, VAR_6, VAR_24);
  }
 } else {
  if (FUNC_4(VAR_4, VAR_13->absbit))
   FUNC_1(VAR_13, VAR_10, VAR_6, 0);
 }
}

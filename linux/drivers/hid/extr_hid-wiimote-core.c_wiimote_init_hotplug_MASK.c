
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; size_t exttype; int mp; int lock; } ;
struct wiimote_data {TYPE_1__ state; int hdev; int timer; } ;
typedef size_t __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct wiimote_data*) ;
 int FUNC_7 (struct wiimote_data*) ;
 int FUNC_8 (struct wiimote_data*) ;
 int FUNC_9 (struct wiimote_data*,size_t) ;
 size_t FUNC_10 (struct wiimote_data*,size_t*) ;
 int FUNC_11 (struct wiimote_data*,size_t*) ;
 int FUNC_12 (struct wiimote_data*) ;
 int FUNC_13 (struct wiimote_data*,size_t) ;
 int FUNC_14 (struct wiimote_data*) ;
 int * VAR_11 ;
 int FUNC_15 (struct wiimote_data*) ;
 int FUNC_16 (struct wiimote_data*) ;
 int FUNC_17 (struct wiimote_data*) ;

__attribute__((used)) static void FUNC_18(struct wiimote_data *VAR_12)
{
 __u8 VAR_13, VAR_14[6], VAR_15[6];
 __u32 VAR_16;
 bool VAR_17;

 FUNC_1(VAR_12->hdev, "detect extensions..\n");

 FUNC_6(VAR_12);

 FUNC_4(&VAR_12->state.lock);


 VAR_16 = VAR_12->state.flags;


 VAR_12->state.flags &= ~VAR_4;
 VAR_12->state.flags &= ~VAR_6;

 FUNC_5(&VAR_12->state.lock);


 FUNC_7(VAR_12);
 if (VAR_16 & VAR_9) {
  VAR_17 = 0;
 } else {
  FUNC_8(VAR_12);
  VAR_17 = FUNC_11(VAR_12, VAR_15);
 }
 VAR_13 = FUNC_10(VAR_12, VAR_14);

 FUNC_12(VAR_12);


 if (VAR_13 != VAR_12->state.exttype) {

  FUNC_14(VAR_12);

  if (VAR_13 == VAR_2) {
   FUNC_2(VAR_12->hdev, "cannot detect extension; %6phC\n",
     VAR_14);
  } else if (VAR_13 == VAR_1) {
   FUNC_4(&VAR_12->state.lock);
   VAR_12->state.exttype = VAR_1;
   FUNC_5(&VAR_12->state.lock);
  } else {
   FUNC_2(VAR_12->hdev, "detected extension: %s\n",
     VAR_11[VAR_13]);

   FUNC_13(VAR_12, VAR_13);
  }
 }


 if (VAR_17) {
  if (!VAR_12->state.mp) {
   FUNC_2(VAR_12->hdev, "detected extension: Nintendo Wii Motion Plus\n");
   FUNC_15(VAR_12);
  }
 } else if (VAR_12->state.mp) {
  FUNC_16(VAR_12);
 }


 if (!(VAR_16 & VAR_8))
  VAR_17 = 0;


 if (VAR_17) {
  FUNC_6(VAR_12);
  FUNC_9(VAR_12, VAR_13);
  FUNC_12(VAR_12);


  FUNC_0(&VAR_12->timer);
 } else {

  if (!(VAR_16 & VAR_3) &&
      !(VAR_16 & VAR_9))
   FUNC_3(&VAR_12->timer, VAR_10 + VAR_0 * 4);
 }

 FUNC_4(&VAR_12->state.lock);


 if (VAR_17) {
  VAR_12->state.flags |= VAR_6;
  if (VAR_12->state.exttype == VAR_1) {
   VAR_12->state.flags &= ~VAR_5;
   VAR_12->state.flags &= ~VAR_7;
  } else {
   VAR_12->state.flags &= ~VAR_5;
   VAR_12->state.flags |= VAR_7;
   VAR_12->state.flags |= VAR_4;
  }
 } else if (VAR_12->state.exttype != VAR_1) {
  VAR_12->state.flags |= VAR_4;
 }


 FUNC_17(VAR_12);

 FUNC_5(&VAR_12->state.lock);

 FUNC_1(VAR_12->hdev, "detected extensions: MP: %d EXT: %d\n",
  VAR_12->state.mp, VAR_12->state.exttype);
}

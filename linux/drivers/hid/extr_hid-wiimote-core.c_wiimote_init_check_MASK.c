
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ exttype; scalar_t__ mp; int lock; } ;
struct wiimote_data {int hdev; TYPE_1__ state; } ;
typedef scalar_t__ __u8 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wiimote_data*) ;
 scalar_t__ FUNC_4 (struct wiimote_data*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct wiimote_data*) ;
 int FUNC_6 (struct wiimote_data*) ;
 int FUNC_7 (struct wiimote_data*) ;

__attribute__((used)) static bool FUNC_8(struct wiimote_data *VAR_11)
{
 __u32 VAR_12;
 __u8 VAR_13, VAR_14[6];
 bool VAR_15, VAR_16;

 FUNC_1(&VAR_11->state.lock);
 VAR_12 = VAR_11->state.flags;
 FUNC_2(&VAR_11->state.lock);

 FUNC_3(VAR_11);
 if (VAR_11->state.exttype == VAR_0 &&
     VAR_11->state.mp > 0 && (VAR_12 & VAR_9)) {
  VAR_13 = FUNC_5(VAR_11);
  VAR_15 = VAR_13 == VAR_2;

  FUNC_1(&VAR_11->state.lock);
  VAR_15 = VAR_15 && !(VAR_11->state.flags & VAR_5);
  VAR_15 = VAR_15 && !(VAR_11->state.flags & VAR_8);
  VAR_15 = VAR_15 && (VAR_11->state.flags & VAR_7);
  FUNC_2(&VAR_11->state.lock);

  if (!VAR_15)
   FUNC_0(VAR_11->hdev, "state left: !EXT && MP\n");


  VAR_16 = 0;

  goto out_release;
 }






 if (!(VAR_12 & VAR_9) &&
     VAR_11->state.exttype != VAR_0) {
  VAR_13 = FUNC_4(VAR_11, VAR_14);
  VAR_15 = VAR_13 == VAR_11->state.exttype;

  FUNC_1(&VAR_11->state.lock);
  VAR_15 = VAR_15 && !(VAR_11->state.flags & VAR_7);
  VAR_15 = VAR_15 && (VAR_11->state.flags & VAR_5);
  FUNC_2(&VAR_11->state.lock);

  if (!VAR_15)
   FUNC_0(VAR_11->hdev, "state left: EXT && !MP\n");


  VAR_16 = 1;

  goto out_release;
 }
 if (!(VAR_12 & VAR_9) &&
     VAR_11->state.exttype == VAR_0) {
  VAR_13 = FUNC_4(VAR_11, VAR_14);
  VAR_15 = VAR_13 == VAR_11->state.exttype;

  FUNC_1(&VAR_11->state.lock);
  VAR_15 = VAR_15 && !(VAR_11->state.flags & VAR_5);
  VAR_15 = VAR_15 && !(VAR_11->state.flags & VAR_7);
  VAR_15 = VAR_15 && !(VAR_11->state.flags & VAR_6);
  FUNC_2(&VAR_11->state.lock);

  if (!VAR_15)
   FUNC_0(VAR_11->hdev, "state left: !EXT && !MP\n");


  VAR_16 = 1;

  goto out_release;
 }
 if (VAR_11->state.exttype != VAR_0 &&
     VAR_11->state.mp > 0 && (VAR_12 & VAR_9)) {
  VAR_13 = FUNC_5(VAR_11);
  VAR_15 = VAR_13 != VAR_1;
  VAR_15 = VAR_15 && VAR_13 != VAR_3;
  VAR_15 = VAR_15 && VAR_13 != VAR_2;

  FUNC_1(&VAR_11->state.lock);
  VAR_15 = VAR_15 && (VAR_11->state.flags & VAR_6);
  VAR_15 = VAR_15 && (VAR_11->state.flags & VAR_5);
  VAR_15 = VAR_15 && (VAR_11->state.flags & VAR_7);
  FUNC_2(&VAR_11->state.lock);

  if (!VAR_15)
   FUNC_0(VAR_11->hdev, "state left: EXT && MP\n");


  VAR_16 = 0;

  goto out_release;
 }


 VAR_15 = 0;

out_release:
 FUNC_6(VAR_11);


 if (VAR_15 && VAR_16 && !(VAR_12 & VAR_4) &&
     !(VAR_12 & VAR_10))
  FUNC_7(VAR_11);

 return VAR_15;
}

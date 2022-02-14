
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mp; } ;
struct wiimote_data {int timer; TYPE_1__ state; int hdev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct wiimote_data*) ;
 int FUNC_3 (struct wiimote_data*) ;
 int FUNC_4 (struct wiimote_data*,int *) ;
 int FUNC_5 (struct wiimote_data*) ;
 int FUNC_6 (struct wiimote_data*) ;
 int FUNC_7 (struct wiimote_data*) ;

__attribute__((used)) static void FUNC_8(struct wiimote_data *VAR_2)
{
 bool VAR_3;
 __u8 VAR_4[6];

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 VAR_3 = FUNC_4(VAR_2, VAR_4);
 FUNC_5(VAR_2);


 if (VAR_3) {
  if (!VAR_2->state.mp) {
   FUNC_0(VAR_2->hdev, "detected extension: Nintendo Wii Motion Plus\n");
   FUNC_6(VAR_2);
  }
 } else if (VAR_2->state.mp) {
  FUNC_7(VAR_2);
 }

 FUNC_1(&VAR_2->timer, VAR_1 + VAR_0 * 4);
}

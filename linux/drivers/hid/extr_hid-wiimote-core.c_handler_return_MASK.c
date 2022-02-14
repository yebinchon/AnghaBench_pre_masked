
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd_err; } ;
struct wiimote_data {int hdev; TYPE_1__ state; } ;
typedef scalar_t__ __u8 ;


 int FUNC_0 (struct wiimote_data*,scalar_t__ const*) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct wiimote_data*) ;
 scalar_t__ FUNC_3 (struct wiimote_data*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct wiimote_data *VAR_0, const __u8 *VAR_1)
{
 __u8 VAR_2 = VAR_1[3];
 __u8 VAR_3 = VAR_1[2];

 FUNC_0(VAR_0, VAR_1);

 if (FUNC_3(VAR_0, VAR_3, 0)) {
  VAR_0->state.cmd_err = VAR_2;
  FUNC_2(VAR_0);
 } else if (VAR_2) {
  FUNC_1(VAR_0->hdev, "Remote error %hhu on req %hhu\n", VAR_2,
         VAR_3);
 }
}

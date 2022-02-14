
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int cmd_battery; } ;
struct wiimote_data {TYPE_1__ state; int hdev; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wiimote_data*) ;
 int FUNC_1 (struct wiimote_data*,int const*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wiimote_data*) ;
 scalar_t__ FUNC_4 (struct wiimote_data*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct wiimote_data *VAR_5, const __u8 *VAR_6)
{
 FUNC_1(VAR_5, VAR_6);


 if (VAR_6[2] & 0x02) {
  if (!(VAR_5->state.flags & VAR_1)) {
   FUNC_2(VAR_5->hdev, "EXT hotplug: 1\n");
   VAR_5->state.flags |= VAR_1;
   FUNC_0(VAR_5);
  }
 } else {
  if (VAR_5->state.flags & VAR_1) {
   FUNC_2(VAR_5->hdev, "EXT hotplug: 0\n");
   VAR_5->state.flags &= ~VAR_1;
   VAR_5->state.flags &= ~VAR_3;
   VAR_5->state.flags &= ~VAR_0;
   VAR_5->state.flags &= ~VAR_2;
   FUNC_0(VAR_5);
  }
 }

 VAR_5->state.cmd_battery = VAR_6[5];
 if (FUNC_4(VAR_5, VAR_4, 0))
  FUNC_3(VAR_5);
}

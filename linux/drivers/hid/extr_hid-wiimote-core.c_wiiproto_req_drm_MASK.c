
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ drm; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef int cmd ;
typedef scalar_t__ __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct wiimote_data*) ;
 int FUNC_1 (struct wiimote_data*,scalar_t__*,int) ;
 int FUNC_2 (struct wiimote_data*,scalar_t__*) ;

void FUNC_3(struct wiimote_data *VAR_3, __u8 VAR_4)
{
 __u8 VAR_5[3];

 if (VAR_3->state.flags & VAR_0)
  VAR_4 = VAR_3->state.drm;
 else if (VAR_4 == VAR_2)
  VAR_4 = FUNC_0(VAR_3);

 VAR_5[0] = VAR_1;
 VAR_5[1] = 0;
 VAR_5[2] = VAR_4;

 VAR_3->state.drm = VAR_4;
 FUNC_2(VAR_3, &VAR_5[1]);
 FUNC_1(VAR_3, VAR_5, sizeof(VAR_5));
}

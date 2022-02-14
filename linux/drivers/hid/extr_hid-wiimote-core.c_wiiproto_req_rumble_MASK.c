
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef int cmd ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wiimote_data*,int*,int) ;
 int FUNC_1 (struct wiimote_data*,int*) ;

void FUNC_2(struct wiimote_data *VAR_2, __u8 VAR_3)
{
 __u8 VAR_4[2];

 VAR_3 = !!VAR_3;
 if (VAR_3 == !!(VAR_2->state.flags & VAR_0))
  return;

 if (VAR_3)
  VAR_2->state.flags |= VAR_0;
 else
  VAR_2->state.flags &= ~VAR_0;

 VAR_4[0] = VAR_1;
 VAR_4[1] = 0;

 FUNC_1(VAR_2, &VAR_4[1]);
 FUNC_0(VAR_2, VAR_4, sizeof(VAR_4));
}

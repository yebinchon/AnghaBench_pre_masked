
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
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wiimote_data*,int*,int) ;
 int FUNC_1 (struct wiimote_data*,int*) ;

void FUNC_2(struct wiimote_data *VAR_6, int VAR_7)
{
 __u8 VAR_8[2];

 VAR_7 &= VAR_0;
 if ((VAR_6->state.flags & VAR_0) == VAR_7)
  return;
 VAR_6->state.flags = (VAR_6->state.flags & ~VAR_0) | VAR_7;

 VAR_8[0] = VAR_5;
 VAR_8[1] = 0;

 if (VAR_7 & VAR_1)
  VAR_8[1] |= 0x10;
 if (VAR_7 & VAR_2)
  VAR_8[1] |= 0x20;
 if (VAR_7 & VAR_3)
  VAR_8[1] |= 0x40;
 if (VAR_7 & VAR_4)
  VAR_8[1] |= 0x80;

 FUNC_1(VAR_6, &VAR_8[1]);
 FUNC_0(VAR_6, VAR_8, sizeof(VAR_8));
}

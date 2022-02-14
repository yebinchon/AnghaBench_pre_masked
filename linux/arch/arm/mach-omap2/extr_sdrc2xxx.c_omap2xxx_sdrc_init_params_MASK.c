
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int m_type; int base_cs; int fast_dll_ctrl; int slow_dll_ctrl; int dll_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__ VAR_9 ;
 int FUNC_1 (int*,int,int,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(u32 VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12 = 0;


 VAR_9.m_type = !((FUNC_2(VAR_8) & 0x3) == 0x1);




 if (FUNC_0())
  VAR_9.base_cs = 1;
 else
  VAR_9.base_cs = 0;

 if (VAR_9.m_type != VAR_0)
  return;


 if (((VAR_9.fast_dll_ctrl & (1 << 2)) == VAR_2))
  VAR_9.dll_mode = VAR_3;
 else
  VAR_9.dll_mode = VAR_1;

 if (VAR_9.base_cs == 0) {
  VAR_12 = FUNC_2(VAR_4);
  VAR_11 = FUNC_2(VAR_5) & 0xff00;
 } else {
  VAR_12 = FUNC_2(VAR_6);
  VAR_11 = FUNC_2(VAR_7) & 0xff00;
 }
 if (VAR_10) {
  VAR_12 &= ~0xff00;
  VAR_12 |= VAR_11;
 }

 VAR_9.fast_dll_ctrl = (VAR_12 | (3 << 8));


 FUNC_1(&VAR_9.slow_dll_ctrl,
       VAR_9.fast_dll_ctrl,
       VAR_9.base_cs,
       VAR_10);
 VAR_9.slow_dll_ctrl &= 0xff00;


 VAR_9.slow_dll_ctrl |=
  ((VAR_9.fast_dll_ctrl & 0xF) | (1 << 2));


 VAR_9.slow_dll_ctrl |= ((1 << 1) | (3 << 8));
}

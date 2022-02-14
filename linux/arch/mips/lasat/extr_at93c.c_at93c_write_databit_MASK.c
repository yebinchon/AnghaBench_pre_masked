
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int wdata_shift; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(u8 VAR_1)
{
 u32 VAR_2 = FUNC_1();
 if (VAR_1)
  VAR_2 |= 1 << VAR_0->wdata_shift;
 else
  VAR_2 &= ~(1 << VAR_0->wdata_shift);

 FUNC_2(VAR_2);
 FUNC_3(100);
 FUNC_0(VAR_2);
}

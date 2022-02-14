
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned long FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 unsigned long FUNC_2 (unsigned long,int) ;
 unsigned long FUNC_3 () ;
 unsigned long FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_4, unsigned long VAR_5,
  unsigned long *VAR_6, unsigned long *VAR_7)
{
 if (!FUNC_1() && (VAR_5 & VAR_1)) {







  *VAR_6 = 0x40000000;
  *VAR_7 = 0x80000000;
  if (VAR_3->flags & VAR_2) {
   *VAR_6 = FUNC_2(*VAR_6, 0x02000000);
  }
  return;
 }

 *VAR_6 = FUNC_0(1);
 if (FUNC_1())
  *VAR_7 = FUNC_3();
 else
  *VAR_7 = FUNC_4(VAR_4 > VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 unsigned long FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 unsigned long VAR_4 = 0UL;

 if (VAR_3->flags & VAR_1) {
  unsigned long VAR_5 = FUNC_0();
  if (FUNC_1(VAR_2))
   VAR_4 = (VAR_5 % (1UL << (23UL-VAR_0)));
  else
   VAR_4 = (VAR_5 % (1UL << (30UL-VAR_0)));
 }
 return VAR_4 << VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long flags; int lock; int wait; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1, bool VAR_2)
{
 FUNC_0(&VAR_0.lock);
 VAR_0.flags &= ~VAR_1;
 if (VAR_2)
  FUNC_2(&VAR_0.wait);
 FUNC_1(&VAR_0.lock);
}

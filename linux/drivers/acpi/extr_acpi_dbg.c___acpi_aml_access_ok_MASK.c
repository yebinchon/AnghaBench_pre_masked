
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; scalar_t__ thread; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline bool FUNC_1(unsigned long VAR_5)
{







 if (!(VAR_3.flags & VAR_2) ||
     (VAR_3.flags & VAR_0) ||
     !FUNC_0())
  return 0;
 if ((VAR_5 & VAR_1) &&
     VAR_4 != VAR_3.thread)
  return 0;
 return 1;
}

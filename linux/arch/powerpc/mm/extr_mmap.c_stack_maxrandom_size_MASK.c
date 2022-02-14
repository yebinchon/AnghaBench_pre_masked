
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline unsigned long FUNC_1(void)
{
 if (!(VAR_1->flags & VAR_0))
  return 0;


 if (FUNC_0())
  return (1<<23);
 else
  return (1<<30);
}

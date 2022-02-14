
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rlimit {unsigned long rlim_max; } ;
struct TYPE_2__ {int flags; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct rlimit *VAR_7)
{
 unsigned long VAR_8;


 VAR_8 = VAR_7 ? VAR_7->rlim_max
    : FUNC_1(VAR_2);
 if (VAR_8 > VAR_4)
  VAR_8 = VAR_4;


 if (VAR_6->flags & VAR_1)
  VAR_8 += (VAR_3 << VAR_0);

 return FUNC_0(VAR_5 - VAR_8);
}

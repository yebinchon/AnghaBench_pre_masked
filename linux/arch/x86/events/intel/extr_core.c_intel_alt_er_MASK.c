
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int flags; TYPE_1__* extra_regs; } ;
struct TYPE_3__ {int valid_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int FUNC_0(int VAR_4, u64 VAR_5)
{
 int VAR_6 = VAR_4;

 if (!(VAR_3.flags & VAR_2))
  return VAR_4;

 if (VAR_4 == VAR_0)
  VAR_6 = VAR_1;

 if (VAR_4 == VAR_1)
  VAR_6 = VAR_0;

 if (VAR_5 & ~VAR_3.extra_regs[VAR_6].valid_mask)
  return VAR_4;

 return VAR_6;
}

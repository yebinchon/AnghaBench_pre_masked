
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dumpreg {int addr; } ;
struct TYPE_3__ {int ah_macRev; int ah_macVersion; } ;
struct TYPE_4__ {int nregs; struct dumpreg** regs; TYPE_1__ revs; } ;
typedef TYPE_1__ HAL_REVS ;


 scalar_t__ FUNC_0 (struct dumpreg const*,int ,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static const struct dumpreg *
FUNC_1(int VAR_1)
{
 const HAL_REVS *VAR_2 = &VAR_0.revs;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0.nregs; VAR_3++) {
  const struct dumpreg *VAR_4 = VAR_0.regs[VAR_3];
  if (VAR_4->addr == VAR_1 &&
      FUNC_0(VAR_4, VAR_2->ah_macVersion, VAR_2->ah_macRev))
   return VAR_4;
 }
 return ((void*)0);
}

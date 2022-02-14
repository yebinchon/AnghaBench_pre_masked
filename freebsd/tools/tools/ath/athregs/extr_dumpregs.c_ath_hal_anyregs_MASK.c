
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dumpreg {int type; } ;
struct TYPE_2__ {int nregs; struct dumpreg** regs; int revs; } ;
typedef int HAL_REVS ;


 scalar_t__ FUNC_0 (struct dumpreg const*,int const*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
 const HAL_REVS *VAR_2 = &VAR_0.revs;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0.nregs; VAR_3++) {
  const struct dumpreg *VAR_4 = VAR_0.regs[VAR_3];
  if ((VAR_1 & VAR_4->type) && FUNC_0(VAR_4, VAR_2))
   return 1;
 }
 return 0;
}

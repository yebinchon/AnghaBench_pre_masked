
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dumpreg {int type; int addr; } ;
struct TYPE_2__ {int nregs; struct dumpreg** regs; int revs; } ;
typedef int HAL_REVS ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (struct dumpreg const*,int const*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_2, int VAR_3)
{
 const HAL_REVS *VAR_4 = &VAR_1.revs;
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1.nregs; VAR_5++) {
  const struct dumpreg *VAR_8 = VAR_1.regs[VAR_5];
  if (!FUNC_1(VAR_8, VAR_4))
   continue;
  if (VAR_8->type & VAR_0) {
   if (VAR_6 == 0) {
    VAR_6 = VAR_7 = VAR_8->addr;
   } else if (VAR_8->addr == VAR_7 + sizeof(uint32_t)) {
    VAR_7 = VAR_8->addr;
   } else {
    FUNC_0(VAR_2, VAR_6, VAR_7);
    VAR_6 = VAR_7 = VAR_8->addr;
   }
  } else {
   if (VAR_6 != 0)
    FUNC_0(VAR_2, VAR_6, VAR_7);
   VAR_6 = VAR_7 = 0;
  }
 }
 if (VAR_6 != 0)
  FUNC_0(VAR_2, VAR_6, VAR_7);
}

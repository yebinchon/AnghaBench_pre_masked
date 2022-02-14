
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mtrr_type ;
struct TYPE_2__ {int high; int low; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(unsigned int VAR_6, unsigned long *VAR_7,
  unsigned long *VAR_8, mtrr_type * VAR_9)
{
 *VAR_7 = VAR_4[VAR_6].high >> VAR_3;
 *VAR_8 = -(VAR_4[VAR_6].low & 0xfffff000) >> VAR_3;
 *VAR_9 = VAR_2;

 if (VAR_5 == 1 && ((VAR_4[VAR_6].low & 31) & 2))
  *VAR_9 = VAR_0;
 if (VAR_5 == 1 && (VAR_4[VAR_6].low & 31) == 25)
  *VAR_9 = VAR_1;
 if (VAR_5 == 0 && (VAR_4[VAR_6].low & 31) == 31)
  *VAR_9 = VAR_1;
}

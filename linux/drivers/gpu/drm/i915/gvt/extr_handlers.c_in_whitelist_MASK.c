
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int reg; } ;
typedef TYPE_1__ i915_reg_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline bool FUNC_1(unsigned int VAR_1)
{
 int VAR_2 = 0, VAR_3 = FUNC_0(VAR_0);
 i915_reg_t *VAR_4 = VAR_0;

 while (VAR_2 < VAR_3) {
  int VAR_5 = (VAR_2 + VAR_3)/2;

  if (VAR_1 > VAR_4[VAR_5].reg)
   VAR_2 = VAR_5 + 1;
  else if (VAR_1 < VAR_4[VAR_5].reg)
   VAR_3 = VAR_5;
  else
   return 1;
 }
 return 0;
}

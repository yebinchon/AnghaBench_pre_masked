
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_tmu_channel {scalar_t__ base; TYPE_1__* tmu; } ;
struct TYPE_2__ {int model; int mapbase; } ;




 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_3(struct sh_tmu_channel *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 if (VAR_3 == VAR_1) {
  switch (VAR_2->tmu->model) {
  case 128:
   return FUNC_2(VAR_2->tmu->mapbase + 2);
  case 129:
   return FUNC_2(VAR_2->tmu->mapbase + 4);
  }
 }

 VAR_4 = VAR_3 << 2;

 if (VAR_3 == VAR_0)
  return FUNC_0(VAR_2->base + VAR_4);
 else
  return FUNC_1(VAR_2->base + VAR_4);
}

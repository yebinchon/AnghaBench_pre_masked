
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_tmu_channel {scalar_t__ base; TYPE_1__* tmu; } ;
struct TYPE_2__ {int model; int mapbase; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 void FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static inline void FUNC_3(struct sh_tmu_channel *VAR_2, int VAR_3,
    unsigned long VAR_4)
{
 unsigned long VAR_5;

 if (VAR_3 == VAR_1) {
  switch (VAR_2->tmu->model) {
  case 128:
   return FUNC_2(VAR_4, VAR_2->tmu->mapbase + 2);
  case 129:
   return FUNC_2(VAR_4, VAR_2->tmu->mapbase + 4);
  }
 }

 VAR_5 = VAR_3 << 2;

 if (VAR_3 == VAR_0)
  FUNC_0(VAR_4, VAR_2->base + VAR_5);
 else
  FUNC_1(VAR_4, VAR_2->base + VAR_5);
}

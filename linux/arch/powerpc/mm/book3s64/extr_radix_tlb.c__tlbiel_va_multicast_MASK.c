
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlbiel_va {unsigned long va; unsigned long pid; unsigned long psize; unsigned long ric; } ;
struct TYPE_2__ {int copros; } ;
struct mm_struct {TYPE_1__ context; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 struct cpumask* FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct cpumask*,int ,struct tlbiel_va*,int) ;

__attribute__((used)) static inline void FUNC_4(struct mm_struct *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4,
    unsigned long VAR_5, unsigned long VAR_6)
{
 struct cpumask *VAR_7 = FUNC_2(VAR_2);
 struct tlbiel_va VAR_8 = { .va = VAR_3, .pid = VAR_4, .psize = VAR_5, .ric = VAR_6 };
 FUNC_3(VAR_7, VAR_1, &VAR_8, 1);
 if (FUNC_1(&VAR_2->context.copros) > 0)
  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_0);
}

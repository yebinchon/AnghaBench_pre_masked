
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlbiel_va_range {unsigned long start; unsigned long end; unsigned long pid; unsigned long page_size; unsigned long psize; int also_pwc; } ;
struct TYPE_2__ {int copros; } ;
struct mm_struct {TYPE_1__ context; } ;
struct cpumask {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 struct cpumask* FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct cpumask*,int ,struct tlbiel_va_range*,int) ;

__attribute__((used)) static inline void FUNC_4(struct mm_struct *VAR_1,
    unsigned long VAR_2, unsigned long VAR_3,
    unsigned long VAR_4, unsigned long VAR_5,
    unsigned long VAR_6, bool VAR_7)
{
 struct cpumask *VAR_8 = FUNC_2(VAR_1);
 struct tlbiel_va_range VAR_9 = { .start = VAR_2, .end = VAR_3,
    .pid = VAR_4, .page_size = VAR_5,
    .psize = VAR_6, .also_pwc = VAR_7 };

 FUNC_3(VAR_8, VAR_0, &VAR_9, 1);
 if (FUNC_1(&VAR_1->context.copros) > 0)
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}

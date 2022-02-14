
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlbiel_pid {unsigned long pid; unsigned long ric; } ;
struct TYPE_2__ {int copros; } ;
struct mm_struct {TYPE_1__ context; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 struct cpumask* FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (struct cpumask*,int ,struct tlbiel_pid*,int) ;

__attribute__((used)) static inline void FUNC_4(struct mm_struct *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4)
{
 struct cpumask *VAR_5 = FUNC_2(VAR_2);
 struct tlbiel_pid VAR_6 = { .pid = VAR_3, .ric = VAR_4 };

 FUNC_3(VAR_5, VAR_1, &VAR_6, 1);





 if (FUNC_1(&VAR_2->context.copros) > 0)
  FUNC_0(VAR_3, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int dummy; } ;
struct cpumask {int dummy; } ;


 scalar_t__ FUNC_0 (int,struct cpumask const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct cpumask const*,int (*) (struct rdtgroup*),struct rdtgroup*,int) ;
 int FUNC_4 (struct rdtgroup*) ;

__attribute__((used)) static void
FUNC_5(const struct cpumask *VAR_0, struct rdtgroup *VAR_1)
{
 int VAR_2 = FUNC_1();

 if (FUNC_0(VAR_2, VAR_0))
  FUNC_4(VAR_1);
 FUNC_3(VAR_0, FUNC_4, VAR_1, 1);
 FUNC_2();
}

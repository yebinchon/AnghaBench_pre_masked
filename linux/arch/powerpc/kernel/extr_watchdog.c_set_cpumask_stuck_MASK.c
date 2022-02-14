
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpumask {int dummy; } ;


 int FUNC_0 (int *,int *,struct cpumask const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct cpumask const*,struct cpumask const*,struct cpumask const*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cpumask const VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(const struct cpumask *VAR_4, u64 VAR_5)
{
 FUNC_2(&VAR_2, &VAR_2, VAR_4);
 FUNC_0(&VAR_1, &VAR_1, VAR_4);
 if (FUNC_1(&VAR_1)) {
  VAR_3 = VAR_5;
  FUNC_0(&VAR_1,
    &VAR_0,
    &VAR_2);
 }
}

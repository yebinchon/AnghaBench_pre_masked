
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (unsigned long,int) ;
 unsigned long* FUNC_2 (struct cpumask const*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(const struct cpumask *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = FUNC_2(VAR_1)[0];
 int VAR_4 = FUNC_3();

 if (VAR_4 < VAR_0)
  FUNC_0(VAR_4, &VAR_3);

 FUNC_1(VAR_3, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int bits; } ;


 int FUNC_0 (struct cpumask*,struct cpumask*) ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct cpumask *VAR_0, unsigned long VAR_1,
      unsigned long VAR_2)
{
 struct cpumask VAR_3;

 FUNC_0(VAR_0, &VAR_3);
 FUNC_1(VAR_3.bits, VAR_1, VAR_2);
}

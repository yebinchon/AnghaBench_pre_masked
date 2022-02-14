
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86; int x86_model; } ;


 int FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (struct cpuinfo_x86*) ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_x86 *VAR_0)
{
 if (VAR_0->x86 == 5 && VAR_0->x86_model == 5)
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);
}

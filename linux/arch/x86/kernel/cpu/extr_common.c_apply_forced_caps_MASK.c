
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int * x86_capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_0(struct cpuinfo_x86 *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1 + VAR_0; VAR_5++) {
  VAR_4->x86_capability[VAR_5] &= ~VAR_2[VAR_5];
  VAR_4->x86_capability[VAR_5] |= VAR_3[VAR_5];
 }
}

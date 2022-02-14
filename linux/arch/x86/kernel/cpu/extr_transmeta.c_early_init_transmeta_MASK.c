
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int * x86_capability; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_x86 *VAR_1)
{
 u32 VAR_2;


 VAR_2 = FUNC_0(0x80860000);
 if ((VAR_2 & 0xffff0000) == 0x80860000) {
  if (VAR_2 >= 0x80860001)
   VAR_1->x86_capability[VAR_0] = FUNC_1(0x80860001);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86; int x86_vendor; } ;




 int FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (struct cpuinfo_x86*) ;

__attribute__((used)) static int FUNC_2(struct cpuinfo_x86 *VAR_0)
{
 if (VAR_0->x86 != 5)
  return 0;

 switch (VAR_0->x86_vendor) {
 case 128:
  FUNC_0(VAR_0);
  return 1;
  break;
 case 129:
  FUNC_1(VAR_0);
  return 1;
  break;
 default:
  return 0;
 }

 return 0;
}

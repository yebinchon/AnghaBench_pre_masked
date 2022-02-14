
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86_vendor; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpuinfo_x86*) ;
 int FUNC_1 (struct cpuinfo_x86*) ;
 int FUNC_2 (struct cpuinfo_x86*) ;
 int FUNC_3 (struct cpuinfo_x86*) ;

__attribute__((used)) static void FUNC_4(struct cpuinfo_x86 *VAR_2)
{
 switch (VAR_2->x86_vendor) {
 case 128:
  FUNC_3(VAR_2);
  VAR_1 = VAR_0;
  break;

 case 131: {
  FUNC_0(VAR_2);
  break;
  }

 case 129:
  FUNC_2(VAR_2);
  break;

 case 130:
  FUNC_1(VAR_2);
  break;

 default:
  break;
 }
}

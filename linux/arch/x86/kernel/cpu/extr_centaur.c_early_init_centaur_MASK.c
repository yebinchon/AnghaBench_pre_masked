
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86; int x86_model; int x86_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cpuinfo_x86*,int ) ;

__attribute__((used)) static void FUNC_1(struct cpuinfo_x86 *VAR_4)
{
 switch (VAR_4->x86) {






 case 6:
  if (VAR_4->x86_model >= 0xf)
   FUNC_0(VAR_4, VAR_1);
  break;
 }



 if (VAR_4->x86_power & (1 << 8)) {
  FUNC_0(VAR_4, VAR_1);
  FUNC_0(VAR_4, VAR_2);
 }
}

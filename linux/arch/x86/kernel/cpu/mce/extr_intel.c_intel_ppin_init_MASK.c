
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86_model; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long long*) ;
 int FUNC_1 (struct cpuinfo_x86*,int ) ;
 int FUNC_2 (int ,unsigned long long) ;

__attribute__((used)) static void FUNC_3(struct cpuinfo_x86 *VAR_2)
{
 unsigned long long VAR_3;






 switch (VAR_2->x86_model) {
 case 131:
 case 132:
 case 134:
 case 133:
 case 130:
 case 129:
 case 128:

  if (FUNC_0(VAR_0, &VAR_3))
   return;

  if ((VAR_3 & 3UL) == 1UL) {

   return;
  }


  if (!(VAR_3 & 3UL)) {
   FUNC_2(VAR_0, VAR_3 | 2UL);
   FUNC_0(VAR_0, &VAR_3);
  }

  if ((VAR_3 & 3UL) == 2UL)
   FUNC_1(VAR_2, VAR_1);
 }
}

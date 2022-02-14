
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86; int x86_model; } ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned long VAR_2 ;
 int VAR_3 ;
 struct cpuinfo_x86 VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct cpuinfo_x86*,int ) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct cpuinfo_x86 *VAR_7)
{




 if (VAR_7->x86 != 6)
  return;
 switch (VAR_7->x86_model) {
 case 129:
 case 128:
  break;
 default:
  return;
 }

 if (VAR_6)
  return;

 FUNC_0(VAR_7, VAR_3);
 FUNC_1(VAR_5,
      1UL << VAR_2);

 if (VAR_7 == &VAR_4)
  VAR_0 |= VAR_1;
}

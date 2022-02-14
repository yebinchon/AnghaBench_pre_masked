
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int x86_power; int microcode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct cpuinfo_x86*) ;
 int FUNC_3 (struct cpuinfo_x86*) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (struct cpuinfo_x86*,int ) ;

__attribute__((used)) static void FUNC_6(struct cpuinfo_x86 *VAR_9)
{
 u32 VAR_10;

 FUNC_2(VAR_9);

 FUNC_5(VAR_9, VAR_5);

 FUNC_4(VAR_0, &VAR_9->microcode, &VAR_10);





 if (VAR_9->x86_power & (1 << 8)) {
  FUNC_5(VAR_9, VAR_3);
  FUNC_5(VAR_9, VAR_6);
 }


 if (VAR_9->x86_power & FUNC_0(12))
  FUNC_5(VAR_9, VAR_1);
 FUNC_5(VAR_9, VAR_8);

 FUNC_3(VAR_9);
}

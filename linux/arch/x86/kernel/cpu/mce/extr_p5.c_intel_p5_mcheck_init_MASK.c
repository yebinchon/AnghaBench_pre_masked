
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cpuinfo_x86*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct cpuinfo_x86 *VAR_7)
{
 u32 VAR_8, VAR_9;


 if (!VAR_5)
  return;


 if (!FUNC_0(VAR_7, VAR_3))
  return;

 VAR_4 = VAR_6;

 FUNC_5();


 FUNC_3(VAR_0, VAR_8, VAR_9);
 FUNC_3(VAR_1, VAR_8, VAR_9);
 FUNC_2("Intel old style machine check architecture supported.\n");


 FUNC_1(VAR_2);
 FUNC_2("Intel old style machine check reporting enabled on CPU#%d.\n",
  FUNC_4());
}

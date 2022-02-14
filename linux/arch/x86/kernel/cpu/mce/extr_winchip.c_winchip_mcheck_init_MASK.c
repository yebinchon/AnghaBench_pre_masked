
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuinfo_x86 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int) ;

void FUNC_5(struct cpuinfo_x86 *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_2 = VAR_3;

 FUNC_3();

 FUNC_2(VAR_0, VAR_5, VAR_6);
 VAR_5 |= (1<<2);
 VAR_5 &= ~(1<<4);
 FUNC_4(VAR_0, VAR_5, VAR_6);

 FUNC_0(VAR_1);

 FUNC_1("Winchip machine check reporting enabled on CPU#0.\n");
}

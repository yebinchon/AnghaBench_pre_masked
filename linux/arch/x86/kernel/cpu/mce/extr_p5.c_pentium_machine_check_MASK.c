
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_4, long VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 FUNC_1(VAR_4);

 FUNC_4(VAR_1, VAR_6, VAR_7);
 FUNC_4(VAR_2, VAR_8, VAR_7);

 FUNC_3("CPU#%d: Machine Check Exception:  0x%8X (type 0x%8X).\n",
   FUNC_5(), VAR_6, VAR_8);

 if (VAR_8 & (1<<5)) {
  FUNC_3("CPU#%d: Possible thermal failure (CPU on fire ?).\n",
    FUNC_5());
 }

 FUNC_0(VAR_3, VAR_0);

 FUNC_2(VAR_4);
}

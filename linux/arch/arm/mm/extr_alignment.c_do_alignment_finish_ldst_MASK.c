
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union offset_union {unsigned long un; } ;
typedef int u32 ;
struct pt_regs {unsigned long* uregs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_0, u32 VAR_1, struct pt_regs *VAR_2, union offset_union VAR_3)
{
 if (!FUNC_1(VAR_1))
  VAR_3.un = -VAR_3.un;

 if (!FUNC_0(VAR_1))
  VAR_0 += VAR_3.un;

 if (!FUNC_0(VAR_1) || FUNC_2(VAR_1))
  VAR_2->uregs[FUNC_3(VAR_1)] = VAR_0;
}

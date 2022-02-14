
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs*,int) ;
 int FUNC_1 (struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_0, u32 VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, (VAR_1 >> 9) & 1);
 FUNC_0(VAR_0, 4);
 return VAR_2;
}

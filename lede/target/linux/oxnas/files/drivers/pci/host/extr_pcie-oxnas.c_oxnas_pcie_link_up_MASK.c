
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxnas_pcie {int pcie_ctrl_offset; int sys_ctrl; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct oxnas_pcie *VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;


 VAR_5 = VAR_3 + (VAR_1 * VAR_0);
 while (!FUNC_1(VAR_3, VAR_5)) {
  FUNC_0(VAR_4->sys_ctrl, VAR_4->pcie_ctrl_offset, &VAR_6);
  if (VAR_6 & VAR_2)
   return 1;
 }
 return 0;
}

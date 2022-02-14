
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_pt_regs {int gp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;

int FUNC_1(int VAR_2, struct uml_pt_regs *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_2, 0, VAR_3->gp);
 if (VAR_4 < 0)
  return -VAR_1;
 return 0;
}

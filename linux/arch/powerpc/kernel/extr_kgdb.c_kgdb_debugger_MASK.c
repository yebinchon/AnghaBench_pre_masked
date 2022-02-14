
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,struct pt_regs*) ;

__attribute__((used)) static int FUNC_3(struct pt_regs *VAR_1)
{
 return !FUNC_2(1, FUNC_1(FUNC_0(VAR_1)),
          VAR_0, VAR_1);
}

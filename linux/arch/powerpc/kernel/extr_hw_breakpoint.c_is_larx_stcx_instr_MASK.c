
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct instruction_op {int type; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct instruction_op*,struct pt_regs*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct pt_regs *VAR_2, unsigned int VAR_3)
{
 int VAR_4, VAR_5;
 struct instruction_op VAR_6;

 VAR_4 = FUNC_1(&VAR_6, VAR_2, VAR_3);
 VAR_5 = FUNC_0(VAR_6.type);
 return (!VAR_4 && (VAR_5 == VAR_0 || VAR_5 == VAR_1));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 struct pt_regs* FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2,
         void *VAR_3)
{
 struct pt_regs *VAR_4;

 VAR_4 = FUNC_0();

 FUNC_1(VAR_4, VAR_2);
 return VAR_0;
}

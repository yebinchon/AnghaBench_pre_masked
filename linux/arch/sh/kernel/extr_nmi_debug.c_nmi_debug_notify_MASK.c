
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct die_args {int regs; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_9,
  unsigned long VAR_10, void *VAR_11)
{
 struct die_args *VAR_12 = VAR_11;

 if (FUNC_0(VAR_10 != VAR_0))
  return VAR_6;

 if (VAR_8 & VAR_4)
  FUNC_3();
 if (VAR_8 & VAR_3)
  FUNC_2(VAR_12->regs);
 if (VAR_8 & VAR_1)
  FUNC_1(10);
 if (VAR_8 & VAR_2)
  return VAR_5;

 return VAR_7;
}

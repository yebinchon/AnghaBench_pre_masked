
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pt_regs {int dummy; } ;
struct TYPE_2__ {int (* handle_irq ) (struct pt_regs*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct pt_regs*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_4(unsigned int VAR_3, struct pt_regs *VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;
 int VAR_7;





 if (!FUNC_0(&VAR_1))
  return VAR_0;

 VAR_5 = FUNC_2();
 VAR_7 = VAR_2.handle_irq(VAR_4);
 VAR_6 = FUNC_2();

 FUNC_1(VAR_6 - VAR_5);

 return VAR_7;
}

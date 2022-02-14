
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_irq_intc {int domain; scalar_t__ reg_intpnd; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,struct pt_regs*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_4(struct s3c_irq_intc *VAR_0,
          struct pt_regs *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0->reg_intpnd);
 if (!VAR_3)
  return 0;


 if (!FUNC_2(VAR_0->domain))
  VAR_2 = 0;
 VAR_4 = FUNC_3(VAR_0->reg_intpnd + 4);





 if (!(VAR_3 & (1 << VAR_4)))
  VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_0->domain, VAR_2 + VAR_4, VAR_1);
 return 1;
}

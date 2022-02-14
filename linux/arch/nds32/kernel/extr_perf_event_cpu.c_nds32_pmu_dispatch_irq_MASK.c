
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nds32_pmu {int (* handle_irq ) (int,void*) ;} ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,void*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_0, void *VAR_1)
{
 struct nds32_pmu *VAR_2 = (struct nds32_pmu *)VAR_1;
 int VAR_3;
 u64 VAR_4, VAR_5;

 VAR_4 = FUNC_0();
 VAR_3 = VAR_2->handle_irq(VAR_0, VAR_1);
 VAR_5 = FUNC_0();

 FUNC_1(VAR_5 - VAR_4);
 return VAR_3;
}

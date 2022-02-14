
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct nds32_pmu {int (* stop ) (struct nds32_pmu*) ;} ;


 int FUNC_0 (struct nds32_pmu*) ;
 struct nds32_pmu* FUNC_1 (struct pmu*) ;

__attribute__((used)) static void FUNC_2(struct pmu *VAR_0)
{
 struct nds32_pmu *VAR_1 = FUNC_1(VAR_0);

 VAR_1->stop(VAR_1);
}

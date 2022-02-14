
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_engine {int cpu; TYPE_1__* dd; } ;
struct iowait {int dummy; } ;
struct hfi1_pportdata {int hfi1_wq; } ;
struct TYPE_2__ {struct hfi1_pportdata* pport; } ;


 int FUNC_0 (struct iowait*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(
 struct sdma_engine *VAR_0,
 struct iowait *VAR_1)
{
 struct hfi1_pportdata *VAR_2 = VAR_0->dd->pport;

 FUNC_0(VAR_1, VAR_2->hfi1_wq, VAR_0->cpu);
}

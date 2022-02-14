
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qib_pportdata {size_t hw_pidx; } ;
struct qib_devdata {struct qib_ctxtdata** rcd; struct qib_pportdata* pport; } ;
struct qib_ctxtdata {int pkeys; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct qib_devdata *VAR_0, u8 VAR_1, u16 *VAR_2)
{
 struct qib_pportdata *VAR_3 = VAR_0->pport + VAR_1 - 1;





 struct qib_ctxtdata *VAR_4 = VAR_0->rcd[VAR_3->hw_pidx];

 FUNC_0(VAR_2, VAR_4->pkeys, sizeof(VAR_4->pkeys));

 return 0;
}

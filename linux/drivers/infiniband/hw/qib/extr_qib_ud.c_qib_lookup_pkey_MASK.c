
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qib_pportdata {unsigned int hw_pidx; struct qib_devdata* dd; } ;
struct qib_ibport {int dummy; } ;
struct qib_devdata {TYPE_1__** rcd; } ;
struct TYPE_2__ {int* pkeys; } ;


 unsigned int FUNC_0 (int*) ;
 struct qib_pportdata* FUNC_1 (struct qib_ibport*) ;

__attribute__((used)) static unsigned FUNC_2(struct qib_ibport *VAR_0, u16 VAR_1)
{
 struct qib_pportdata *VAR_2 = FUNC_1(VAR_0);
 struct qib_devdata *VAR_3 = VAR_2->dd;
 unsigned VAR_4 = VAR_2->hw_pidx;
 unsigned VAR_5;

 VAR_1 &= 0x7fff;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3->rcd[VAR_4]->pkeys); ++VAR_5)
  if ((VAR_3->rcd[VAR_4]->pkeys[VAR_5] & 0x7fff) == VAR_1)
   return VAR_5;





 return 0;
}

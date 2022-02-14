
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_pportdata {int* pkeys; TYPE_1__* dd; int * pkeyrefs; } ;
struct qib_devdata {int dummy; } ;
struct qib_ctxtdata {int* pkeys; struct qib_pportdata* ppd; } ;
struct TYPE_2__ {int (* f_set_ib_cfg ) (struct qib_pportdata*,int ,int ) ;} ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct qib_pportdata*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct qib_ctxtdata *VAR_1,
          struct qib_devdata *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 struct qib_pportdata *VAR_6 = VAR_1->ppd;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->pkeys); VAR_3++) {
  if (!VAR_1->pkeys[VAR_3])
   continue;
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_6->pkeys); VAR_4++) {

   if ((VAR_6->pkeys[VAR_4] & 0x7fff) !=
       (VAR_1->pkeys[VAR_3] & 0x7fff))
    continue;
   if (FUNC_1(&VAR_6->pkeyrefs[VAR_4])) {
    VAR_6->pkeys[VAR_4] = 0;
    VAR_5++;
   }
   break;
  }
  VAR_1->pkeys[VAR_3] = 0;
 }
 if (VAR_5)
  (void) VAR_6->dd->f_set_ib_cfg(VAR_6, VAR_0, 0);
}

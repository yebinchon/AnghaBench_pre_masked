
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int sdma_userpending; } ;


 scalar_t__ FUNC_0 (struct qib_pportdata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qib_pportdata*) ;
 int FUNC_3 (struct qib_pportdata*,int *) ;

void FUNC_4(struct qib_pportdata *VAR_0)
{
 if (FUNC_0(VAR_0)) {
  FUNC_2(VAR_0);
  if (!FUNC_1(&VAR_0->sdma_userpending))
   FUNC_3(VAR_0, &VAR_0->sdma_userpending);
 }
}

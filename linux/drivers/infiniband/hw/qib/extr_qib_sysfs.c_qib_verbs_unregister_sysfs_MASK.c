
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_pportdata {int pport_kobj; int sl2vl_kobj; int pport_cc_kobj; scalar_t__ congestion_entries_shadow; } ;
struct qib_devdata {int num_pports; struct qib_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct qib_devdata *VAR_3)
{
 struct qib_pportdata *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_pports; VAR_5++) {
  VAR_4 = &VAR_3->pport[VAR_5];
  if (VAR_2 &&
   VAR_4->congestion_entries_shadow) {
   FUNC_1(&VAR_4->pport_cc_kobj,
    &VAR_0);
   FUNC_1(&VAR_4->pport_cc_kobj,
    &VAR_1);
   FUNC_0(&VAR_4->pport_cc_kobj);
  }
  FUNC_0(&VAR_4->sl2vl_kobj);
  FUNC_0(&VAR_4->pport_kobj);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_pportdata {int sc2vl_kobj; int sl2sc_kobj; int vl2mtu_kobj; int pport_cc_kobj; } ;
struct hfi1_devdata {int num_pports; struct hfi1_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct hfi1_devdata *VAR_2)
{
 struct hfi1_pportdata *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_pports; VAR_4++) {
  VAR_3 = &VAR_2->pport[VAR_4];

  FUNC_1(&VAR_3->pport_cc_kobj,
          &VAR_0);
  FUNC_1(&VAR_3->pport_cc_kobj,
          &VAR_1);
  FUNC_0(&VAR_3->pport_cc_kobj);
  FUNC_0(&VAR_3->vl2mtu_kobj);
  FUNC_0(&VAR_3->sl2sc_kobj);
  FUNC_0(&VAR_3->sc2vl_kobj);
 }
}

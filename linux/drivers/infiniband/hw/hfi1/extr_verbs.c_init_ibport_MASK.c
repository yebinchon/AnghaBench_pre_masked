
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port_cap_flags; int * qp; int * pma_counter_select; int port_cap3_flags; scalar_t__ sm_lid; int gid_prefix; int lock; int trap_timer; TYPE_1__* trap_lists; } ;
struct hfi1_ibport {int* sl_to_sc; int* sc_to_sl; TYPE_2__ rvp; } ;
struct hfi1_pportdata {struct hfi1_ibport ibport_data; } ;
struct TYPE_3__ {int list; } ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hfi1_pportdata *VAR_11)
{
 struct hfi1_ibport *VAR_12 = &VAR_11->ibport_data;
 size_t VAR_13 = FUNC_0(VAR_12->sl_to_sc);
 int VAR_14;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_12->sl_to_sc[VAR_14] = VAR_14;
  VAR_12->sc_to_sl[VAR_14] = VAR_14;
 }

 for (VAR_14 = 0; VAR_14 < VAR_9 ; VAR_14++)
  FUNC_1(&VAR_12->rvp.trap_lists[VAR_14].list);
 FUNC_4(&VAR_12->rvp.trap_timer, VAR_10, 0);

 FUNC_3(&VAR_12->rvp.lock);

 VAR_12->rvp.gid_prefix = VAR_0;
 VAR_12->rvp.sm_lid = 0;




 VAR_12->rvp.port_cap_flags = VAR_6 |
  VAR_7;
 VAR_12->rvp.port_cap3_flags = VAR_8;
 VAR_12->rvp.pma_counter_select[0] = VAR_3;
 VAR_12->rvp.pma_counter_select[1] = VAR_1;
 VAR_12->rvp.pma_counter_select[2] = VAR_4;
 VAR_12->rvp.pma_counter_select[3] = VAR_2;
 VAR_12->rvp.pma_counter_select[4] = VAR_5;

 FUNC_2(VAR_12->rvp.qp[0], ((void*)0));
 FUNC_2(VAR_12->rvp.qp[1], ((void*)0));
}

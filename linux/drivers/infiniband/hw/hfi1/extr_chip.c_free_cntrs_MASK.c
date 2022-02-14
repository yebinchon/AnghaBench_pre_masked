
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * rc_delayed_comp; int * rc_qacks; int * rc_acks; } ;
struct TYPE_5__ {TYPE_1__ rvp; } ;
struct hfi1_pportdata {TYPE_2__ ibport_data; int * scntrs; int * cntrs; } ;
struct TYPE_6__ {scalar_t__ function; } ;
struct hfi1_devdata {int num_pports; int * update_cntr_wq; int * cntrnames; int * scntrs; int * cntrs; int * portcntrnames; TYPE_3__ synth_stats_timer; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_0)
{
 struct hfi1_pportdata *VAR_1;
 int VAR_2;

 if (VAR_0->synth_stats_timer.function)
  FUNC_0(&VAR_0->synth_stats_timer);
 VAR_1 = (struct hfi1_pportdata *)(VAR_0 + 1);
 for (VAR_2 = 0; VAR_2 < VAR_0->num_pports; VAR_2++, VAR_1++) {
  FUNC_3(VAR_1->cntrs);
  FUNC_3(VAR_1->scntrs);
  FUNC_2(VAR_1->ibport_data.rvp.rc_acks);
  FUNC_2(VAR_1->ibport_data.rvp.rc_qacks);
  FUNC_2(VAR_1->ibport_data.rvp.rc_delayed_comp);
  VAR_1->cntrs = ((void*)0);
  VAR_1->scntrs = ((void*)0);
  VAR_1->ibport_data.rvp.rc_acks = ((void*)0);
  VAR_1->ibport_data.rvp.rc_qacks = ((void*)0);
  VAR_1->ibport_data.rvp.rc_delayed_comp = ((void*)0);
 }
 FUNC_3(VAR_0->portcntrnames);
 VAR_0->portcntrnames = ((void*)0);
 FUNC_3(VAR_0->cntrs);
 VAR_0->cntrs = ((void*)0);
 FUNC_3(VAR_0->scntrs);
 VAR_0->scntrs = ((void*)0);
 FUNC_3(VAR_0->cntrnames);
 VAR_0->cntrnames = ((void*)0);
 if (VAR_0->update_cntr_wq) {
  FUNC_1(VAR_0->update_cntr_wq);
  VAR_0->update_cntr_wq = ((void*)0);
 }
}

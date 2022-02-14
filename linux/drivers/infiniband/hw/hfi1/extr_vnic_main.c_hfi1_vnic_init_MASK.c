
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct hfi1_vnic_vport_info {int num_rx_q; struct hfi1_devdata* dd; } ;
struct TYPE_6__ {int num_ctxt; int num_vports; TYPE_2__** ctxt; } ;
struct hfi1_devdata {TYPE_1__ vnic; } ;
struct TYPE_7__ {int vnic_q_idx; } ;


 int FUNC_0 (struct hfi1_devdata*,TYPE_2__*) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct hfi1_devdata*,TYPE_2__**) ;
 int FUNC_5 (struct hfi1_vnic_vport_info*) ;
 int FUNC_6 (struct hfi1_devdata*) ;
 int FUNC_7 (struct hfi1_devdata*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct hfi1_vnic_vport_info *VAR_1)
{
 struct hfi1_devdata *VAR_2 = VAR_1->dd;
 int VAR_3, VAR_4 = 0;

 FUNC_8(&VAR_0);
 if (!VAR_2->vnic.num_vports) {
  VAR_4 = FUNC_7(VAR_2);
  if (VAR_4)
   goto txreq_fail;
 }

 for (VAR_3 = VAR_2->vnic.num_ctxt; VAR_3 < VAR_1->num_rx_q; VAR_3++) {
  VAR_4 = FUNC_4(VAR_2, &VAR_2->vnic.ctxt[VAR_3]);
  if (VAR_4)
   break;
  FUNC_2(VAR_2->vnic.ctxt[VAR_3]);
  VAR_2->vnic.ctxt[VAR_3]->vnic_q_idx = VAR_3;
 }

 if (VAR_3 < VAR_1->num_rx_q) {





  while (VAR_3-- > VAR_2->vnic.num_ctxt) {
   FUNC_0(VAR_2, VAR_2->vnic.ctxt[VAR_3]);
   FUNC_3(VAR_2->vnic.ctxt[VAR_3]);
   VAR_2->vnic.ctxt[VAR_3] = ((void*)0);
  }
  goto alloc_fail;
 }

 if (VAR_2->vnic.num_ctxt != VAR_3) {
  VAR_2->vnic.num_ctxt = VAR_3;
  FUNC_1(VAR_2);
 }

 VAR_2->vnic.num_vports++;
 FUNC_5(VAR_1);
alloc_fail:
 if (!VAR_2->vnic.num_vports)
  FUNC_6(VAR_2);
txreq_fail:
 FUNC_9(&VAR_0);
 return VAR_4;
}

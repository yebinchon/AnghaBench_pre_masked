
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfi1_vnic_vport_info {struct hfi1_devdata* dd; } ;
struct TYPE_2__ {scalar_t__ num_vports; int num_ctxt; int ** ctxt; } ;
struct hfi1_devdata {TYPE_1__ vnic; } ;


 int FUNC_0 (struct hfi1_devdata*,int *) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hfi1_devdata*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hfi1_vnic_vport_info *VAR_1)
{
 struct hfi1_devdata *VAR_2 = VAR_1->dd;
 int VAR_3;

 FUNC_4(&VAR_0);
 if (--VAR_2->vnic.num_vports == 0) {
  for (VAR_3 = 0; VAR_3 < VAR_2->vnic.num_ctxt; VAR_3++) {
   FUNC_0(VAR_2, VAR_2->vnic.ctxt[VAR_3]);
   FUNC_2(VAR_2->vnic.ctxt[VAR_3]);
   VAR_2->vnic.ctxt[VAR_3] = ((void*)0);
  }
  FUNC_1(VAR_2);
  VAR_2->vnic.num_ctxt = 0;
  FUNC_3(VAR_2);
 }
 FUNC_5(&VAR_0);
}

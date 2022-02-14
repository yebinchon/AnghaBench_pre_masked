
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usnic_vnic_res_chunk {TYPE_2__** res; } ;
struct usnic_ib_qp_grp {TYPE_3__* vf; } ;
struct TYPE_5__ {int rq_idx; } ;
struct TYPE_8__ {TYPE_1__ u; int type; } ;
struct usnic_filter_action {TYPE_4__ action; int vnic_idx; } ;
struct TYPE_7__ {int vnic; } ;
struct TYPE_6__ {int vnic_idx; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct usnic_vnic_res_chunk*) ;
 int FUNC_1 (struct usnic_vnic_res_chunk*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int) ;
 struct usnic_vnic_res_chunk* FUNC_3 (struct usnic_ib_qp_grp*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usnic_ib_qp_grp *VAR_3,
    struct usnic_filter_action *VAR_4)
{
 struct usnic_vnic_res_chunk *VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_2("Unable to get %s with err %ld\n",
   FUNC_5(VAR_2),
   FUNC_1(VAR_5));
  return FUNC_1(VAR_5);
 }

 VAR_4->vnic_idx = FUNC_4(VAR_3->vf->vnic);
 VAR_4->action.type = VAR_1;
 VAR_4->action.u.rq_idx = VAR_5->res[VAR_0]->vnic_idx;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usnic_vnic_res_chunk {int cnt; struct usnic_vnic_res** res; } ;
struct usnic_vnic_res {int vnic_idx; int type; } ;
struct TYPE_3__ {int qp_num; } ;
struct usnic_ib_qp_grp {struct usnic_vnic_res_chunk** res_chunk_list; TYPE_2__* vf; int owner_pid; int state; TYPE_1__ ibqp; } ;
typedef int ssize_t ;
struct TYPE_4__ {int vnic; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct usnic_ib_qp_grp *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 int VAR_6;
 char *VAR_7;
 struct usnic_vnic_res_chunk *VAR_8;
 struct usnic_vnic_res *VAR_9;

 VAR_6 = VAR_0;
 VAR_7 = VAR_2;

 VAR_5 = FUNC_1(VAR_7, VAR_6,
   "QPN: %d State: (%s) PID: %u VF Idx: %hu ",
   VAR_1->ibqp.qp_num,
   FUNC_2(VAR_1->state),
   VAR_1->owner_pid,
   FUNC_3(VAR_1->vf->vnic));
 FUNC_0(VAR_5, VAR_7, VAR_6);

 for (VAR_3 = 0; VAR_1->res_chunk_list[VAR_3]; VAR_3++) {
  VAR_8 = VAR_1->res_chunk_list[VAR_3];
  for (VAR_4 = 0; VAR_4 < VAR_8->cnt; VAR_4++) {
   VAR_9 = VAR_8->res[VAR_4];
   VAR_5 = FUNC_1(VAR_7, VAR_6, "%s[%d] ",
    FUNC_4(VAR_9->type),
    VAR_9->vnic_idx);
   FUNC_0(VAR_5, VAR_7, VAR_6);
  }
 }

 VAR_5 = FUNC_1(VAR_7, VAR_6, "\n");
 FUNC_0(VAR_5, VAR_7, VAR_6);

 return VAR_7 - VAR_2;
}

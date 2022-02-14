
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_recv_wr {struct ib_recv_wr* next; int num_sge; int sg_list; int wr_id; } ;
struct ib_qp {int dummy; } ;
struct i40iw_sge {int dummy; } ;
struct TYPE_4__ {int (* iw_post_receive ) (struct i40iw_qp_uk*,struct i40iw_post_rq_info*) ;} ;
struct i40iw_qp_uk {TYPE_2__ ops; } ;
struct TYPE_3__ {struct i40iw_qp_uk qp_uk; } ;
struct i40iw_qp {int lock; scalar_t__ flush_issued; TYPE_1__ sc_qp; } ;
struct i40iw_post_rq_info {struct i40iw_sge* sg_list; int wr_id; int num_sges; } ;
typedef int post_recv ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40iw_sge*,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct i40iw_post_rq_info*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct i40iw_qp_uk*,struct i40iw_post_rq_info*) ;

__attribute__((used)) static int FUNC_6(struct ib_qp *VAR_4, const struct ib_recv_wr *VAR_5,
      const struct ib_recv_wr **VAR_6)
{
 struct i40iw_qp *VAR_7;
 struct i40iw_qp_uk *VAR_8;
 struct i40iw_post_rq_info VAR_9;
 struct i40iw_sge VAR_10[VAR_3];
 enum i40iw_status_code VAR_11 = 0;
 unsigned long VAR_12;
 int VAR_13 = 0;

 VAR_7 = (struct i40iw_qp *)VAR_4;
 VAR_8 = &VAR_7->sc_qp.qp_uk;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 FUNC_3(&VAR_7->lock, VAR_12);

 if (VAR_7->flush_issued) {
  VAR_13 = -VAR_0;
  goto out;
 }

 while (VAR_5) {
  VAR_9.num_sges = VAR_5->num_sge;
  VAR_9.wr_id = VAR_5->wr_id;
  FUNC_0(VAR_10, VAR_5->sg_list, VAR_5->num_sge);
  VAR_9.sg_list = VAR_10;
  VAR_11 = VAR_8->ops.iw_post_receive(VAR_8, &VAR_9);
  if (VAR_11) {
   FUNC_1(" post_recv err %d\n", VAR_11);
   if (VAR_11 == VAR_2)
    VAR_13 = -VAR_1;
   else
    VAR_13 = -VAR_0;
   *VAR_6 = VAR_5;
   goto out;
  }
  VAR_5 = VAR_5->next;
 }
 out:
 FUNC_4(&VAR_7->lock, VAR_12);
 return VAR_13;
}

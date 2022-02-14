
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_zip_req_q {int req_lock; int req_bitmap; } ;
struct hisi_zip_req {int req_id; int src; int dst; } ;
struct hisi_zip_qp_ctx {TYPE_1__* qp; struct hisi_zip_req_q req_q; } ;
struct TYPE_2__ {scalar_t__ alg_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hisi_zip_req*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hisi_zip_qp_ctx *VAR_1,
    struct hisi_zip_req *VAR_2)
{
 struct hisi_zip_req_q *VAR_3 = &VAR_1->req_q;

 if (VAR_1->qp->alg_type == VAR_0)
  FUNC_1(VAR_2->dst);
 else
  FUNC_1(VAR_2->src);

 FUNC_3(&VAR_3->req_lock);
 FUNC_0(VAR_2->req_id, VAR_3->req_bitmap);
 FUNC_2(VAR_2, 0, sizeof(struct hisi_zip_req));
 FUNC_4(&VAR_3->req_lock);
}

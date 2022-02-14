
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct hisi_zip_req_q {int size; int req_lock; int req_bitmap; struct hisi_zip_req* q; } ;
struct hisi_zip_req {int req_id; size_t slen; size_t dlen; struct scatterlist* dst; struct scatterlist* src; struct acomp_req* req; } ;
struct hisi_zip_qp_ctx {TYPE_3__* qp; struct hisi_zip_req_q req_q; } ;
struct acomp_req {size_t dlen; size_t slen; struct scatterlist* dst; struct scatterlist* src; } ;
struct TYPE_6__ {TYPE_2__* qm; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 struct hisi_zip_req* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct scatterlist*,size_t,size_t,struct scatterlist**) ;
 int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct hisi_zip_req *FUNC_8(struct acomp_req *VAR_1,
      struct hisi_zip_qp_ctx *VAR_2,
      size_t VAR_3, bool VAR_4)
{
 struct hisi_zip_req_q *VAR_5 = &VAR_2->req_q;
 struct hisi_zip_req *VAR_6 = VAR_5->q;
 struct hisi_zip_req *VAR_7;
 struct scatterlist *VAR_8[2];
 struct scatterlist *VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12;







 if (VAR_4) {
  VAR_9 = VAR_1->dst;
  VAR_10 = VAR_1->dlen - VAR_3;
 } else {
  VAR_9 = VAR_1->src;
  VAR_10 = VAR_1->slen - VAR_3;
 }

 VAR_11 = FUNC_3(VAR_9, VAR_3, VAR_10, VAR_8);
 if (VAR_11)
  return FUNC_0(VAR_11);


 FUNC_4(VAR_8[0]);

 FUNC_6(&VAR_5->req_lock);

 VAR_12 = FUNC_2(VAR_5->req_bitmap, VAR_5->size);
 if (VAR_12 >= VAR_5->size) {
  FUNC_7(&VAR_5->req_lock);
  FUNC_1(&VAR_2->qp->qm->pdev->dev, "req cache is full!\n");
  FUNC_4(VAR_8[1]);
  return FUNC_0(-VAR_0);
 }
 FUNC_5(VAR_12, VAR_5->req_bitmap);

 VAR_7 = VAR_6 + VAR_12;
 VAR_7->req_id = VAR_12;
 VAR_7->req = VAR_1;
 if (VAR_4) {
  VAR_7->src = VAR_1->src;
  VAR_7->dst = VAR_8[1];
  VAR_7->slen = VAR_1->slen;
  VAR_7->dlen = VAR_1->dlen - VAR_3;
 } else {
  VAR_7->src = VAR_8[1];
  VAR_7->dst = VAR_1->dst;
  VAR_7->slen = VAR_1->slen - VAR_3;
  VAR_7->dlen = VAR_1->dlen;
 }

 FUNC_7(&VAR_5->req_lock);

 return VAR_7;
}

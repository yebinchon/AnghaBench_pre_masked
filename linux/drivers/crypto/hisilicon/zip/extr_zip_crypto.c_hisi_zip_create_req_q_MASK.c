
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_zip_req_q {void* req_bitmap; void* q; int size; int req_lock; } ;
struct hisi_zip_req {int dummy; } ;
struct hisi_zip_ctx {TYPE_1__* qp_ctx; } ;
struct TYPE_2__ {struct hisi_zip_req_q req_q; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 void* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct hisi_zip_ctx *VAR_6)
{
 struct hisi_zip_req_q *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_7 = &VAR_6->qp_ctx[VAR_8].req_q;
  VAR_7->size = VAR_3;

  VAR_7->req_bitmap = FUNC_1(FUNC_0(VAR_7->size),
         sizeof(long), VAR_1);
  if (!VAR_7->req_bitmap) {
   VAR_9 = -VAR_0;
   if (VAR_8 == 0)
    return VAR_9;

   goto err_free_loop0;
  }
  FUNC_3(&VAR_7->req_lock);

  VAR_7->q = FUNC_1(VAR_7->size, sizeof(struct hisi_zip_req),
       VAR_1);
  if (!VAR_7->q) {
   VAR_9 = -VAR_0;
   if (VAR_8 == 0)
    goto err_free_bitmap;
   else
    goto err_free_loop1;
  }
 }

 return 0;

err_free_loop1:
 FUNC_2(VAR_6->qp_ctx[VAR_5].req_q.req_bitmap);
err_free_loop0:
 FUNC_2(VAR_6->qp_ctx[VAR_4].req_q.q);
err_free_bitmap:
 FUNC_2(VAR_6->qp_ctx[VAR_4].req_q.req_bitmap);
 return VAR_9;
}

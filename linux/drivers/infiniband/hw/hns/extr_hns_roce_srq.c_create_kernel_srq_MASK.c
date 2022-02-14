
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_10__ {int page_shift; int npages; } ;
struct TYPE_9__ {int buf_size; int bitmap; TYPE_4__ idx_buf; int mtt; } ;
struct TYPE_8__ {int pd; int device; } ;
struct hns_roce_srq {TYPE_4__ buf; int mtt; TYPE_3__ idx_que; int wrid; scalar_t__ max; TYPE_2__ ibsrq; scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_7__ {int srqwqe_buf_pg_sz; int idx_buf_pg_sz; } ;
struct hns_roce_dev {int dev; TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (struct hns_roce_dev*,int,int,TYPE_4__*,int) ;
 int FUNC_2 (struct hns_roce_dev*,int,TYPE_4__*) ;
 int FUNC_3 (struct hns_roce_dev*,int *,TYPE_4__*) ;
 int FUNC_4 (int ,struct hns_roce_srq*,int) ;
 int FUNC_5 (struct hns_roce_dev*,int *) ;
 int FUNC_6 (struct hns_roce_dev*,int ,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int,int ) ;
 struct hns_roce_dev* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct hns_roce_srq *VAR_3, int VAR_4)
{
 struct hns_roce_dev *VAR_5 = FUNC_9(VAR_3->ibsrq.device);
 u32 VAR_6 = VAR_2 + VAR_5->caps.srqwqe_buf_pg_sz;
 int VAR_7;

 if (FUNC_1(VAR_5, VAR_4, (1 << VAR_6) * 2,
          &VAR_3->buf, VAR_6))
  return -VAR_0;

 VAR_3->head = 0;
 VAR_3->tail = VAR_3->max - 1;

 VAR_7 = FUNC_6(VAR_5, VAR_3->buf.npages, VAR_3->buf.page_shift,
    &VAR_3->mtt);
 if (VAR_7)
  goto err_kernel_buf;

 VAR_7 = FUNC_3(VAR_5, &VAR_3->mtt, &VAR_3->buf);
 if (VAR_7)
  goto err_kernel_srq_mtt;

 VAR_6 = VAR_2 + VAR_5->caps.idx_buf_pg_sz;
 VAR_7 = FUNC_4(VAR_3->ibsrq.pd, VAR_3, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_5->dev, "Create idx queue fail(%d)!\n", VAR_7);
  goto err_kernel_srq_mtt;
 }


 VAR_7 = FUNC_6(VAR_5, VAR_3->idx_que.idx_buf.npages,
    VAR_3->idx_que.idx_buf.page_shift,
    &VAR_3->idx_que.mtt);
 if (VAR_7)
  goto err_kernel_create_idx;


 VAR_7 = FUNC_3(VAR_5, &VAR_3->idx_que.mtt,
         &VAR_3->idx_que.idx_buf);
 if (VAR_7)
  goto err_kernel_idx_buf;

 VAR_3->wrid = FUNC_8(VAR_3->max, sizeof(u64), VAR_1);
 if (!VAR_3->wrid) {
  VAR_7 = -VAR_0;
  goto err_kernel_idx_buf;
 }

 return 0;

err_kernel_idx_buf:
 FUNC_5(VAR_5, &VAR_3->idx_que.mtt);

err_kernel_create_idx:
 FUNC_2(VAR_5, VAR_3->idx_que.buf_size,
     &VAR_3->idx_que.idx_buf);
 FUNC_7(VAR_3->idx_que.bitmap);

err_kernel_srq_mtt:
 FUNC_5(VAR_5, &VAR_3->mtt);

err_kernel_buf:
 FUNC_2(VAR_5, VAR_4, &VAR_3->buf);

 return VAR_7;
}

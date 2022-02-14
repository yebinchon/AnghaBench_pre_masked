
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ucmd ;
typedef int u32 ;
struct ib_udata {int dummy; } ;
struct TYPE_6__ {int buf_size; void* umem; int mtt; } ;
struct TYPE_4__ {int device; } ;
struct hns_roce_srq {void* umem; int mtt; TYPE_3__ idx_que; TYPE_1__ ibsrq; } ;
struct hns_roce_ib_create_srq {int que_addr; int buf_addr; } ;
struct TYPE_5__ {int srqwqe_buf_pg_sz; } ;
struct hns_roce_dev {int dev; TYPE_2__ caps; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct hns_roce_dev*,int *,void*) ;
 int FUNC_4 (struct hns_roce_dev*,int *) ;
 int FUNC_5 (struct hns_roce_dev*,int,int,int *) ;
 scalar_t__ FUNC_6 (struct hns_roce_ib_create_srq*,struct ib_udata*,int) ;
 void* FUNC_7 (struct ib_udata*,int ,int,int ,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 struct hns_roce_dev* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct hns_roce_srq *VAR_2, struct ib_udata *VAR_3,
      int VAR_4)
{
 struct hns_roce_dev *VAR_5 = FUNC_10(VAR_2->ibsrq.device);
 struct hns_roce_ib_create_srq VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (FUNC_6(&VAR_6, VAR_3, sizeof(VAR_6)))
  return -VAR_0;

 VAR_2->umem = FUNC_7(VAR_3, VAR_6.buf_addr, VAR_4, 0, 0);
 if (FUNC_0(VAR_2->umem))
  return FUNC_1(VAR_2->umem);

 VAR_8 = (FUNC_8(VAR_2->umem) +
  (1 << VAR_5->caps.srqwqe_buf_pg_sz) - 1) /
  (1 << VAR_5->caps.srqwqe_buf_pg_sz);
 VAR_7 = VAR_1 + VAR_5->caps.srqwqe_buf_pg_sz;
 VAR_9 = FUNC_5(VAR_5, VAR_8, VAR_7, &VAR_2->mtt);
 if (VAR_9)
  goto err_user_buf;

 VAR_9 = FUNC_3(VAR_5, &VAR_2->mtt, VAR_2->umem);
 if (VAR_9)
  goto err_user_srq_mtt;


 VAR_2->idx_que.umem = FUNC_7(VAR_3, VAR_6.que_addr,
     VAR_2->idx_que.buf_size, 0, 0);
 if (FUNC_0(VAR_2->idx_que.umem)) {
  FUNC_2(VAR_5->dev, "ib_umem_get error for index queue\n");
  VAR_9 = FUNC_1(VAR_2->idx_que.umem);
  goto err_user_srq_mtt;
 }

 VAR_9 = FUNC_5(VAR_5, FUNC_8(VAR_2->idx_que.umem),
    VAR_1, &VAR_2->idx_que.mtt);

 if (VAR_9) {
  FUNC_2(VAR_5->dev, "hns_roce_mtt_init error for idx que\n");
  goto err_user_idx_mtt;
 }

 VAR_9 = FUNC_3(VAR_5, &VAR_2->idx_que.mtt,
      VAR_2->idx_que.umem);
 if (VAR_9) {
  FUNC_2(VAR_5->dev,
   "hns_roce_ib_umem_write_mtt error for idx que\n");
  goto err_user_idx_buf;
 }

 return 0;

err_user_idx_buf:
 FUNC_4(VAR_5, &VAR_2->idx_que.mtt);

err_user_idx_mtt:
 FUNC_9(VAR_2->idx_que.umem);

err_user_srq_mtt:
 FUNC_4(VAR_5, &VAR_2->mtt);

err_user_buf:
 FUNC_9(VAR_2->umem);

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buf_size; int bitmap; int idx_buf; int mtt; } ;
struct hns_roce_srq {int buf; int mtt; TYPE_1__ idx_que; int wrid; } ;
struct hns_roce_dev {int dummy; } ;


 int FUNC_0 (struct hns_roce_dev*,int,int *) ;
 int FUNC_1 (struct hns_roce_dev*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hns_roce_dev *VAR_0,
          struct hns_roce_srq *VAR_1, int VAR_2)
{
 FUNC_3(VAR_1->wrid);
 FUNC_1(VAR_0, &VAR_1->idx_que.mtt);
 FUNC_0(VAR_0, VAR_1->idx_que.buf_size, &VAR_1->idx_que.idx_buf);
 FUNC_2(VAR_1->idx_que.bitmap);
 FUNC_1(VAR_0, &VAR_1->mtt);
 FUNC_0(VAR_0, VAR_2, &VAR_1->buf);
}

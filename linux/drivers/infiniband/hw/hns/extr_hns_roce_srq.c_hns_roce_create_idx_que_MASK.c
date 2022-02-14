
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_pd {int device; } ;
struct hns_roce_idx_que {int bitmap; int idx_buf; int buf_size; } ;
struct hns_roce_srq {struct hns_roce_idx_que idx_que; int max; } ;
struct hns_roce_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct hns_roce_dev*,int ,int,int *,int) ;
 struct hns_roce_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ib_pd *VAR_2, struct hns_roce_srq *VAR_3,
       u32 VAR_4)
{
 struct hns_roce_dev *VAR_5 = FUNC_3(VAR_2->device);
 struct hns_roce_idx_que *VAR_6 = &VAR_3->idx_que;

 VAR_6->bitmap = FUNC_1(VAR_3->max, VAR_1);
 if (!VAR_6->bitmap)
  return -VAR_0;

 VAR_6->buf_size = VAR_3->idx_que.buf_size;

 if (FUNC_2(VAR_5, VAR_6->buf_size, (1 << VAR_4) * 2,
          &VAR_6->idx_buf, VAR_4)) {
  FUNC_0(VAR_6->bitmap);
  return -VAR_0;
 }

 return 0;
}

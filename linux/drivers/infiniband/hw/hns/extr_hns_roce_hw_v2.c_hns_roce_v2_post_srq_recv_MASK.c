
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_srq {int device; } ;
struct ib_recv_wr {int num_sge; int wr_id; TYPE_1__* sg_list; struct ib_recv_wr* next; } ;
struct hns_roce_v2_wqe_data_seg {scalar_t__ addr; void* lkey; void* len; } ;
struct hns_roce_v2_db {void* parameter; void* byte_4; } ;
struct hns_roce_srq {int head; int max; int max_gs; int tail; int srqn; int lock; int db_reg_l; int * wrid; int idx_que; } ;
struct hns_roce_dev {int dummy; } ;
typedef int __le32 ;
struct TYPE_2__ {int length; int lkey; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int) ;
 void* FUNC_4 (struct hns_roce_srq*,int) ;
 int FUNC_5 (struct hns_roce_dev*,int *,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct hns_roce_dev* FUNC_9 (int ) ;
 struct hns_roce_srq* FUNC_10 (struct ib_srq*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct ib_srq *VAR_5,
         const struct ib_recv_wr *VAR_6,
         const struct ib_recv_wr **VAR_7)
{
 struct hns_roce_dev *VAR_8 = FUNC_9(VAR_5->device);
 struct hns_roce_srq *VAR_9 = FUNC_10(VAR_5);
 struct hns_roce_v2_wqe_data_seg *VAR_10;
 struct hns_roce_v2_db VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 void *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 FUNC_7(&VAR_9->lock, VAR_12);

 VAR_17 = VAR_9->head & (VAR_9->max - 1);

 for (VAR_16 = 0; VAR_6; ++VAR_16, VAR_6 = VAR_6->next) {
  if (FUNC_11(VAR_6->num_sge > VAR_9->max_gs)) {
   VAR_13 = -VAR_0;
   *VAR_7 = VAR_6;
   break;
  }

  if (FUNC_11(VAR_9->head == VAR_9->tail)) {
   VAR_13 = -VAR_1;
   *VAR_7 = VAR_6;
   break;
  }

  VAR_14 = FUNC_3(&VAR_9->idx_que, VAR_9->max);
  if (VAR_14 < 0) {
   VAR_13 = -VAR_1;
   *VAR_7 = VAR_6;
   break;
  }

  FUNC_2(&VAR_9->idx_que, VAR_17, VAR_14);
  VAR_15 = FUNC_4(VAR_9, VAR_14);
  VAR_10 = (struct hns_roce_v2_wqe_data_seg *)VAR_15;

  for (VAR_18 = 0; VAR_18 < VAR_6->num_sge; ++VAR_18) {
   VAR_10[VAR_18].len = FUNC_0(VAR_6->sg_list[VAR_18].length);
   VAR_10[VAR_18].lkey = FUNC_0(VAR_6->sg_list[VAR_18].lkey);
   VAR_10[VAR_18].addr = FUNC_1(VAR_6->sg_list[VAR_18].addr);
  }

  if (VAR_18 < VAR_9->max_gs) {
   VAR_10[VAR_18].len = 0;
   VAR_10[VAR_18].lkey = FUNC_0(0x100);
   VAR_10[VAR_18].addr = 0;
  }

  VAR_9->wrid[VAR_14] = VAR_6->wr_id;
  VAR_17 = (VAR_17 + 1) & (VAR_9->max - 1);
 }

 if (FUNC_6(VAR_16)) {
  VAR_9->head += VAR_16;





  FUNC_12();

  VAR_11.byte_4 =
   FUNC_0(VAR_2 << VAR_3 |
        (VAR_9->srqn & VAR_4));
  VAR_11.parameter = FUNC_0(VAR_9->head);

  FUNC_5(VAR_8, (__le32 *)&VAR_11, VAR_9->db_reg_l);

 }

 FUNC_8(&VAR_9->lock, VAR_12);

 return VAR_13;
}

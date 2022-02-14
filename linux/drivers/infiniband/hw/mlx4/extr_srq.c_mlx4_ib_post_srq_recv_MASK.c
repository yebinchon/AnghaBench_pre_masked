
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mlx4_wqe_srq_next_seg {int next_wqe_index; } ;
struct mlx4_wqe_data_seg {scalar_t__ addr; void* lkey; void* byte_count; } ;
struct TYPE_10__ {void** db; } ;
struct TYPE_9__ {int max_gs; } ;
struct mlx4_ib_srq {size_t head; size_t tail; int wqe_ctr; int lock; TYPE_5__ db; TYPE_4__ msrq; int * wrid; } ;
struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct ib_srq {int device; } ;
struct ib_recv_wr {int num_sge; TYPE_3__* sg_list; int wr_id; struct ib_recv_wr* next; } ;
struct TYPE_8__ {int length; int lkey; int addr; } ;
struct TYPE_7__ {TYPE_1__* persist; } ;
struct TYPE_6__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct mlx4_wqe_srq_next_seg* FUNC_3 (struct mlx4_ib_srq*,size_t) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct mlx4_ib_dev* FUNC_7 (int ) ;
 struct mlx4_ib_srq* FUNC_8 (struct ib_srq*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 () ;

int FUNC_11(struct ib_srq *VAR_5, const struct ib_recv_wr *VAR_6,
     const struct ib_recv_wr **VAR_7)
{
 struct mlx4_ib_srq *VAR_8 = FUNC_8(VAR_5);
 struct mlx4_wqe_srq_next_seg *VAR_9;
 struct mlx4_wqe_data_seg *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;
 struct mlx4_ib_dev *VAR_15 = FUNC_7(VAR_5->device);

 FUNC_5(&VAR_8->lock, VAR_11);
 if (VAR_15->dev->persist->state & VAR_3) {
  VAR_12 = -VAR_1;
  *VAR_7 = VAR_6;
  VAR_13 = 0;
  goto out;
 }

 for (VAR_13 = 0; VAR_6; ++VAR_13, VAR_6 = VAR_6->next) {
  if (FUNC_9(VAR_6->num_sge > VAR_8->msrq.max_gs)) {
   VAR_12 = -VAR_0;
   *VAR_7 = VAR_6;
   break;
  }

  if (FUNC_9(VAR_8->head == VAR_8->tail)) {
   VAR_12 = -VAR_2;
   *VAR_7 = VAR_6;
   break;
  }

  VAR_8->wrid[VAR_8->head] = VAR_6->wr_id;

  VAR_9 = FUNC_3(VAR_8, VAR_8->head);
  VAR_8->head = FUNC_0(VAR_9->next_wqe_index);
  VAR_10 = (struct mlx4_wqe_data_seg *) (VAR_9 + 1);

  for (VAR_14 = 0; VAR_14 < VAR_6->num_sge; ++VAR_14) {
   VAR_10[VAR_14].byte_count = FUNC_1(VAR_6->sg_list[VAR_14].length);
   VAR_10[VAR_14].lkey = FUNC_1(VAR_6->sg_list[VAR_14].lkey);
   VAR_10[VAR_14].addr = FUNC_2(VAR_6->sg_list[VAR_14].addr);
  }

  if (VAR_14 < VAR_8->msrq.max_gs) {
   VAR_10[VAR_14].byte_count = 0;
   VAR_10[VAR_14].lkey = FUNC_1(VAR_4);
   VAR_10[VAR_14].addr = 0;
  }
 }

 if (FUNC_4(VAR_13)) {
  VAR_8->wqe_ctr += VAR_13;





  FUNC_10();

  *VAR_8->db.db = FUNC_1(VAR_8->wqe_ctr);
 }
out:

 FUNC_6(&VAR_8->lock, VAR_11);

 return VAR_12;
}

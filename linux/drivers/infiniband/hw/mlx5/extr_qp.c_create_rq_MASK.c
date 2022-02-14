
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int dma; } ;
struct mlx5_ib_rwq {int rq_num_pas; int user_index; int create_flags; int log_rq_stride; int two_byte_shift_en; int single_stride_log_num_of_bytes; int log_num_strides; int log_rq_size; int rq_page_offset; int log_page_size; int wq_sig; int core_qp; int page_shift; int umem; TYPE_2__ db; } ;
struct TYPE_9__ {int raw_packet_caps; } ;
struct TYPE_10__ {TYPE_3__ attrs; } ;
struct mlx5_ib_dev {int mdev; TYPE_4__ ib_dev; } ;
struct ib_wq_init_attr {int create_flags; int cq; } ;
struct ib_pd {int device; } ;
typedef int __be64 ;
struct TYPE_7__ {int cqn; } ;
struct TYPE_12__ {TYPE_1__ mcq; } ;
struct TYPE_11__ {int uid; int pdn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (void*,void*,void*) ;
 scalar_t__ FUNC_1 (int ,struct ib_pd*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (void*,void*,struct ib_pd*,int) ;
 int FUNC_4 (void*,void*,int ,int ) ;
 int FUNC_5 (void*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct ib_pd* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 struct ib_pd* VAR_21 ;
 int VAR_22 ;
 struct ib_pd* VAR_23 ;
 int VAR_24 ;
 struct ib_pd* VAR_25 ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int,int ) ;
 struct ib_pd* VAR_26 ;
 struct ib_pd* VAR_27 ;
 struct ib_pd* VAR_28 ;
 struct ib_pd* VAR_29 ;
 struct ib_pd* VAR_30 ;
 struct ib_pd* VAR_31 ;
 int FUNC_8 (int ,void*,int,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct mlx5_ib_dev*,char*) ;
 int FUNC_11 (struct mlx5_ib_dev*,int ,int ,int *,int ) ;
 int FUNC_12 (struct mlx5_ib_dev*,char*,int) ;
 struct ib_pd* VAR_32 ;
 void* VAR_33 ;
 struct ib_pd* VAR_34 ;
 int FUNC_13 (struct mlx5_ib_dev*) ;
 struct ib_pd* VAR_35 ;
 TYPE_6__* FUNC_14 (int ) ;
 struct mlx5_ib_dev* FUNC_15 (int ) ;
 TYPE_5__* FUNC_16 (struct ib_pd*) ;
 struct ib_pd* VAR_36 ;
 struct ib_pd* VAR_37 ;
 struct ib_pd* VAR_38 ;
 struct ib_pd* VAR_39 ;
 struct ib_pd* VAR_40 ;
 struct ib_pd* VAR_41 ;
 struct ib_pd* VAR_42 ;

__attribute__((used)) static int FUNC_17(struct mlx5_ib_rwq *VAR_43, struct ib_pd *VAR_44,
        struct ib_wq_init_attr *VAR_45)
{
 struct mlx5_ib_dev *VAR_46;
 int VAR_47;
 __be64 *VAR_48;
 void *VAR_49;
 void *VAR_50;
 void *VAR_51;
 int VAR_52;
 int VAR_53;

 VAR_46 = FUNC_15(VAR_44->device);

 VAR_52 = FUNC_5(VAR_18) + sizeof(u64) * VAR_43->rq_num_pas;
 VAR_49 = FUNC_7(VAR_52, VAR_2);
 if (!VAR_49)
  return -VAR_0;

 FUNC_3(VAR_18, VAR_49, VAR_37, FUNC_16(VAR_44)->uid);
 VAR_50 = FUNC_0(VAR_18, VAR_49, VAR_19);
 FUNC_3(VAR_50, VAR_50, VAR_31,
   VAR_12);
 FUNC_3(VAR_50, VAR_50, VAR_38, VAR_43->user_index);
 FUNC_3(VAR_50, VAR_50, VAR_17, FUNC_14(VAR_45->cq)->mcq.cqn);
 FUNC_3(VAR_50, VAR_50, VAR_35, VAR_13);
 FUNC_3(VAR_50, VAR_50, VAR_25, 1);
 VAR_51 = FUNC_0(VAR_50, VAR_50, VAR_51);
 FUNC_3(VAR_51, VAR_51, VAR_42,
   VAR_43->create_flags & VAR_9 ?
   VAR_16 : VAR_15);
 if (VAR_45->create_flags & VAR_6) {
  if (!FUNC_2(VAR_46->mdev, VAR_22)) {
   FUNC_10(VAR_46, "Scatter end padding is not supported\n");
   VAR_53 = -VAR_1;
   goto out;
  } else {
   FUNC_3(VAR_51, VAR_51, VAR_23, VAR_14);
  }
 }
 FUNC_3(VAR_51, VAR_51, VAR_27, VAR_43->log_rq_stride);
 if (VAR_43->create_flags & VAR_9) {
  FUNC_3(VAR_51, VAR_51, VAR_36, VAR_43->two_byte_shift_en);
  FUNC_3(VAR_51, VAR_51, VAR_30,
    VAR_43->single_stride_log_num_of_bytes -
    VAR_10);
  FUNC_3(VAR_51, VAR_51, VAR_29, VAR_43->log_num_strides -
    VAR_11);
 }
 FUNC_3(VAR_51, VAR_51, VAR_28, VAR_43->log_rq_size);
 FUNC_3(VAR_51, VAR_51, VAR_44, FUNC_16(VAR_44)->pdn);
 FUNC_3(VAR_51, VAR_51, VAR_32, VAR_43->rq_page_offset);
 FUNC_3(VAR_51, VAR_51, VAR_26, VAR_43->log_page_size);
 FUNC_3(VAR_51, VAR_51, VAR_41, VAR_43->wq_sig);
 FUNC_4(VAR_51, VAR_51, VAR_20, VAR_43->db.dma);
 VAR_47 = FUNC_2(VAR_46->mdev, VAR_24);
 if (VAR_45->create_flags & VAR_4) {
  if (!(VAR_47 && FUNC_1(VAR_46->mdev, VAR_39))) {
   FUNC_10(VAR_46, "VLAN offloads are not supported\n");
   VAR_53 = -VAR_1;
   goto out;
  }
 } else {
  FUNC_3(VAR_50, VAR_50, VAR_40, 1);
 }
 if (VAR_45->create_flags & VAR_7) {
  if (!(VAR_47 && FUNC_1(VAR_46->mdev, VAR_34))) {
   FUNC_10(VAR_46, "Scatter FCS is not supported\n");
   VAR_53 = -VAR_1;
   goto out;
  }
  FUNC_3(VAR_50, VAR_50, VAR_34, 1);
 }
 if (VAR_45->create_flags & VAR_5) {
  if (!(VAR_46->ib_dev.attrs.raw_packet_caps &
        VAR_3)) {
   FUNC_10(VAR_46, "Delay drop is not supported\n");
   VAR_53 = -VAR_1;
   goto out;
  }
  FUNC_3(VAR_50, VAR_50, VAR_21, 1);
 }
 VAR_48 = (__be64 *)FUNC_0(VAR_51, VAR_51, VAR_33);
 FUNC_11(VAR_46, VAR_43->umem, VAR_43->page_shift, VAR_48, 0);
 VAR_53 = FUNC_8(VAR_46->mdev, VAR_49, VAR_52, &VAR_43->core_qp);
 if (!VAR_53 && VAR_45->create_flags & VAR_5) {
  VAR_53 = FUNC_13(VAR_46);
  if (VAR_53) {
   FUNC_12(VAR_46, "Failed to enable delay drop err=%d\n",
         VAR_53);
   FUNC_9(VAR_46->mdev, &VAR_43->core_qp);
  } else {
   VAR_43->create_flags |= VAR_8;
  }
 }
out:
 FUNC_6(VAR_49);
 return VAR_53;
}

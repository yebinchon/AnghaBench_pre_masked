
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx5_stride_block_entry {void* stride; void* va; void* key; void* bcount; } ;
struct mlx5_stride_block_ctrl_seg {void* num_entries; void* repeat_count; void* op; void* bcount_per_cycle; } ;
struct mlx5_klm {void* va; void* key; void* bcount; } ;
struct mlx5_ib_qp {int sq; } ;
struct TYPE_5__ {int lkey; } ;
struct mlx5_ib_mr {int data_length; scalar_t__ data_iova; int meta_length; scalar_t__ pi_iova; TYPE_1__ ibmr; scalar_t__ meta_ndescs; struct mlx5_ib_mr* pi_mr; } ;
struct mlx5_bsf {int dummy; } ;
struct TYPE_6__ {int pi_interval; } ;
struct TYPE_7__ {TYPE_2__ dif; } ;
struct TYPE_8__ {int sig_type; TYPE_3__ sig; } ;
struct ib_sig_attrs {TYPE_4__ mem; } ;
struct ib_send_wr {int dummy; } ;
struct ib_mr {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,void**,int,void**) ;
 int FUNC_5 (struct ib_mr*,struct ib_sig_attrs*,struct mlx5_bsf*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ) ;
 struct mlx5_ib_mr* FUNC_8 (struct ib_mr*) ;

__attribute__((used)) static int FUNC_9(const struct ib_send_wr *VAR_2,
    struct ib_mr *VAR_3,
    struct ib_sig_attrs *VAR_4,
    struct mlx5_ib_qp *VAR_5, void **VAR_6, int *VAR_7,
    void **VAR_8)
{
 struct mlx5_bsf *VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u64 VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u64 VAR_15 = 0;
 bool VAR_16 = 0;
 int VAR_17;
 int VAR_18;
 struct mlx5_ib_mr *VAR_19 = FUNC_8(VAR_3);
 struct mlx5_ib_mr *VAR_20 = VAR_19->pi_mr;

 VAR_10 = VAR_20->data_length;
 VAR_11 = VAR_20->ibmr.lkey;
 VAR_12 = VAR_20->data_iova;
 if (VAR_20->meta_ndescs) {
  VAR_13 = VAR_20->meta_length;
  VAR_14 = VAR_20->ibmr.lkey;
  VAR_15 = VAR_20->pi_iova;
  VAR_16 = 1;
 }

 if (!VAR_16 || (VAR_11 == VAR_14 && VAR_12 == VAR_15 &&
        VAR_10 == VAR_13)) {
  struct mlx5_klm *VAR_21 = *VAR_6;

  VAR_21->bcount = FUNC_2(VAR_10);
  VAR_21->key = FUNC_2(VAR_11);
  VAR_21->va = FUNC_3(VAR_12);
  VAR_18 = FUNC_0(sizeof(*VAR_21), 64);
 } else {
  struct mlx5_stride_block_ctrl_seg *VAR_22;
  struct mlx5_stride_block_entry *VAR_23;
  struct mlx5_stride_block_entry *VAR_24;
  u16 VAR_25 = VAR_4->mem.sig.dif.pi_interval;
  int VAR_26;

  VAR_22 = *VAR_6;
  VAR_23 = (void *)VAR_22 + sizeof(*VAR_22);
  VAR_24 = (void *)VAR_23 + sizeof(*VAR_23);

  VAR_26 = FUNC_7(VAR_4->mem.sig_type);
  if (!VAR_26) {
   FUNC_6("Bad block size given: %u\n", VAR_25);
   return -VAR_0;
  }
  VAR_22->bcount_per_cycle = FUNC_2(VAR_25 +
           VAR_26);
  VAR_22->op = FUNC_2(VAR_1);
  VAR_22->repeat_count = FUNC_2(VAR_10 / VAR_25);
  VAR_22->num_entries = FUNC_1(2);

  VAR_23->bcount = FUNC_1(VAR_25);
  VAR_23->key = FUNC_2(VAR_11);
  VAR_23->va = FUNC_3(VAR_12);
  VAR_23->stride = FUNC_1(VAR_25);

  VAR_24->bcount = FUNC_1(VAR_26);
  VAR_24->key = FUNC_2(VAR_14);
  VAR_24->va = FUNC_3(VAR_15);
  VAR_24->stride = FUNC_1(VAR_26);

  VAR_18 = FUNC_0(sizeof(*VAR_22) + sizeof(*VAR_23) +
     sizeof(*VAR_24), 64);
 }

 *VAR_6 += VAR_18;
 *VAR_7 += VAR_18 / 16;
 FUNC_4(&VAR_5->sq, VAR_6, *VAR_7, VAR_8);

 VAR_9 = *VAR_6;
 VAR_17 = FUNC_5(VAR_3, VAR_4, VAR_9, VAR_10);
 if (VAR_17)
  return -VAR_0;

 *VAR_6 += sizeof(*VAR_9);
 *VAR_7 += sizeof(*VAR_9) / 16;
 FUNC_4(&VAR_5->sq, VAR_6, *VAR_7, VAR_8);

 return 0;
}

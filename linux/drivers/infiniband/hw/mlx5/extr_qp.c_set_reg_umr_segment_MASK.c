
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_wqe_umr_ctrl_seg {int mkey_mask; int flags; int xlt_offset_47_16; void* xlt_offset; void* xlt_octowords; } ;
struct mlx5_umr_wr {int offset; int xlt_size; int ignore_free_state; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_send_wr {int send_flags; int num_sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mlx5_wqe_umr_ctrl_seg*,int ,int) ;
 int FUNC_10 (struct mlx5_ib_dev*,int ) ;
 struct mlx5_umr_wr* FUNC_11 (struct ib_send_wr const*) ;

__attribute__((used)) static int FUNC_12(struct mlx5_ib_dev *VAR_10,
          struct mlx5_wqe_umr_ctrl_seg *VAR_11,
          const struct ib_send_wr *VAR_12, int VAR_13)
{
 const struct mlx5_umr_wr *VAR_14 = FUNC_11(VAR_12);

 FUNC_9(VAR_11, 0, sizeof(*VAR_11));

 if (!VAR_14->ignore_free_state) {
  if (VAR_12->send_flags & VAR_2)

   VAR_11->flags = VAR_6;
  else

   VAR_11->flags = VAR_7;
 }

 VAR_11->xlt_octowords = FUNC_1(FUNC_8(VAR_14->xlt_size));
 if (VAR_12->send_flags & VAR_5) {
  u64 VAR_15 = FUNC_8(VAR_14->offset);

  VAR_11->xlt_offset = FUNC_1(VAR_15 & 0xffff);
  VAR_11->xlt_offset_47_16 = FUNC_2(VAR_15 >> 16);
  VAR_11->flags |= VAR_9;
 }
 if (VAR_12->send_flags & VAR_4)
  VAR_11->mkey_mask |= FUNC_7();
 if (VAR_12->send_flags & VAR_3) {
  VAR_11->mkey_mask |= FUNC_5(VAR_13);
  VAR_11->mkey_mask |= FUNC_6();
 }
 if (VAR_12->send_flags & VAR_1)
  VAR_11->mkey_mask |= FUNC_4();
 if (VAR_12->send_flags & VAR_0)
  VAR_11->mkey_mask |= FUNC_3();

 if (!VAR_12->num_sge)
  VAR_11->flags |= VAR_8;

 return FUNC_10(VAR_10, FUNC_0(VAR_11->mkey_mask));
}

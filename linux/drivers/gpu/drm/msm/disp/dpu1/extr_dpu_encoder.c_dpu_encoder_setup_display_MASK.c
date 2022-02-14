
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct msm_display_info {int intf_type; int num_of_h_tiles; int capabilities; int * h_tile_instance; } ;
struct dpu_kms {TYPE_2__* catalog; } ;
struct dpu_encoder_virt {int num_phys_encs; int enc_lock; struct dpu_encoder_phys** phys_encs; int idle_pc_supported; int enc_spinlock; int base; int * cur_master; } ;
struct dpu_encoder_phys {int underrun_cnt; int vsync_cnt; } ;
struct dpu_enc_phys_init_params {int intf_idx; int split_role; int * enc_spinlock; int * parent_ops; int * parent; struct dpu_kms* dpu_kms; } ;
typedef int phys_params ;
typedef enum dpu_intf_type { ____Placeholder_dpu_intf_type } dpu_intf_type ;
struct TYPE_4__ {TYPE_1__* caps; } ;
struct TYPE_3__ {int has_idle_pc; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct dpu_encoder_virt*,char*,...) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int VAR_8 ;
 int FUNC_6 (int,struct dpu_encoder_virt*,struct dpu_enc_phys_init_params*) ;
 int FUNC_7 (struct dpu_enc_phys_init_params*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct dpu_encoder_virt *VAR_9,
     struct dpu_kms *VAR_10,
     struct msm_display_info *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13 = 0;
 enum dpu_intf_type VAR_14;
 struct dpu_enc_phys_init_params VAR_15;

 if (!VAR_9 || !VAR_10) {
  FUNC_1("invalid arg(s), enc %d kms %d\n",
    VAR_9 != 0, VAR_10 != 0);
  return -VAR_0;
 }

 VAR_9->cur_master = ((void*)0);

 FUNC_7(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.dpu_kms = VAR_10;
 VAR_15.parent = &VAR_9->base;
 VAR_15.parent_ops = &VAR_8;
 VAR_15.enc_spinlock = &VAR_9->enc_spinlock;

 FUNC_0("\n");

 switch (VAR_11->intf_type) {
 case 128:
  VAR_14 = VAR_4;
  break;
 default:
  FUNC_2(VAR_9, "unsupported display interface type\n");
  return -VAR_0;
 }

 FUNC_3(VAR_11->num_of_h_tiles < 1);

 FUNC_0("dsi_info->num_of_h_tiles %d\n", VAR_11->num_of_h_tiles);

 if ((VAR_11->capabilities & VAR_6) ||
     (VAR_11->capabilities & VAR_7))
  VAR_9->idle_pc_supported =
    VAR_10->catalog->caps->has_idle_pc;

 FUNC_8(&VAR_9->enc_lock);
 for (VAR_13 = 0; VAR_13 < VAR_11->num_of_h_tiles && !VAR_12; VAR_13++) {





  u32 VAR_16 = VAR_11->h_tile_instance[VAR_13];

  if (VAR_11->num_of_h_tiles > 1) {
   if (VAR_13 == 0)
    VAR_15.split_role = VAR_1;
   else
    VAR_15.split_role = VAR_2;
  } else {
   VAR_15.split_role = VAR_3;
  }

  FUNC_0("h_tile_instance %d = %d, split_role %d\n",
    VAR_13, VAR_16, VAR_15.split_role);

  VAR_15.intf_idx = FUNC_5(VAR_10->catalog,
             VAR_14,
             VAR_16);
  if (VAR_15.intf_idx == VAR_5) {
   FUNC_2(VAR_9, "could not get intf: type %d, id %d\n",
        VAR_14, VAR_16);
   VAR_12 = -VAR_0;
  }

  if (!VAR_12) {
   VAR_12 = FUNC_6(VAR_11->capabilities,
             VAR_9,
             &VAR_15);
   if (VAR_12)
    FUNC_2(VAR_9, "failed to add phys encs\n");
  }
 }

 for (VAR_13 = 0; VAR_13 < VAR_9->num_phys_encs; VAR_13++) {
  struct dpu_encoder_phys *VAR_17 = VAR_9->phys_encs[VAR_13];

  if (VAR_17) {
   FUNC_4(&VAR_17->vsync_cnt, 0);
   FUNC_4(&VAR_17->underrun_cnt, 0);
  }
 }
 FUNC_9(&VAR_9->enc_lock);

 return VAR_12;
}

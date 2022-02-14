
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_bsf_inl {void* dif_app_bitmask_check; int dif_inc_ref_guard_check; int sig_type; int rp_inv_seed; int dif_reftag; void* dif_apptag; void* vld_refresh; } ;
struct TYPE_3__ {int app_tag; scalar_t__ bg_type; int apptag_check_mask; scalar_t__ ref_escape; scalar_t__ app_escape; scalar_t__ ref_remap; int ref_tag; } ;
struct TYPE_4__ {TYPE_1__ dif; } ;
struct ib_sig_domain {TYPE_2__ sig; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ib_sig_domain *VAR_9,
         struct mlx5_bsf_inl *VAR_10)
{

 VAR_10->vld_refresh = FUNC_0(VAR_4 |
           VAR_5);
 VAR_10->dif_apptag = FUNC_0(VAR_9->sig.dif.app_tag);
 VAR_10->dif_reftag = FUNC_1(VAR_9->sig.dif.ref_tag);

 VAR_10->rp_inv_seed = VAR_6;
 VAR_10->sig_type = VAR_9->sig.dif.bg_type == VAR_0 ?
   VAR_7 : VAR_8;

 if (VAR_9->sig.dif.ref_remap)
  VAR_10->dif_inc_ref_guard_check |= VAR_3;

 if (VAR_9->sig.dif.app_escape) {
  if (VAR_9->sig.dif.ref_escape)
   VAR_10->dif_inc_ref_guard_check |= VAR_1;
  else
   VAR_10->dif_inc_ref_guard_check |= VAR_2;
 }

 VAR_10->dif_app_bitmask_check =
  FUNC_0(VAR_9->sig.dif.apptag_check_mask);
}

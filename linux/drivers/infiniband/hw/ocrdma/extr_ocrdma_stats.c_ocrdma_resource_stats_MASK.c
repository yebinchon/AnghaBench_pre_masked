
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ocrdma_rsrc_stats {scalar_t__ mw; scalar_t__ phy_mr; scalar_t__ ondemand_qps; scalar_t__ prefetch_qps; scalar_t__ frmr; scalar_t__ embedded_nsmr; scalar_t__ r128G_to_higher_nsmr; scalar_t__ r64G_to_128G_nsmr; scalar_t__ r32G_to_64G_nsmr; scalar_t__ nsmr_count_4G_to_32G; scalar_t__ r1G_to_4G_nsmr; scalar_t__ r44M_to_1G_nsmr; scalar_t__ r2M_to_44M_nsmr; scalar_t__ r64K_to_2M_nsmr; scalar_t__ r64K_nsmr; scalar_t__ rbqs; scalar_t__ srqs; scalar_t__ ud_non_dpp_qps; scalar_t__ uc_non_dpp_qps; scalar_t__ rc_non_dpp_qps; scalar_t__ ud_dpp_qps; scalar_t__ uc_dpp_qps; scalar_t__ rc_dpp_qps; scalar_t__ non_dpp_pds; scalar_t__ dpp_pds; } ;
struct ocrdma_rdma_stats_resp {struct ocrdma_rsrc_stats th_rsrc_stats; struct ocrdma_rsrc_stats act_rsrc_stats; } ;
struct TYPE_2__ {char* debugfs_mem; scalar_t__ va; } ;
struct ocrdma_dev {TYPE_1__ stats_mem; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,char*,char*,int ) ;

__attribute__((used)) static char *FUNC_2(struct ocrdma_dev *VAR_1)
{
 char *VAR_2 = VAR_1->stats_mem.debugfs_mem, *VAR_3;
 struct ocrdma_rdma_stats_resp *VAR_4 =
   (struct ocrdma_rdma_stats_resp *)VAR_1->stats_mem.va;
 struct ocrdma_rsrc_stats *VAR_5 = &VAR_4->act_rsrc_stats;

 FUNC_0(VAR_2, 0, (VAR_0));

 VAR_3 = VAR_2;
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_dpp_pds",
    (u64)VAR_5->dpp_pds);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_non_dpp_pds",
    (u64)VAR_5->non_dpp_pds);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_rc_dpp_qps",
    (u64)VAR_5->rc_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_uc_dpp_qps",
    (u64)VAR_5->uc_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_ud_dpp_qps",
    (u64)VAR_5->ud_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_rc_non_dpp_qps",
    (u64)VAR_5->rc_non_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_uc_non_dpp_qps",
    (u64)VAR_5->uc_non_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_ud_non_dpp_qps",
    (u64)VAR_5->ud_non_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_srqs",
    (u64)VAR_5->srqs);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_rbqs",
    (u64)VAR_5->rbqs);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_64K_nsmr",
    (u64)VAR_5->r64K_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_64K_to_2M_nsmr",
    (u64)VAR_5->r64K_to_2M_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_2M_to_44M_nsmr",
    (u64)VAR_5->r2M_to_44M_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_44M_to_1G_nsmr",
    (u64)VAR_5->r44M_to_1G_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_1G_to_4G_nsmr",
    (u64)VAR_5->r1G_to_4G_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_nsmr_count_4G_to_32G",
    (u64)VAR_5->nsmr_count_4G_to_32G);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_32G_to_64G_nsmr",
    (u64)VAR_5->r32G_to_64G_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_64G_to_128G_nsmr",
    (u64)VAR_5->r64G_to_128G_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_128G_to_higher_nsmr",
    (u64)VAR_5->r128G_to_higher_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_embedded_nsmr",
    (u64)VAR_5->embedded_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_frmr",
    (u64)VAR_5->frmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_prefetch_qps",
    (u64)VAR_5->prefetch_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_ondemand_qps",
    (u64)VAR_5->ondemand_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_phy_mr",
    (u64)VAR_5->phy_mr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "active_mw",
    (u64)VAR_5->mw);


 VAR_5 = &VAR_4->th_rsrc_stats;

 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_dpp_pds",
    (u64)VAR_5->dpp_pds);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_non_dpp_pds",
    (u64)VAR_5->non_dpp_pds);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_rc_dpp_qps",
    (u64)VAR_5->rc_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_uc_dpp_qps",
    (u64)VAR_5->uc_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_ud_dpp_qps",
    (u64)VAR_5->ud_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_rc_non_dpp_qps",
    (u64)VAR_5->rc_non_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_uc_non_dpp_qps",
    (u64)VAR_5->uc_non_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_ud_non_dpp_qps",
    (u64)VAR_5->ud_non_dpp_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_srqs",
    (u64)VAR_5->srqs);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_rbqs",
    (u64)VAR_5->rbqs);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_64K_nsmr",
    (u64)VAR_5->r64K_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_64K_to_2M_nsmr",
    (u64)VAR_5->r64K_to_2M_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_2M_to_44M_nsmr",
    (u64)VAR_5->r2M_to_44M_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_44M_to_1G_nsmr",
    (u64)VAR_5->r44M_to_1G_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_1G_to_4G_nsmr",
    (u64)VAR_5->r1G_to_4G_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_nsmr_count_4G_to_32G",
    (u64)VAR_5->nsmr_count_4G_to_32G);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_32G_to_64G_nsmr",
    (u64)VAR_5->r32G_to_64G_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_64G_to_128G_nsmr",
    (u64)VAR_5->r64G_to_128G_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_128G_to_higher_nsmr",
    (u64)VAR_5->r128G_to_higher_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_embedded_nsmr",
    (u64)VAR_5->embedded_nsmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_frmr",
    (u64)VAR_5->frmr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_prefetch_qps",
    (u64)VAR_5->prefetch_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_ondemand_qps",
    (u64)VAR_5->ondemand_qps);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_phy_mr",
    (u64)VAR_5->phy_mr);
 VAR_3 += FUNC_1(VAR_2, VAR_3, "threshold_mw",
    (u64)VAR_5->mw);
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dram_timing {int phy_lpddr4_odt; int phy_lpddr4_dq_drv; int phy_lpddr4_ck_cs_drv; int phy_lpddr4_ca_drv; int lpddr4_ca_odt; int lpddr4_dq_odt; int lpddr4_drv; int lpddr4_odt_dis_freq; int phy_lpddr3_odt; int phy_lpddr3_dq_drv; int phy_lpddr3_ca_drv; int lpddr3_odt; int lpddr3_drv; int lpddr3_odt_dis_freq; int phy_ddr3_odt; int phy_ddr3_dq_drv; int phy_ddr3_ca_drv; int ddr3_odt; int ddr3_drv; int ddr3_odt_dis_freq; int phy_dll_dis_freq; int dram_dll_dis_freq; int auto_pd_dis_freq; int standby_idle; int srpd_lite_idle; int sr_mc_gate_idle; int sr_idle; int pd_idle; int ddr3_speed_bin; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct dram_timing *VAR_0,
         struct device_node *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_0(VAR_1, "rockchip,ddr3_speed_bin",
       &VAR_0->ddr3_speed_bin);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,pd_idle",
        &VAR_0->pd_idle);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,sr_idle",
        &VAR_0->sr_idle);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,sr_mc_gate_idle",
        &VAR_0->sr_mc_gate_idle);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,srpd_lite_idle",
        &VAR_0->srpd_lite_idle);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,standby_idle",
        &VAR_0->standby_idle);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,auto_pd_dis_freq",
        &VAR_0->auto_pd_dis_freq);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,dram_dll_dis_freq",
        &VAR_0->dram_dll_dis_freq);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_dll_dis_freq",
        &VAR_0->phy_dll_dis_freq);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,ddr3_odt_dis_freq",
        &VAR_0->ddr3_odt_dis_freq);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,ddr3_drv",
        &VAR_0->ddr3_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,ddr3_odt",
        &VAR_0->ddr3_odt);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_ddr3_ca_drv",
        &VAR_0->phy_ddr3_ca_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_ddr3_dq_drv",
        &VAR_0->phy_ddr3_dq_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_ddr3_odt",
        &VAR_0->phy_ddr3_odt);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,lpddr3_odt_dis_freq",
        &VAR_0->lpddr3_odt_dis_freq);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,lpddr3_drv",
        &VAR_0->lpddr3_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,lpddr3_odt",
        &VAR_0->lpddr3_odt);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_lpddr3_ca_drv",
        &VAR_0->phy_lpddr3_ca_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_lpddr3_dq_drv",
        &VAR_0->phy_lpddr3_dq_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_lpddr3_odt",
        &VAR_0->phy_lpddr3_odt);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,lpddr4_odt_dis_freq",
        &VAR_0->lpddr4_odt_dis_freq);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,lpddr4_drv",
        &VAR_0->lpddr4_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,lpddr4_dq_odt",
        &VAR_0->lpddr4_dq_odt);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,lpddr4_ca_odt",
        &VAR_0->lpddr4_ca_odt);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_lpddr4_ca_drv",
        &VAR_0->phy_lpddr4_ca_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_lpddr4_ck_cs_drv",
        &VAR_0->phy_lpddr4_ck_cs_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_lpddr4_dq_drv",
        &VAR_0->phy_lpddr4_dq_drv);
 VAR_2 |= FUNC_0(VAR_1, "rockchip,phy_lpddr4_odt",
        &VAR_0->phy_lpddr4_odt);

 return VAR_2;
}

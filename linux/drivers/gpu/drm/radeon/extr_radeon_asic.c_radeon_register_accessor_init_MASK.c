
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {scalar_t__ family; int pcie_reg_mask; int * pciep_wreg; int * pciep_rreg; int * mc_wreg; int * mc_rreg; int * pll_wreg; int * pll_rreg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

__attribute__((used)) static void FUNC_0(struct radeon_device *VAR_32)
{
 VAR_32->mc_rreg = &VAR_20;
 VAR_32->mc_wreg = &VAR_21;
 VAR_32->pll_rreg = &VAR_20;
 VAR_32->pll_wreg = &VAR_21;
 VAR_32->pciep_rreg = &VAR_20;
 VAR_32->pciep_wreg = &VAR_21;


 if (VAR_32->family < VAR_11) {
  VAR_32->pcie_reg_mask = 0xff;
 } else {
  VAR_32->pcie_reg_mask = 0x7ff;
 }

 if (VAR_32->family <= VAR_2) {
  VAR_32->pll_rreg = &VAR_14;
  VAR_32->pll_wreg = &VAR_15;
 }
 if (VAR_32->family >= VAR_1) {
  VAR_32->mc_rreg = &VAR_16;
  VAR_32->mc_wreg = &VAR_17;
 }
 if (VAR_32->family >= VAR_11) {
  VAR_32->mc_rreg = &VAR_30;
  VAR_32->mc_wreg = &VAR_31;
 }
 if (VAR_32->family == VAR_4 || VAR_32->family == VAR_5) {
  VAR_32->mc_rreg = &VAR_22;
  VAR_32->mc_wreg = &VAR_23;
 }
 if (VAR_32->family == VAR_7 || VAR_32->family == VAR_8) {
  VAR_32->mc_rreg = &VAR_26;
  VAR_32->mc_wreg = &VAR_27;
 }
 if (VAR_32->family == VAR_6) {
  VAR_32->mc_rreg = &VAR_24;
  VAR_32->mc_wreg = &VAR_25;
 }
 if (VAR_32->family == VAR_9 || VAR_32->family == VAR_10) {
  VAR_32->mc_rreg = &VAR_28;
  VAR_32->mc_wreg = &VAR_29;
 }

 if (VAR_32->family >= VAR_0) {
  VAR_32->pciep_rreg = &VAR_12;
  VAR_32->pciep_wreg = &VAR_13;
 } else if (VAR_32->family >= VAR_3) {
  VAR_32->pciep_rreg = &VAR_18;
  VAR_32->pciep_wreg = &VAR_19;
 }
}

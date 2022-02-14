
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vcn_ring6_7; int vcn_ring4_5; int vcn_ring2_3; int vcn_ring0_1; } ;
struct TYPE_4__ {int vce_ring6_7; int vce_ring4_5; int vce_ring2_3; int vce_ring0_1; int uvd_ring6_7; int uvd_ring4_5; int uvd_ring2_3; int uvd_ring0_1; } ;
struct TYPE_6__ {int max_assignment; int sdma_doorbell_range; int last_non_cp; int first_non_cp; TYPE_2__ vcn; TYPE_1__ uvd_vce; int ih; int * sdma_engine; int gfx_ring0; int userqueue_end; int userqueue_start; int mec_ring7; int mec_ring6; int mec_ring5; int mec_ring4; int mec_ring3; int mec_ring2; int mec_ring1; int mec_ring0; int kiq; } ;
struct amdgpu_device {TYPE_3__ doorbell_index; } ;


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
 int VAR_10 ;
 int VAR_11 ;
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

void FUNC_0(struct amdgpu_device *VAR_30)
{
 VAR_30->doorbell_index.kiq = VAR_3;
 VAR_30->doorbell_index.mec_ring0 = VAR_6;
 VAR_30->doorbell_index.mec_ring1 = VAR_7;
 VAR_30->doorbell_index.mec_ring2 = VAR_8;
 VAR_30->doorbell_index.mec_ring3 = VAR_9;
 VAR_30->doorbell_index.mec_ring4 = VAR_10;
 VAR_30->doorbell_index.mec_ring5 = VAR_11;
 VAR_30->doorbell_index.mec_ring6 = VAR_12;
 VAR_30->doorbell_index.mec_ring7 = VAR_13;
 VAR_30->doorbell_index.userqueue_start = VAR_15;
 VAR_30->doorbell_index.userqueue_end = VAR_14;
 VAR_30->doorbell_index.gfx_ring0 = VAR_1;
 VAR_30->doorbell_index.sdma_engine[0] = VAR_28;
 VAR_30->doorbell_index.sdma_engine[1] = VAR_29;
 VAR_30->doorbell_index.ih = VAR_2;
 VAR_30->doorbell_index.uvd_vce.uvd_ring0_1 = VAR_16;
 VAR_30->doorbell_index.uvd_vce.uvd_ring2_3 = VAR_17;
 VAR_30->doorbell_index.uvd_vce.uvd_ring4_5 = VAR_18;
 VAR_30->doorbell_index.uvd_vce.uvd_ring6_7 = VAR_19;
 VAR_30->doorbell_index.uvd_vce.vce_ring0_1 = VAR_20;
 VAR_30->doorbell_index.uvd_vce.vce_ring2_3 = VAR_21;
 VAR_30->doorbell_index.uvd_vce.vce_ring4_5 = VAR_22;
 VAR_30->doorbell_index.uvd_vce.vce_ring6_7 = VAR_23;
 VAR_30->doorbell_index.vcn.vcn_ring0_1 = VAR_24;
 VAR_30->doorbell_index.vcn.vcn_ring2_3 = VAR_25;
 VAR_30->doorbell_index.vcn.vcn_ring4_5 = VAR_26;
 VAR_30->doorbell_index.vcn.vcn_ring6_7 = VAR_27;

 VAR_30->doorbell_index.first_non_cp = VAR_0;
 VAR_30->doorbell_index.last_non_cp = VAR_4;


 VAR_30->doorbell_index.max_assignment = VAR_5 << 1;
 VAR_30->doorbell_index.sdma_doorbell_range = 4;
}

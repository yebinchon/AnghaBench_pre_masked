
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_assignment; int ih; int * sdma_engine; int gfx_ring0; int mec_ring7; int mec_ring6; int mec_ring5; int mec_ring4; int mec_ring3; int mec_ring2; int mec_ring1; int mec_ring0; int kiq; } ;
struct amdgpu_device {TYPE_1__ doorbell_index; } ;


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

void FUNC_0(struct amdgpu_device *VAR_14)
{
 VAR_14->doorbell_index.kiq = VAR_2;
 VAR_14->doorbell_index.mec_ring0 = VAR_4;
 VAR_14->doorbell_index.mec_ring1 = VAR_5;
 VAR_14->doorbell_index.mec_ring2 = VAR_6;
 VAR_14->doorbell_index.mec_ring3 = VAR_7;
 VAR_14->doorbell_index.mec_ring4 = VAR_8;
 VAR_14->doorbell_index.mec_ring5 = VAR_9;
 VAR_14->doorbell_index.mec_ring6 = VAR_10;
 VAR_14->doorbell_index.mec_ring7 = VAR_11;
 VAR_14->doorbell_index.gfx_ring0 = VAR_0;
 VAR_14->doorbell_index.sdma_engine[0] = VAR_12;
 VAR_14->doorbell_index.sdma_engine[1] = VAR_13;
 VAR_14->doorbell_index.ih = VAR_1;
 VAR_14->doorbell_index.max_assignment = VAR_3;
}

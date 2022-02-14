
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int checksum_key; struct amd_sriov_msg_pf2vf_info_header* p_vf2pf; struct amd_sriov_msg_pf2vf_info_header* p_pf2vf; } ;
struct TYPE_8__ {int gim_feature; TYPE_2__ fw_reserve; } ;
struct TYPE_6__ {int * va; } ;
struct amdgpu_device {TYPE_3__ virt; TYPE_1__ fw_vram_usage; } ;
struct amd_sriov_msg_pf2vf_info_header {int dummy; } ;
typedef int amdgim_vf2pf_info ;
struct TYPE_10__ {char* version; } ;
struct TYPE_9__ {int size; int version; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int,int*) ;
 int FUNC_1 (struct amdgpu_device*,int ,char**) ;
 int VAR_1 ;
 int FUNC_2 (struct amdgpu_device*,int,int) ;
 TYPE_5__* VAR_2 ;
 int FUNC_3 (struct amd_sriov_msg_pf2vf_info_header*,int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (char*,char*) ;

void FUNC_6(struct amdgpu_device *VAR_7)
{
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;
 uint32_t VAR_10;
 char *VAR_11;

 VAR_7->virt.fw_reserve.p_pf2vf = ((void*)0);
 VAR_7->virt.fw_reserve.p_vf2pf = ((void*)0);

 if (VAR_7->fw_vram_usage.va != ((void*)0)) {
  VAR_7->virt.fw_reserve.p_pf2vf =
   (struct amd_sriov_msg_pf2vf_info_header *)(
   VAR_7->fw_vram_usage.va + VAR_0);
  FUNC_0(VAR_7, VAR_6.size, &VAR_8);
  FUNC_0(VAR_7, VAR_9, &VAR_9);
  FUNC_0(VAR_7, VAR_5, &VAR_7->virt.gim_feature);


  if (VAR_8 > 0 && VAR_8 < 4096) {
   VAR_10 = FUNC_3(
    VAR_7->virt.fw_reserve.p_pf2vf, VAR_8,
    VAR_7->virt.fw_reserve.checksum_key, VAR_9);
   if (VAR_10 == VAR_9) {
    VAR_7->virt.fw_reserve.p_vf2pf =
     ((void *)VAR_7->virt.fw_reserve.p_pf2vf +
     VAR_8);
    FUNC_4((void *)VAR_7->virt.fw_reserve.p_vf2pf, 0,
     sizeof(amdgim_vf2pf_info));
    FUNC_2(VAR_7, VAR_6.version,
     VAR_1);
    FUNC_2(VAR_7, VAR_6.size,
     sizeof(amdgim_vf2pf_info));
    FUNC_1(VAR_7, VAR_4,
     &VAR_11);





     FUNC_5(VAR_11, "N/A");
    FUNC_2(VAR_7, VAR_3,
     0);
    FUNC_2(VAR_7, VAR_9,
     FUNC_3(
     VAR_7->virt.fw_reserve.p_vf2pf,
     VAR_8,
     VAR_7->virt.fw_reserve.checksum_key, 0));
   }
  }
 }
}

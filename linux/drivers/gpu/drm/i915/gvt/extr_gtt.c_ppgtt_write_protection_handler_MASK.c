
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_vgpu_ppgtt_spt {int dummy; } ;
struct intel_vgpu_page_track {struct intel_vgpu_ppgtt_spt* priv_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_vgpu_ppgtt_spt*,int ,void*,int) ;

__attribute__((used)) static int FUNC_1(
  struct intel_vgpu_page_track *VAR_1,
  u64 VAR_2, void *VAR_3, int VAR_4)
{
 struct intel_vgpu_ppgtt_spt *VAR_5 = VAR_1->priv_data;

 int VAR_6;

 if (VAR_4 != 4 && VAR_4 != 8)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;
 return VAR_6;
}

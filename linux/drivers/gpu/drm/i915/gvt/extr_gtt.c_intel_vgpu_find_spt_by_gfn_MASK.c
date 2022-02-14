
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_ppgtt_spt {int dummy; } ;
struct intel_vgpu_page_track {scalar_t__ handler; struct intel_vgpu_ppgtt_spt* priv_data; } ;
struct intel_vgpu {int dummy; } ;


 struct intel_vgpu_page_track* FUNC_0 (struct intel_vgpu*,unsigned long) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static struct intel_vgpu_ppgtt_spt *FUNC_1(
  struct intel_vgpu *VAR_1, unsigned long VAR_2)
{
 struct intel_vgpu_page_track *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 && VAR_3->handler == VAR_0)
  return VAR_3->priv_data;

 return ((void*)0);
}

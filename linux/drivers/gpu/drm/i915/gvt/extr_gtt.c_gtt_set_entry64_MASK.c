
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct intel_vgpu {TYPE_1__* gvt; } ;
struct intel_gvt_gtt_entry {int val64; } ;
struct intel_gvt_device_info {int gtt_entry_size; unsigned long gtt_entry_size_shift; } ;
struct TYPE_2__ {int dev_priv; struct intel_gvt_device_info device_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct intel_vgpu*,unsigned long,int *,int) ;
 int FUNC_2 (int ,unsigned long,int ) ;

__attribute__((used)) static inline int FUNC_3(void *VAR_1,
  struct intel_gvt_gtt_entry *VAR_2,
  unsigned long VAR_3, bool VAR_4, unsigned long VAR_5,
  struct intel_vgpu *VAR_6)
{
 const struct intel_gvt_device_info *VAR_7 = &VAR_6->gvt->device_info;
 int VAR_8;

 if (FUNC_0(VAR_7->gtt_entry_size != 8))
  return -VAR_0;

 if (VAR_4) {
  VAR_8 = FUNC_1(VAR_6, VAR_5 +
    (VAR_3 << VAR_7->gtt_entry_size_shift),
    &VAR_2->val64, 8);
  if (FUNC_0(VAR_8))
   return VAR_8;
 } else if (!VAR_1) {
  FUNC_2(VAR_6->gvt->dev_priv, VAR_3, VAR_2->val64);
 } else {
  *((u64 *)VAR_1 + VAR_3) = VAR_2->val64;
 }
 return 0;
}

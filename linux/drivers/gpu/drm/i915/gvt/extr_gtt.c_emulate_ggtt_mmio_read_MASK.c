
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_mm {int dummy; } ;
struct TYPE_4__ {struct intel_vgpu_mm* ggtt_mm; } ;
struct intel_vgpu {TYPE_1__* gvt; TYPE_2__ gtt; } ;
struct intel_gvt_gtt_entry {int val64; } ;
struct intel_gvt_device_info {unsigned int gtt_entry_size_shift; int gtt_entry_size; } ;
struct TYPE_3__ {struct intel_gvt_device_info device_info; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct intel_vgpu_mm*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct intel_vgpu*,unsigned long,int) ;
 int FUNC_3 (void*,void*,unsigned int) ;
 int FUNC_4 (void*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct intel_vgpu *VAR_2,
 unsigned int VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct intel_vgpu_mm *VAR_6 = VAR_2->gtt.ggtt_mm;
 const struct intel_gvt_device_info *VAR_7 = &VAR_2->gvt->device_info;
 unsigned long VAR_8 = VAR_3 >> VAR_7->gtt_entry_size_shift;
 unsigned long VAR_9;
 struct intel_gvt_gtt_entry VAR_10;

 if (VAR_5 != 4 && VAR_5 != 8)
  return -VAR_0;

 VAR_9 = VAR_8 << VAR_1;
 if (!FUNC_2(VAR_2,
        VAR_9, 1 << VAR_1)) {
  FUNC_1("read invalid ggtt at 0x%lx\n", VAR_9);
  FUNC_4(VAR_4, 0, VAR_5);
  return 0;
 }

 FUNC_0(VAR_6, &VAR_10, VAR_8);
 FUNC_3(VAR_4, (void *)&VAR_10.val64 + (VAR_3 & (VAR_7->gtt_entry_size - 1)),
   VAR_5);
 return 0;
}

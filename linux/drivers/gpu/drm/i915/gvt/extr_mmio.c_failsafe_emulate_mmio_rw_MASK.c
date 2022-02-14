
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {TYPE_3__* ggtt_mm; } ;
struct intel_vgpu {int vgpu_lock; TYPE_4__ gtt; struct intel_gvt* gvt; } ;
struct TYPE_5__ {scalar_t__ gtt_start_offset; } ;
struct intel_gvt {TYPE_1__ device_info; } ;
struct TYPE_6__ {void* virtual_ggtt; } ;
struct TYPE_7__ {TYPE_2__ ggtt_mm; } ;


 int FUNC_0 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;
 int FUNC_1 (struct intel_vgpu*,unsigned int,void*,unsigned int) ;
 unsigned int FUNC_2 (struct intel_vgpu*,int ) ;
 int FUNC_3 (void*,void*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct intel_gvt*,unsigned int) ;
 scalar_t__ FUNC_7 (struct intel_gvt*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct intel_vgpu *VAR_0, u64 VAR_1,
  void *VAR_2, unsigned int VAR_3, bool VAR_4)
{
 struct intel_gvt *VAR_5 = ((void*)0);
 void *VAR_6 = ((void*)0);
 unsigned int VAR_7 = 0;

 if (!VAR_0 || !VAR_2)
  return;

 VAR_5 = VAR_0->gvt;
 FUNC_4(&VAR_0->vgpu_lock);
 VAR_7 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_7(VAR_5, VAR_7)) {
  if (VAR_4)
   FUNC_0(VAR_0, VAR_7, VAR_2,
     VAR_3);
  else
   FUNC_1(VAR_0, VAR_7, VAR_2,
     VAR_3);
 } else if (FUNC_6(VAR_5, VAR_7)) {
  VAR_7 -= VAR_5->device_info.gtt_start_offset;
  VAR_6 = VAR_0->gtt.ggtt_mm->ggtt_mm.virtual_ggtt + VAR_7;
  if (VAR_4)
   FUNC_3(VAR_2, VAR_6, VAR_3);
  else
   FUNC_3(VAR_6, VAR_2, VAR_3);

 }
 FUNC_5(&VAR_0->vgpu_lock);
}

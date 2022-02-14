
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {TYPE_3__* resource; } ;
struct TYPE_5__ {int start; } ;
struct i915_ggtt {int mappable_end; TYPE_1__ gmadr; } ;
struct TYPE_8__ {struct pci_dev* pdev; } ;
struct drm_i915_private {struct i915_ggtt ggtt; TYPE_4__ drm; } ;
struct apertures_struct {TYPE_2__* ranges; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {int size; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct apertures_struct* FUNC_0 (int) ;
 int FUNC_1 (struct apertures_struct*,char*,int) ;
 int FUNC_2 (struct apertures_struct*) ;

__attribute__((used)) static int FUNC_3(struct drm_i915_private *VAR_3)
{
 struct apertures_struct *VAR_4;
 struct pci_dev *VAR_5 = VAR_3->drm.pdev;
 struct i915_ggtt *VAR_6 = &VAR_3->ggtt;
 bool VAR_7;
 int VAR_8;

 VAR_4 = FUNC_0(1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->ranges[0].base = VAR_6->gmadr.start;
 VAR_4->ranges[0].size = VAR_6->mappable_end;

 VAR_7 =
  VAR_5->resource[VAR_2].flags & VAR_1;

 VAR_8 = FUNC_1(VAR_4, "inteldrmfb", VAR_7);

 FUNC_2(VAR_4);

 return VAR_8;
}

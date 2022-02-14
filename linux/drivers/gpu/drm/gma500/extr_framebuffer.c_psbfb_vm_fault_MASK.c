
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long address; unsigned long pgoff; struct vm_area_struct* vma; } ;
struct vm_area_struct {int vm_page_prot; struct psb_framebuffer* vm_private_data; } ;
struct TYPE_2__ {int * obj; struct drm_device* dev; } ;
struct psb_framebuffer {TYPE_1__ base; } ;
struct gtt_range {unsigned long offset; } ;
struct drm_psb_private {scalar_t__ stolen_base; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;
 struct gtt_range* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,int ) ;

__attribute__((used)) static vm_fault_t FUNC_6(struct vm_fault *VAR_5)
{
 struct vm_area_struct *VAR_6 = VAR_5->vma;
 struct psb_framebuffer *VAR_7 = VAR_6->vm_private_data;
 struct drm_device *VAR_8 = VAR_7->base.dev;
 struct drm_psb_private *VAR_9 = VAR_8->dev_private;
 struct gtt_range *VAR_10 = FUNC_2(VAR_7->base.obj[0]);
 int VAR_11;
 int VAR_12;
 unsigned long VAR_13;
 vm_fault_t VAR_14 = VAR_4;
 unsigned long VAR_15;
 unsigned long VAR_16 = (unsigned long)VAR_9->stolen_base +
      VAR_10->offset;

 VAR_11 = FUNC_4(VAR_6);
 VAR_13 = VAR_5->address - (VAR_5->pgoff << VAR_0);

 VAR_6->vm_page_prot = FUNC_1(VAR_6->vm_page_prot);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_15 = (VAR_16 >> VAR_0);

  VAR_14 = FUNC_5(VAR_6, VAR_13,
    FUNC_0(VAR_15, VAR_2));
  if (FUNC_3(VAR_14 & VAR_3))
   break;
  VAR_13 += VAR_1;
  VAR_16 += VAR_1;
 }
 return VAR_14;
}

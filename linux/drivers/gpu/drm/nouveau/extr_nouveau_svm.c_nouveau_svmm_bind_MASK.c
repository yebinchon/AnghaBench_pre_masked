
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_end; } ;
struct nouveau_cli {int drm; } ;
struct mm_struct {int mmap_sem; } ;
struct drm_nouveau_svm_bind {unsigned long va_start; unsigned long va_end; int header; scalar_t__ result; scalar_t__ npages; scalar_t__ stride; scalar_t__ reserved1; scalar_t__ reserved0; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;

 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long,unsigned long) ;
 struct mm_struct* FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct mm_struct*) ;
 struct nouveau_cli* FUNC_5 (struct drm_file*) ;
 int FUNC_6 (int ,struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct drm_device *VAR_11, void *VAR_12,
    struct drm_file *VAR_13)
{
 struct nouveau_cli *VAR_14 = FUNC_5(VAR_13);
 struct drm_nouveau_svm_bind *VAR_15 = VAR_12;
 unsigned VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19, VAR_20, VAR_21;
 struct mm_struct *VAR_22;

 VAR_15->va_start &= VAR_8;
 VAR_15->va_end &= VAR_8;


 if (VAR_15->reserved0 || VAR_15->reserved1)
  return -VAR_0;
 if (VAR_15->header & (~VAR_7))
  return -VAR_0;
 if (VAR_15->va_start >= VAR_15->va_end)
  return -VAR_0;
 if (!VAR_15->npages)
  return -VAR_0;

 VAR_17 = VAR_15->header >> VAR_2;
 VAR_17 &= VAR_1;
 switch (VAR_17) {
 case 129:
  break;
 default:
  return -VAR_0;
 }

 VAR_18 = VAR_15->header >> VAR_4;
 VAR_18 &= VAR_3;


 VAR_16 = VAR_15->header >> VAR_6;
 VAR_16 &= VAR_5;
 switch (VAR_16) {
 case 128:
  break;
 default:
  return -VAR_0;
 }






 if (VAR_15->stride)
  return -VAR_0;

 VAR_21 = ((unsigned long)VAR_15->npages) << VAR_9;
 if ((VAR_15->va_start + VAR_21) <= VAR_15->va_start)
  return -VAR_0;
 if ((VAR_15->va_start + VAR_21) > VAR_15->va_end)
  return -VAR_0;







 VAR_22 = FUNC_2(VAR_10);
 FUNC_0(&VAR_22->mmap_sem);

 for (VAR_19 = VAR_15->va_start, VAR_20 = VAR_15->va_start + VAR_21; VAR_19 < VAR_20;) {
  struct vm_area_struct *VAR_23;
  unsigned long VAR_24;

  VAR_23 = FUNC_1(VAR_22, VAR_19, VAR_20);
  if (!VAR_23)
   break;

  VAR_24 = FUNC_3(VAR_23->vm_end, VAR_20);

  FUNC_6(VAR_14->drm, VAR_23, VAR_19, VAR_24);
  VAR_19 = VAR_24;
 }






 VAR_15->result = 0;

 FUNC_7(&VAR_22->mmap_sem);
 FUNC_4(VAR_22);

 return 0;
}

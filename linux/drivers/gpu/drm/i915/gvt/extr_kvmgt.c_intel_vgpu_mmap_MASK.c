
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vm_area_struct {unsigned int vm_pgoff; scalar_t__ vm_end; scalar_t__ vm_start; int vm_flags; int vm_page_prot; } ;
struct mdev_device {int dummy; } ;
struct intel_vgpu {int gvt; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct intel_vgpu*,unsigned long) ;
 struct intel_vgpu* FUNC_2 (struct mdev_device*) ;
 int FUNC_3 (struct vm_area_struct*,scalar_t__,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_4 (struct intel_vgpu*) ;
 unsigned long FUNC_5 (struct intel_vgpu*) ;

__attribute__((used)) static int FUNC_6(struct mdev_device *VAR_6, struct vm_area_struct *VAR_7)
{
 unsigned int VAR_8;
 u64 VAR_9;
 unsigned long VAR_10, VAR_11, VAR_12;
 pgprot_t VAR_13;
 struct intel_vgpu *VAR_14 = FUNC_2(VAR_6);

 VAR_8 = VAR_7->vm_pgoff >> (VAR_3 - VAR_1);
 if (VAR_8 >= VAR_4)
  return -VAR_0;

 if (VAR_7->vm_end < VAR_7->vm_start)
  return -VAR_0;
 if ((VAR_7->vm_flags & VAR_5) == 0)
  return -VAR_0;
 if (VAR_8 != VAR_2)
  return -VAR_0;

 VAR_13 = VAR_7->vm_page_prot;
 VAR_9 = VAR_7->vm_start;
 VAR_10 = VAR_7->vm_end - VAR_7->vm_start;
 VAR_11 = VAR_7->vm_pgoff &
  ((1U << (VAR_3 - VAR_1)) - 1);
 VAR_12 = VAR_11 << VAR_1;

 if (!FUNC_1(VAR_14, VAR_12))
  return -VAR_0;
 if (VAR_12 + VAR_10 >
     FUNC_4(VAR_14) + FUNC_5(VAR_14))
  return -VAR_0;

 VAR_11 = (FUNC_0(VAR_14->gvt) >> VAR_1) + VAR_11;

 return FUNC_3(VAR_7, VAR_9, VAR_11, VAR_10, VAR_13);
}

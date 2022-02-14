
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vm_area_struct {int vm_end; int vm_start; int vm_flags; int vm_pgoff; int vm_page_prot; } ;
struct platform_device {int dev; } ;
struct file {struct platform_device* private_data; } ;
struct dfl_feature_platform_data {int dummy; } ;
struct dfl_afu_mmio_region {int flags; int phys; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dfl_feature_platform_data*,int,int,struct dfl_afu_mmio_region*) ;
 struct dfl_feature_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 struct platform_device *VAR_11 = VAR_9->private_data;
 struct dfl_feature_platform_data *VAR_12;
 u64 VAR_13 = VAR_10->vm_end - VAR_10->vm_start;
 struct dfl_afu_mmio_region VAR_14;
 u64 VAR_15;
 int VAR_16;

 if (!(VAR_10->vm_flags & VAR_7))
  return -VAR_3;

 VAR_12 = FUNC_1(&VAR_11->dev);

 VAR_15 = VAR_10->vm_pgoff << VAR_5;
 VAR_16 = FUNC_0(VAR_12, VAR_15, VAR_13, &VAR_14);
 if (VAR_16)
  return VAR_16;

 if (!(VAR_14.flags & VAR_0))
  return -VAR_3;

 if ((VAR_10->vm_flags & VAR_6) && !(VAR_14.flags & VAR_1))
  return -VAR_4;

 if ((VAR_10->vm_flags & VAR_8) &&
     !(VAR_14.flags & VAR_2))
  return -VAR_4;

 VAR_10->vm_page_prot = FUNC_2(VAR_10->vm_page_prot);

 return FUNC_3(VAR_10, VAR_10->vm_start,
   (VAR_14.phys + (VAR_15 - VAR_14.offset)) >> VAR_5,
   VAR_13, VAR_10->vm_page_prot);
}

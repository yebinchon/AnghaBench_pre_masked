
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; } ;
struct device {int dummy; } ;
struct dev_dax {int dax_dev; struct device dev; struct dax_region* region; } ;
struct dax_region {int align; int pfn_flags; } ;
struct TYPE_2__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ,char const*,...) ;
 int FUNC_2 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_3(struct dev_dax *VAR_7, struct vm_area_struct *VAR_8,
  const char *VAR_9)
{
 struct dax_region *VAR_10 = VAR_7->region;
 struct device *VAR_11 = &VAR_7->dev;
 unsigned long VAR_12;

 if (!FUNC_0(VAR_7->dax_dev))
  return -VAR_1;


 if ((VAR_8->vm_flags & VAR_5) != VAR_5) {
  FUNC_1(VAR_11,
    "%s: %s: fail, attempted private mapping\n",
    VAR_6->comm, VAR_9);
  return -VAR_0;
 }

 VAR_12 = VAR_10->align - 1;
 if (VAR_8->vm_start & VAR_12 || VAR_8->vm_end & VAR_12) {
  FUNC_1(VAR_11,
    "%s: %s: fail, unaligned vma (%#lx - %#lx, %#lx)\n",
    VAR_6->comm, VAR_9, VAR_8->vm_start, VAR_8->vm_end,
    VAR_12);
  return -VAR_0;
 }

 if ((VAR_10->pfn_flags & (VAR_2|VAR_3)) == VAR_2
   && (VAR_8->vm_flags & VAR_4) == 0) {
  FUNC_1(VAR_11,
    "%s: %s: fail, dax range requires MADV_DONTFORK\n",
    VAR_6->comm, VAR_9);
  return -VAR_0;
 }

 if (!FUNC_2(VAR_8)) {
  FUNC_1(VAR_11,
    "%s: %s: fail, vma is not DAX capable\n",
    VAR_6->comm, VAR_9);
  return -VAR_0;
 }

 return 0;
}

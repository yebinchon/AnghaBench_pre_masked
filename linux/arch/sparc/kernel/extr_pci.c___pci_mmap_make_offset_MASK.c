
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; } ;
struct resource {int flags; unsigned long end; unsigned long start; } ;
struct pci_dev {int class; struct resource* resource; } ;
typedef unsigned long resource_size_t ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pci_dev*,struct vm_area_struct*,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_10,
      struct vm_area_struct *VAR_11,
      enum pci_mmap_state VAR_12)
{
 unsigned long VAR_13, VAR_14;
 int VAR_15, VAR_16;





 VAR_16 = FUNC_0(VAR_10, VAR_11, VAR_12);
 if (VAR_16)
  return VAR_16;




 if ((VAR_10->class >> 8) == VAR_6)
  return VAR_16;




 VAR_13 = VAR_11->vm_pgoff << VAR_4;
 VAR_14 = VAR_11->vm_end - VAR_11->vm_start;

 for (VAR_15 = 0; VAR_15 <= VAR_7; VAR_15++) {
  struct resource *VAR_17 = &VAR_10->resource[VAR_15];
  resource_size_t VAR_18;


  if (!VAR_17->flags)
   continue;


  if (VAR_15 == VAR_7) {
   if (VAR_12 != VAR_9)
    continue;
  } else {
   if ((VAR_12 == VAR_8 &&
        (VAR_17->flags & VAR_1) == 0) ||
       (VAR_12 == VAR_9 &&
        (VAR_17->flags & VAR_2) == 0))
    continue;
  }






  VAR_18 = (VAR_17->end + VAR_5) & VAR_3;

  if ((VAR_17->start <= VAR_13) &&
      (VAR_13 + VAR_14) <= VAR_18)
   break;
 }

 if (VAR_15 > VAR_7)
  return -VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_special_mapping {int dummy; } ;
struct vm_fault {unsigned long pgoff; struct page* page; } ;
struct vm_area_struct {TYPE_2__* vm_mm; } ;
struct page {int dummy; } ;
struct TYPE_3__ {scalar_t__ compat_mm; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct page** VAR_1 ;
 unsigned long VAR_2 ;
 struct page** VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static vm_fault_t FUNC_1(const struct vm_special_mapping *VAR_5,
        struct vm_area_struct *VAR_6, struct vm_fault *VAR_7)
{
 struct page **VAR_8;
 unsigned long VAR_9;

 VAR_8 = VAR_3;
 VAR_9 = VAR_4;







 if (VAR_7->pgoff >= VAR_9)
  return VAR_0;

 VAR_7->page = VAR_8[VAR_7->pgoff];
 FUNC_0(VAR_7->page);
 return 0;
}

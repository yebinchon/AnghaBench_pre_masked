
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {struct page* page; TYPE_1__* vma; } ;
struct page {int dummy; } ;
struct cs_char {int mmap_base; } ;
struct TYPE_2__ {struct cs_char* vm_private_data; } ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;

__attribute__((used)) static vm_fault_t FUNC_2(struct vm_fault *VAR_0)
{
 struct cs_char *VAR_1 = VAR_0->vma->vm_private_data;
 struct page *VAR_2;

 VAR_2 = FUNC_1(VAR_1->mmap_base);
 FUNC_0(VAR_2);
 VAR_0->page = VAR_2;

 return 0;
}

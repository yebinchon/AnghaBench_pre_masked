
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct flush_cache_page_args {unsigned long addr; unsigned long pfn; struct vm_area_struct* vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct flush_cache_page_args*) ;

__attribute__((used)) static void FUNC_1(struct vm_area_struct *VAR_2,
 unsigned long VAR_3, unsigned long VAR_4)
{
 struct flush_cache_page_args VAR_5;

 VAR_5.vma = VAR_2;
 VAR_5.addr = VAR_3;
 VAR_5.pfn = VAR_4;

 FUNC_0(VAR_0, VAR_1, &VAR_5);
}

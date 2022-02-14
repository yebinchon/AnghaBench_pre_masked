
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {unsigned long mmap_compat_legacy_base; unsigned long mmap_compat_base; unsigned long mmap_legacy_base; unsigned long mmap_base; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;

unsigned long FUNC_1(int VAR_1)
{
 struct mm_struct *VAR_2 = VAR_0->mm;







 return VAR_1 ? VAR_2->mmap_legacy_base : VAR_2->mmap_base;
}

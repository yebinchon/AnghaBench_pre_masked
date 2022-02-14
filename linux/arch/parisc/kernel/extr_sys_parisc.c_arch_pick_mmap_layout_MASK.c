
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int dummy; } ;
struct mm_struct {int get_unmapped_area; int mmap_legacy_base; int mmap_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct rlimit*) ;

void FUNC_3(struct mm_struct *VAR_2, struct rlimit *VAR_3)
{
 VAR_2->mmap_legacy_base = FUNC_1();
 VAR_2->mmap_base = FUNC_2(VAR_3);

 if (FUNC_0()) {
  VAR_2->mmap_base = VAR_2->mmap_legacy_base;
  VAR_2->get_unmapped_area = VAR_0;
 } else {
  VAR_2->get_unmapped_area = VAR_1;
 }
}

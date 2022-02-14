
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int dummy; } ;
struct mm_struct {int mmap_compat_legacy_base; int mmap_compat_base; int mmap_legacy_base; int mmap_base; int get_unmapped_area; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int ,struct rlimit*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void FUNC_5(struct mm_struct *VAR_4, struct rlimit *VAR_5)
{
 if (FUNC_2())
  VAR_4->get_unmapped_area = VAR_0;
 else
  VAR_4->get_unmapped_area = VAR_1;

 FUNC_0(&VAR_4->mmap_base, &VAR_4->mmap_legacy_base,
   FUNC_1(VAR_3), FUNC_4(0),
   VAR_5);
}

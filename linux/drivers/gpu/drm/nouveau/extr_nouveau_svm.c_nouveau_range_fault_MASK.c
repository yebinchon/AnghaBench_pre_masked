
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_svmm {TYPE_1__* mm; int mirror; } ;
struct hmm_range {unsigned long pfn_flags_mask; scalar_t__ default_flags; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (struct hmm_range*,int ) ;
 long FUNC_1 (struct hmm_range*,int *) ;
 int FUNC_2 (struct hmm_range*) ;
 int FUNC_3 (struct hmm_range*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_svmm *VAR_2, struct hmm_range *VAR_3)
{
 long VAR_4;

 VAR_3->default_flags = 0;
 VAR_3->pfn_flags_mask = -1UL;

 VAR_4 = FUNC_1(VAR_3, &VAR_2->mirror);
 if (VAR_4) {
  FUNC_4(&VAR_2->mm->mmap_sem);
  return (int)VAR_4;
 }

 if (!FUNC_3(VAR_3, VAR_1)) {
  FUNC_4(&VAR_2->mm->mmap_sem);
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_3, 0);
 if (VAR_4 <= 0) {
  if (VAR_4 == 0)
   VAR_4 = -VAR_0;
  FUNC_4(&VAR_2->mm->mmap_sem);
  FUNC_2(VAR_3);
  return VAR_4;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct page {int dummy; } ;
struct nouveau_drm {int dummy; } ;
struct hmm_range {unsigned long end; unsigned long start; int* pfns; int* flags; unsigned long pfn_shift; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int,char*) ;
 struct page* FUNC_1 (struct hmm_range*,int) ;
 int FUNC_2 (struct nouveau_drm*,struct page*) ;
 unsigned long FUNC_3 (struct page*) ;

void
FUNC_4(struct nouveau_drm *VAR_2,
    struct hmm_range *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_5 = (VAR_3->end - VAR_3->start) >> VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  struct page *VAR_6;
  uint64_t VAR_7;

  VAR_6 = FUNC_1(VAR_3, VAR_3->pfns[VAR_4]);
  if (VAR_6 == ((void*)0))
   continue;

  if (!(VAR_3->pfns[VAR_4] & VAR_3->flags[VAR_0])) {
   continue;
  }

  if (!FUNC_2(VAR_2, VAR_6)) {
   FUNC_0(1, "Some unknown device memory !\n");
   VAR_3->pfns[VAR_4] = 0;
   continue;
  }

  VAR_7 = FUNC_3(VAR_6);
  VAR_3->pfns[VAR_4] &= ((1UL << VAR_3->pfn_shift) - 1);
  VAR_3->pfns[VAR_4] |= (VAR_7 >> VAR_1) << VAR_3->pfn_shift;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct address_space {int dummy; } ;
typedef int pte_t ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct mm_struct*,struct page*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct address_space* FUNC_3 (struct page*) ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (struct mm_struct*,unsigned long,int ,unsigned int) ;
 scalar_t__ VAR_1 ;

void FUNC_10(struct mm_struct *VAR_2, unsigned long VAR_3,
     pte_t *VAR_4, pte_t VAR_5, int VAR_6,
     unsigned int VAR_7)
{
 if (VAR_1 != VAR_0 &&
     FUNC_6(VAR_5)) {
  unsigned long VAR_8, VAR_9 = FUNC_8(VAR_5);
  struct address_space *VAR_10;
  struct page *VAR_11;

  if (!FUNC_5(VAR_9))
   goto no_cache_flush;

  VAR_11 = FUNC_4(VAR_9);
  if (FUNC_0(VAR_11))
   goto no_cache_flush;


  VAR_10 = FUNC_3(VAR_11);
  if (!VAR_10)
   goto no_cache_flush;

  VAR_8 = (unsigned long) FUNC_2(VAR_11);
  if ((VAR_8 ^ VAR_3) & (1 << 13))
   FUNC_1(VAR_2, VAR_11);
 }

no_cache_flush:
 if (!VAR_6)
  FUNC_9(VAR_2, VAR_3, FUNC_7(VAR_5), VAR_7);
}

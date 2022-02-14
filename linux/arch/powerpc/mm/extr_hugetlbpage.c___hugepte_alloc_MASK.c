
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct kmem_cache {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int hugepd_t ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 struct kmem_cache* FUNC_2 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int * FUNC_7 (struct kmem_cache*,int ) ;
 int FUNC_8 (struct kmem_cache*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mm_struct*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct mm_struct *VAR_6, hugepd_t *VAR_7,
      unsigned long VAR_8, unsigned int VAR_9,
      unsigned int VAR_10, spinlock_t *VAR_11)
{
 struct kmem_cache *VAR_12;
 pte_t *VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_10 >= VAR_9) {
  VAR_12 = FUNC_2(VAR_5);
  VAR_15 = 1 << (VAR_10 - VAR_9);
 } else if (FUNC_1(VAR_0)) {
  VAR_12 = FUNC_2(VAR_4);
  VAR_15 = 1;
 } else {
  VAR_12 = FUNC_2(VAR_9 - VAR_10);
  VAR_15 = 1;
 }

 if (!VAR_12) {
  FUNC_3(1, "No page table cache created for hugetlb tables");
  return -VAR_1;
 }

 VAR_13 = FUNC_7(VAR_12, FUNC_10(VAR_6, VAR_2));

 FUNC_0(VAR_10 > VAR_3);
 FUNC_0((unsigned long)VAR_13 & VAR_3);

 if (!VAR_13)
  return -VAR_1;






 FUNC_11();

 FUNC_12(VAR_11);






 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++, VAR_7++) {
  if (FUNC_14(!FUNC_5(*VAR_7)))
   break;
  FUNC_6(VAR_7, VAR_13, VAR_10);
 }

 if (VAR_14 < VAR_15) {
  for (VAR_14 = VAR_14 - 1 ; VAR_14 >= 0; VAR_14--, VAR_7--)
   *VAR_7 = FUNC_4(0);
  FUNC_8(VAR_12, VAR_13);
 } else {
  FUNC_9(VAR_13);
 }
 FUNC_13(VAR_11);
 return 0;
}

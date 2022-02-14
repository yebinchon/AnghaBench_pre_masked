
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_3 (struct page*) ;
 int * FUNC_4 (struct page*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int,int ,int,int ) ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_8(struct mm_struct *VAR_10, struct page *VAR_11)
{
 void *VAR_12;
 u64 VAR_13;

 if (VAR_7 == VAR_5)
  return;

 FUNC_5();




 VAR_13 = 0;
 VAR_12 = FUNC_3(VAR_11);
 if (VAR_7 == VAR_6) {
  VAR_13 = ((u64)&VAR_9);
  if (FUNC_4(VAR_11) != ((void*)0))
   VAR_13 |= ((u64)1 << 32);
 } else if (VAR_7 == VAR_0 || VAR_7 == VAR_1) {



 }
 if (VAR_13) {
  FUNC_7(VAR_13, FUNC_1(VAR_12),
         (u64) VAR_12, VAR_2);



 }
 FUNC_0(VAR_11);

 FUNC_6();
}

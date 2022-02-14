
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 scalar_t__ VAR_4 ;
 void* FUNC_6 (struct page*) ;
 int * FUNC_7 (struct page*) ;
 int FUNC_8 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int,int ,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_10(struct page *VAR_9, int VAR_10)
{
 int VAR_11;

 if (VAR_6 == VAR_4)
  return;





 VAR_11 = FUNC_5();

 if (VAR_10 == VAR_11) {
  FUNC_0(VAR_9);
 } else if (FUNC_3(VAR_10)) {
  void *VAR_12 = FUNC_6(VAR_9);
  u64 VAR_13 = 0;

  if (VAR_6 == VAR_5) {
   VAR_13 = ((u64)&VAR_8);
   if (FUNC_7(VAR_9) != ((void*)0))
    VAR_13 |= ((u64)1 << 32);
  } else if (VAR_6 == VAR_0 || VAR_6 == VAR_1) {



  }
  if (VAR_13) {
   FUNC_9(VAR_13, FUNC_1(VAR_12),
          (u64) VAR_12, FUNC_4(VAR_10));



  }
 }

 FUNC_8();
}

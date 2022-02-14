
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,unsigned long,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int ,int *,int) ;

__attribute__((used)) static inline
void FUNC_10(struct page *VAR_3, unsigned long VAR_4, void *VAR_5,
      unsigned long VAR_6, unsigned int VAR_7)
{
 if (FUNC_3()) {
  if (VAR_7 & VAR_0) {
   unsigned long VAR_8 = (unsigned long)VAR_5;
   FUNC_0(VAR_8, VAR_8 + VAR_6);
  }
  return;
 }

 if (FUNC_2()) {
  FUNC_6(FUNC_8(VAR_3), VAR_4);
  FUNC_1();
  return;
 }


 if (VAR_7 & VAR_1) {
  unsigned long VAR_9 = (unsigned long)VAR_5;
  if (FUNC_7())
   FUNC_5(FUNC_8(VAR_3), VAR_4, VAR_6);
  else
   FUNC_0(VAR_9, VAR_9 + VAR_6);
  if (FUNC_4())
   FUNC_9(VAR_2,
       ((void*)0), 1);
 }
}

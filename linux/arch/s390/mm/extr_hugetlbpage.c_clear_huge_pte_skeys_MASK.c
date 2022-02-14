
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct mm_struct*) ;
 struct page* FUNC_4 (int ) ;
 struct page* FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct mm_struct *VAR_8, unsigned long VAR_9)
{
 struct page *VAR_10;
 unsigned long VAR_11, VAR_12;

 if (!FUNC_3(VAR_8) ||
     VAR_9 & VAR_7)
  return;

 if ((VAR_9 & VAR_5) == VAR_6) {
  VAR_10 = FUNC_5(FUNC_1(VAR_9));
  VAR_11 = VAR_4;
  VAR_12 = VAR_9 & VAR_3;
 } else {
  VAR_10 = FUNC_4(FUNC_0(VAR_9));
  VAR_11 = VAR_2;
  VAR_12 = VAR_9 & VAR_1;
 }

 if (!FUNC_6(VAR_0, &VAR_10->flags))
  FUNC_2(VAR_12, VAR_12 + VAR_11 - 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pteval_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static pteval_t FUNC_2(pteval_t VAR_7)
{
 if (VAR_7 & VAR_6) {
  unsigned long VAR_8 = (VAR_7 & VAR_5) >> VAR_3;
  pteval_t VAR_9 = VAR_7 & VAR_4;
  unsigned long VAR_10;

  VAR_10 = FUNC_0(VAR_8);







  if (FUNC_1(VAR_10 == VAR_2)) {
   VAR_10 = 0;
   VAR_9 = 0;
  } else
   VAR_10 &= ~(VAR_0 | VAR_1);
  VAR_7 = ((pteval_t)VAR_10 << VAR_3) | VAR_9;
 }

 return VAR_7;
}

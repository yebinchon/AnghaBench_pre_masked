
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pteval_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static pteval_t FUNC_2(pteval_t VAR_4)
{
 if (VAR_4 & VAR_3) {
  unsigned long VAR_5 = (VAR_4 & VAR_2) >> VAR_0;
  unsigned long VAR_6 = FUNC_0(VAR_5);

  pteval_t VAR_7 = VAR_4 & VAR_1;
  if (FUNC_1(VAR_6 == ~0))
   VAR_4 = VAR_7 & ~VAR_3;
  else
   VAR_4 = ((pteval_t)VAR_6 << VAR_0) | VAR_7;
 }

 return VAR_4;
}

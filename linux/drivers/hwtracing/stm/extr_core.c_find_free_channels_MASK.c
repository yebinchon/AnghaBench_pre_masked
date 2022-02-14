
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned long*,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned long*) ;

__attribute__((used)) static int FUNC_3(unsigned long *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_1; VAR_4 < VAR_2 + 1; VAR_4 = FUNC_0(VAR_4, VAR_3)) {
  VAR_4 = FUNC_1(VAR_0, VAR_2 + 1, VAR_4);
  if (VAR_4 + VAR_3 > VAR_2 + 1)
   break;

  if (VAR_4 & (VAR_3 - 1))
   continue;

  for (VAR_5 = 1; VAR_5 < VAR_3 && !FUNC_2(VAR_4 + VAR_5, VAR_0); VAR_5++)
   ;
  if (VAR_5 == VAR_3)
   return VAR_4;


  VAR_4 += VAR_5;
 }

 return -1;
}

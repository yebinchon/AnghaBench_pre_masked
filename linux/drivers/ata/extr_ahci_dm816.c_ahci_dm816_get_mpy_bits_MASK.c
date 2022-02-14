
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long*) ;
 unsigned long* VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;






 VAR_3 = VAR_0 / (VAR_2 / 100);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (VAR_1[VAR_4] == VAR_3)
   return VAR_4;
 }





 return -1;
}

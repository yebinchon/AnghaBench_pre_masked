
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

int FUNC_4(unsigned int *VAR_3,
    unsigned int VAR_4,
    unsigned int VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_5) + VAR_2;

 while (*VAR_3 != VAR_4) {
  if (FUNC_3(VAR_2, VAR_6)) {
   FUNC_1("qcm fence wait loop timeout expired\n");




   while (VAR_1)
    FUNC_2();

   return -VAR_0;
  }
  FUNC_2();
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long* FUNC_0 (unsigned long*) ;
 long FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
       unsigned long VAR_4,
       unsigned long *VAR_5,
       unsigned long *VAR_6)
{
 unsigned long *VAR_7 = ((void*)0);


 if (VAR_3 != (unsigned long) &VAR_1)
  VAR_7 = FUNC_0((unsigned long *)VAR_3);

 if (VAR_7) {
  long VAR_8 = FUNC_1(*VAR_7);

  *VAR_5 = VAR_2 + VAR_8;
  *VAR_6 = *(unsigned long *)VAR_2;
 } else {
  if (!VAR_4)
   return -VAR_0;
  *VAR_6 = VAR_4;
  *VAR_5 = VAR_2;
 }




 return (!*VAR_6 || (*VAR_6 & 3)) ? -VAR_0 : 0;
}

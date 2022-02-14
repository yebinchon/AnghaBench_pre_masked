
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long*) ;

void FUNC_2(void *VAR_0, unsigned long *VAR_1,
     void (*VAR_2)(void *VAR_3, unsigned long VAR_4, int VAR_5))
{
 unsigned long VAR_6;

 while (!FUNC_1(VAR_1)) {
  VAR_6 = *VAR_1++;
  if (FUNC_0(VAR_6))
   VAR_2(VAR_0, VAR_6, 0);
 }
}

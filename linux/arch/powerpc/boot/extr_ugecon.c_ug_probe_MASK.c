
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 () ;
 void* VAR_0 ;
 scalar_t__ FUNC_1 () ;

void *FUNC_2(void)
{
 void *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0();
 if (!VAR_1)
  return ((void*)0);


 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  VAR_0 = VAR_1 + 0x14 * VAR_2;
  if (FUNC_1())
   break;
 }
 if (VAR_2 == 2)
  VAR_0 = ((void*)0);
 return VAR_0;
}

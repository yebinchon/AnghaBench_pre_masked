
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ,void*) ;
 int FUNC_3 (char*,...) ;

void FUNC_4(void *VAR_2)
{
 if (VAR_2 == ((void*)0))
  FUNC_3("attempt to uiprivFree(NULL)");
 VAR_2 = FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 if (FUNC_2(VAR_1, VAR_2) == VAR_0)
  FUNC_3("%p not found in allocations array in uiprivFree()", VAR_2);
}

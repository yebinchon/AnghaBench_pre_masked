
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 void* FUNC_1 (void*,size_t) ;
 int FUNC_2 (char*) ;

void *
FUNC_3(void *VAR_0, size_t VAR_1)
{
 void *VAR_2;

 if ((VAR_2 = FUNC_1(VAR_0, VAR_1)) == ((void*)0)) {
  FUNC_2("realloc failed");
  FUNC_0();
 }
 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int,size_t) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void *
FUNC_2(size_t VAR_0)
{
 void *VAR_1;

 if ((VAR_1 = FUNC_0(1, VAR_0)) == ((void*)0))
  FUNC_1(1, "memory allocation failure");
 return (VAR_1);
}

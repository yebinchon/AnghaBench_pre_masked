
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,size_t) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (size_t) ;

void *
FUNC_3(size_t VAR_0)
{
 void *VAR_1;

 if (VAR_0 == 0)
  FUNC_1(2, "xmalloc: zero size");
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0))
  FUNC_0(2, "xmalloc: allocating %zu bytes", VAR_0);
 return VAR_1;
}

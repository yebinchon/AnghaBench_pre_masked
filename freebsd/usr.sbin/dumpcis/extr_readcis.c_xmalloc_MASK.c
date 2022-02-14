
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void *
FUNC_3(int VAR_0)
{
 void *VAR_1;

 VAR_0 = (VAR_0 + 7) & ~7;
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0))
  FUNC_1(1, "malloc");
 FUNC_0(VAR_1, VAR_0);
 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 void* FUNC_2 (size_t,int,int) ;

__attribute__((used)) static void *FUNC_3(size_t VAR_2, int VAR_3)
{
 void *VAR_4;

 if (!FUNC_0(VAR_2))
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_2, VAR_0 | VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_2);

 return ((void*)0);
}

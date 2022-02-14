
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void const*,size_t,void const*,size_t,int *,int ,int *,int *) ;

int FUNC_2(const void *VAR_3, size_t VAR_4,
       const void *VAR_5, size_t VAR_6)
{
 int VAR_7;

 if (!VAR_3 || VAR_4 == 0)
  return -VAR_0;

 if (!VAR_5 || VAR_6 == 0) {
  if (FUNC_0())
   return -VAR_1;
  else
   return 0;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
    VAR_6, ((void*)0), VAR_2,
    ((void*)0), ((void*)0));

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_offmap ;
typedef int git_off_t ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int ,int *,int const) ;
 void* FUNC_3 (int *,size_t) ;
 int VAR_0 ;

void *FUNC_4(git_offmap *VAR_1, const git_off_t VAR_2)
{
 size_t VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == FUNC_0(VAR_1) || !FUNC_1(VAR_1, VAR_3))
  return ((void*)0);
 return FUNC_3(VAR_1, VAR_3);
}

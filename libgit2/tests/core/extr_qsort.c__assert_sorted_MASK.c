
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;
typedef scalar_t__ (* git__sort_r_cmp ) (int *,int *,int *) ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t,size_t,scalar_t__ (*) (int *,int *,int *),int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, size_t VAR_1, size_t VAR_2, git__sort_r_cmp VAR_3)
{
 int8_t *VAR_4 = VAR_0;

 FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3, ((void*)0));
 while (VAR_1-- > 1) {
  FUNC_0(VAR_3(VAR_4, VAR_4 + VAR_2, ((void*)0)) <= 0);
  VAR_4 += VAR_2;
 }
}

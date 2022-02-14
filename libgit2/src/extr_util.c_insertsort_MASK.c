
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ (* git__sort_r_cmp ) (int *,int *,void*) ;


 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static void FUNC_1(
 void *VAR_0, size_t VAR_1, size_t VAR_2,
 git__sort_r_cmp VAR_3, void *VAR_4)
{
 uint8_t *VAR_5 = VAR_0;
 uint8_t *VAR_6 = VAR_5 + VAR_1 * VAR_2;
 uint8_t *VAR_7, *VAR_8;

 for (VAR_7 = VAR_5 + VAR_2; VAR_7 < VAR_6; VAR_7 += VAR_2)
  for (VAR_8 = VAR_7; VAR_8 > VAR_5 && VAR_3(VAR_8, VAR_8 - VAR_2, VAR_4) < 0; VAR_8 -= VAR_2)
   FUNC_0(VAR_8, VAR_8 - VAR_2, VAR_2);
}

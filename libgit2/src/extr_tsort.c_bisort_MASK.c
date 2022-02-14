
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* git__sort_r_cmp ) (void*,void*,void*) ;


 int FUNC_0 (void**,void*,size_t,scalar_t__ (*) (void*,void*,void*),void*) ;

__attribute__((used)) static void FUNC_1(
 void **VAR_0, size_t VAR_1, size_t VAR_2, git__sort_r_cmp VAR_3, void *VAR_4)
{
 size_t VAR_5;
 void *VAR_6;
 int VAR_7;

 for (VAR_5 = VAR_1; VAR_5 < VAR_2; VAR_5++) {
  int VAR_8;

  if (VAR_3(VAR_0[VAR_5 - 1], VAR_0[VAR_5], VAR_4) <= 0)
   continue;


  VAR_6 = VAR_0[VAR_5];
  VAR_7 = FUNC_0(VAR_0, VAR_6, VAR_5, VAR_3, VAR_4);
  for (VAR_8 = (int)VAR_5 - 1; VAR_8 >= VAR_7; VAR_8--) {
   VAR_0[VAR_8 + 1] = VAR_0[VAR_8];
  }
  VAR_0[VAR_7] = VAR_6;
 }
}

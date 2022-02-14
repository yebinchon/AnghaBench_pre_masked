
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_alloc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct binder_alloc*,size_t*,int*,size_t) ;
 scalar_t__ FUNC_1 (int*,int,int) ;

__attribute__((used)) static void FUNC_2(struct binder_alloc *VAR_1,
         size_t *VAR_2, int *VAR_3,
         int VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (VAR_4 == VAR_0) {
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
  return;
 }
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (FUNC_1(VAR_3, VAR_4, VAR_6))
   continue;
  VAR_3[VAR_4] = VAR_6;
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4 + 1, VAR_5);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binder_alloc {int dummy; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct binder_alloc*,size_t*) ;

__attribute__((used)) static void FUNC_3(struct binder_alloc *VAR_5,
      size_t *VAR_6, int VAR_7)
{
 int VAR_8;
 size_t VAR_9, VAR_10;

 if (VAR_7 == VAR_1) {
  FUNC_2(VAR_5, VAR_6);
  return;
 }
 VAR_10 = VAR_7 == 0 ? 0 : VAR_6[VAR_7 - 1];
 VAR_9 = VAR_10;

 FUNC_1(VAR_0 * VAR_1 >= VAR_3);

 for (VAR_8 = VAR_4; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_8 % 2)
   VAR_9 = FUNC_0(VAR_9, VAR_3);
  else
   VAR_9 += VAR_0;
  VAR_6[VAR_7] = VAR_9;
  FUNC_3(VAR_5, VAR_6, VAR_7 + 1);
 }
}

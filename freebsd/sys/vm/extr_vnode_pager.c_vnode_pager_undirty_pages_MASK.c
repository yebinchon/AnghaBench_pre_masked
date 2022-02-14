
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
typedef int off_t ;
struct TYPE_5__ {scalar_t__ dirty; int object; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(vm_page_t *VAR_6, int *VAR_7, int VAR_8, off_t VAR_9,
    int VAR_10)
{
 vm_object_t VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (VAR_8 == 0 && VAR_9 >= VAR_10)
  return;
 VAR_11 = VAR_6[0]->object;
 FUNC_1(VAR_11);
 for (VAR_12 = 0, VAR_13 = 0; VAR_13 < VAR_8; VAR_12++, VAR_13 += VAR_2) {
  if (VAR_13 < FUNC_5(VAR_8)) {
   VAR_7[VAR_12] = VAR_5;
   FUNC_7(VAR_6[VAR_12]);
  } else {

   VAR_7[VAR_12] = VAR_3;
   FUNC_6(VAR_6[VAR_12], 0, VAR_8 & VAR_1);
  }
 }
 if (VAR_9 >= VAR_10)
  goto done;
 for (VAR_13 = VAR_9, VAR_12 = FUNC_0(FUNC_5(VAR_13)); VAR_13 < VAR_10; VAR_12++) {
  if (VAR_13 != FUNC_5(VAR_13)) {






   VAR_14 = FUNC_4(VAR_13 & VAR_1, VAR_0);
   FUNC_6(VAR_6[VAR_12], VAR_14, VAR_2 -
       VAR_14);







   if (VAR_6[VAR_12]->dirty == 0)
    VAR_7[VAR_12] = VAR_5;

   VAR_13 = FUNC_3(VAR_13);
  } else {

   VAR_7[VAR_12] = VAR_4;
   VAR_13 += VAR_2;
  }
 }
done:
 FUNC_2(VAR_11);
}

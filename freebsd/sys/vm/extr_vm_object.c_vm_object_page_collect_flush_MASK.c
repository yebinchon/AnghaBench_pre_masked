
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
typedef int vm_object_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int,int,int,int*,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_10(vm_object_t VAR_3, vm_page_t VAR_4, int VAR_5,
    int VAR_6, boolean_t *VAR_7, boolean_t *VAR_8)
{
 vm_page_t VAR_9[VAR_2], VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_4(VAR_4, VAR_0);
 FUNC_3(VAR_4);
 FUNC_1(VAR_3);

 VAR_12 = 1;
 VAR_14 = 0;

 for (VAR_11 = VAR_4; VAR_12 < VAR_2; VAR_12++) {
  VAR_11 = FUNC_5(VAR_11);
  if (VAR_11 == ((void*)0) || FUNC_7(VAR_11) == 0)
   break;
  if (!FUNC_2(VAR_11, VAR_6, VAR_7)) {
   FUNC_8(VAR_11);
   break;
  }
 }

 for (VAR_10 = VAR_4; VAR_12 < VAR_2; VAR_12++) {
  VAR_11 = FUNC_6(VAR_10);
  if (VAR_11 == ((void*)0) || FUNC_7(VAR_11) == 0)
   break;
  if (!FUNC_2(VAR_11, VAR_6, VAR_7)) {
   FUNC_8(VAR_11);
   break;
  }
  VAR_10 = VAR_11;
  VAR_14++;
 }

 for (VAR_11 = VAR_10, VAR_13 = 0; VAR_13 < VAR_12; VAR_11 = FUNC_0(VAR_11, VAR_1), VAR_13++)
  VAR_9[VAR_13] = VAR_11;

 FUNC_9(VAR_9, VAR_12, VAR_5, VAR_14, &VAR_15, VAR_8);
 return (VAR_15);
}

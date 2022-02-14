
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int ** VAR_1 ;

int FUNC_1 (FILE* VAR_2) {
    int VAR_3;
 int VAR_4;



 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++) {
  if (VAR_1[VAR_4] == VAR_2) {
   VAR_1[VAR_4] = ((void*)0);
   if (VAR_4 == VAR_0) {
    VAR_0--;
   }

   break;
  }
 }


    VAR_3 = FUNC_0((FILE *)VAR_2);
    return VAR_3;
}

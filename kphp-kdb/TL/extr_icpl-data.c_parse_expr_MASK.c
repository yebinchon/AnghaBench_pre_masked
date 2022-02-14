
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; size_t start; int length; } ;
typedef TYPE_1__ icpl_token_t ;
typedef int icpl_cell_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int * FUNC_2 (char const*,int ) ;
 int * FUNC_3 (char const*,int ) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (char const) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (char const*,size_t,char*) ;






 int VAR_0 ;

__attribute__((used)) static int FUNC_8 (const char *VAR_1, icpl_token_t *VAR_2, int VAR_3, icpl_cell_t **VAR_4) {
  int VAR_5, VAR_6, VAR_7;
  icpl_cell_t *VAR_8, *VAR_9 = ((void*)0);
  *VAR_4 = ((void*)0);
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
     switch (VAR_2[VAR_5].type) {
       case 129:
         VAR_7 = 1;
         for (VAR_6 = VAR_5 + 1; VAR_7 > 0 && VAR_6 < VAR_3; VAR_6++) {
           switch (VAR_2[VAR_6].type) {
             case 129: VAR_7++; break;
             case 132: VAR_7--; break;
             default: break;
           }
         }
         if (VAR_7 > 0) {
           return FUNC_7 (VAR_1, VAR_2[VAR_5].start, "closing bracket wasn't found");
         }


         if (FUNC_8 (VAR_1, VAR_2 + (VAR_5 + 1), VAR_6 - (VAR_5 + 2), &VAR_8) < 0) {
           return -1;
         }
         VAR_9 = FUNC_4 (VAR_9, VAR_8);
         VAR_5 = VAR_6;
       break;
       case 132: return FUNC_7 (VAR_1, VAR_2[VAR_5].start, "unexpected closing bracket");
       case 131: VAR_9 = FUNC_4 (VAR_9, FUNC_2 (VAR_1 + VAR_2[VAR_5].start, VAR_2[VAR_5].length)); break;
       case 130: VAR_9 = FUNC_4 (VAR_9, FUNC_3 (VAR_1 + VAR_2[VAR_5].start, VAR_2[VAR_5].length)); break;
       case 128: VAR_9 = FUNC_4 (VAR_9, FUNC_5 (VAR_1[VAR_2[VAR_5].start])); break;
       case 133: VAR_9 = FUNC_4 (VAR_9, FUNC_1 ()); break;
       default: FUNC_6 (VAR_0, "Unexpected lt (%d) at pos %d\n", VAR_2[VAR_5].type, VAR_5); FUNC_0 (0);
     }
  }
  *VAR_4 = VAR_9;
  return 0;
}

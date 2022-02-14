
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; char** keys; char** functions; } ;
typedef TYPE_1__ FunctionBar ;


 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,char*) ;
 int FUNC_3 (scalar_t__,int ,char,int ) ;
 scalar_t__ FUNC_4 (char*) ;

void FUNC_5(const FunctionBar* VAR_7, char* VAR_8, int VAR_9) {
   FUNC_0(VAR_1[VAR_3]);
   FUNC_3(VAR_5-1, 0, ' ', VAR_0);
   int VAR_10 = 0;
   for (int VAR_11 = 0; VAR_11 < VAR_7->size; VAR_11++) {
      FUNC_0(VAR_1[VAR_4]);
      FUNC_2(VAR_5-1, VAR_10, VAR_7->keys[VAR_11]);
      VAR_10 += FUNC_4(VAR_7->keys[VAR_11]);
      FUNC_0(VAR_1[VAR_3]);
      FUNC_2(VAR_5-1, VAR_10, VAR_7->functions[VAR_11]);
      VAR_10 += FUNC_4(VAR_7->functions[VAR_11]);
   }
   if (VAR_8) {
      FUNC_0(VAR_9);
      FUNC_2(VAR_5-1, VAR_10, VAR_8);
      VAR_2 = VAR_10 + FUNC_4(VAR_8);
      FUNC_1(1);
   } else {
      FUNC_1(0);
   }
   FUNC_0(VAR_1[VAR_6]);
}

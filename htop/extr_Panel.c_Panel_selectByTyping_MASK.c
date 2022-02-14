
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* value; } ;
struct TYPE_7__ {char* eventHandlerState; } ;
typedef TYPE_1__ Panel ;
typedef TYPE_2__ ListItem ;
typedef int HandlerResult ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (int,int) ;

HandlerResult FUNC_7(Panel* VAR_4, int VAR_5) {
   int VAR_6 = FUNC_2(VAR_4);
   if (!VAR_4->eventHandlerState)
      VAR_4->eventHandlerState = FUNC_6(100, sizeof(char));
   char* VAR_7 = VAR_4->eventHandlerState;

   if (VAR_5 > 0 && VAR_5 < 255 && FUNC_3(VAR_5)) {
      int VAR_8 = FUNC_4(VAR_7);
      if (VAR_8 < 99) {
         VAR_7[VAR_8] = VAR_5;
         VAR_7[VAR_8+1] = '\0';
      }
      for (int VAR_9 = 0; VAR_9 < 2; VAR_9++) {
         VAR_8 = FUNC_4(VAR_7);
         for (int VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
            char* VAR_11 = ((ListItem*) FUNC_0(VAR_4, VAR_10))->value;
            while (*VAR_11 == ' ') VAR_11++;
            if (FUNC_5(VAR_11, VAR_7, VAR_8) == 0) {
               FUNC_1(VAR_4, VAR_10);
               return VAR_2;
            }
         }


         VAR_7[0] = VAR_5;
         VAR_7[1] = '\0';
      }
      return VAR_2;
   } else if (VAR_5 != VAR_1) {
      VAR_7[0] = '\0';
   }
   if (VAR_5 == 13) {
      return VAR_0;
   }
   return VAR_3;
}

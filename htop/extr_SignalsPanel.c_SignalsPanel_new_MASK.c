
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int number; } ;
typedef int Panel ;
typedef int Object ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,int) ;
 int * FUNC_3 (int,int,int,int,int,int ,int ) ;
 int FUNC_4 (int *,unsigned int,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*,int,char*,int,int) ;

Panel* FUNC_8() {
   Panel* VAR_6 = FUNC_3(1, 1, 1, 1, 1, FUNC_0(VAR_0), FUNC_1("Send   ", "Cancel "));
   const int VAR_7 = VAR_5;
   int VAR_8 = 15;
   unsigned int VAR_9;
   for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
      FUNC_4(VAR_6, VAR_9, (Object*) FUNC_2(VAR_2[VAR_9].name, VAR_2[VAR_9].number));

      if (VAR_2[VAR_9].number == VAR_7) {
         VAR_8 = VAR_9;
      }
   }
   FUNC_5(VAR_6, "Send signal:");
   FUNC_6(VAR_6, VAR_8);
   return VAR_6;
}

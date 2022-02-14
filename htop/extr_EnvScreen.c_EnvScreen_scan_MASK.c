
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int lines; TYPE_1__* process; TYPE_2__* display; } ;
struct TYPE_10__ {int items; } ;
struct TYPE_9__ {int pid; } ;
typedef TYPE_2__ Panel ;
typedef TYPE_3__ InfoScreen ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,int ) ;

void FUNC_11(InfoScreen* VAR_0) {
   Panel* VAR_1 = VAR_0->display;
   int VAR_2 = FUNC_3(FUNC_4(VAR_1), 0);

   FUNC_5(VAR_1);

   FUNC_0();
   char* VAR_3 = FUNC_7(VAR_0->process->pid);
   FUNC_1();
   if (VAR_3) {
      for (char *VAR_4 = VAR_3; *VAR_4; VAR_4 = FUNC_10(VAR_4, 0)+1)
         FUNC_2(VAR_0, VAR_4);
      FUNC_9(VAR_3);
   }
   else {
      FUNC_2(VAR_0, "Could not read process environment.");
   }

   FUNC_8(VAR_0->lines);
   FUNC_8(VAR_1->items);
   FUNC_6(VAR_1, VAR_2);
}

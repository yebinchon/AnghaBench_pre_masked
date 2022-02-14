
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_24__ {TYPE_1__* pl; int height; } ;
struct TYPE_23__ {int y; } ;
struct TYPE_22__ {int pid; } ;
struct TYPE_21__ {int allowFocusChange; } ;
struct TYPE_20__ {int * settings; TYPE_6__* header; TYPE_5__* panel; } ;
struct TYPE_19__ {int following; } ;
typedef TYPE_2__ State ;
typedef int Settings ;
typedef TYPE_3__ ScreenManager ;
typedef TYPE_4__ Process ;
typedef TYPE_5__ Panel ;
typedef int Object ;
typedef int MainPanel ;
typedef TYPE_6__ Header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (TYPE_5__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ,int ,int ,int,int ,TYPE_6__*,int *,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__**,int*) ;
 int FUNC_8 () ;

Object* FUNC_9(State* VAR_3, Panel* VAR_4, int VAR_5) {
   Panel* VAR_6 = VAR_3->panel;
   Header* VAR_7 = VAR_3->header;
   Settings* VAR_8 = VAR_3->settings;

   int VAR_9 = VAR_6->y;
   ScreenManager* VAR_10 = FUNC_6(0, VAR_7->height, 0, -1, VAR_1, VAR_7, VAR_8, 0);
   VAR_10->allowFocusChange = 0;
   FUNC_4(VAR_10, VAR_4, VAR_5 - 1);
   FUNC_4(VAR_10, VAR_6, -1);
   Panel* VAR_11;
   int VAR_12;
   bool VAR_13 = 0;
   int VAR_14 = FUNC_0((MainPanel*)VAR_6);
   if (VAR_7->pl->following == -1) {
      VAR_7->pl->following = VAR_14;
      VAR_13 = 1;
   }
   FUNC_7(VAR_10, &VAR_11, &VAR_12);
   if (VAR_13) {
      VAR_7->pl->following = -1;
   }
   FUNC_5(VAR_10);
   FUNC_2(VAR_6, 0, VAR_9);
   FUNC_3(VAR_6, VAR_0, VAR_2-VAR_9-1);
   if (VAR_11 == VAR_4 && VAR_12 == 13) {
      Process* VAR_15 = (Process*)FUNC_1(VAR_6);
      if (VAR_15 && VAR_15->pid == VAR_14)
         return FUNC_1(VAR_4);
      else
         FUNC_8();
   }
   return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int UsersTable ;
struct TYPE_27__ {int delay; scalar_t__ sortKey; scalar_t__ pidWhiteList; scalar_t__ treeView; int useColors; int userId; } ;
struct TYPE_26__ {int height; } ;
struct TYPE_25__ {TYPE_2__* settings; int cpuCount; } ;
struct TYPE_24__ {int delay; int treeView; scalar_t__ sortKey; int direction; scalar_t__ changed; int colorScheme; } ;
struct TYPE_23__ {TYPE_4__* header; int * panel; TYPE_3__* pl; int * ut; TYPE_2__* settings; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Settings ;
typedef int ScreenManager ;
typedef TYPE_3__ ProcessList ;
typedef int Panel ;
typedef int MainPanel ;
typedef TYPE_4__ Header ;
typedef TYPE_5__ CommandLineSettings ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *,int) ;
 char* VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 TYPE_3__* FUNC_11 (int *,scalar_t__,int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int *) ;
 int FUNC_15 () ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_16 (int *,int *,int) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int ,int ,int ,int,int ,TYPE_4__*,TYPE_2__*,int) ;
 int FUNC_19 (int *,int *,int *) ;
 int FUNC_20 (TYPE_2__*) ;
 TYPE_2__* FUNC_21 (int ) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (int *) ;
 int * FUNC_24 () ;
 scalar_t__ FUNC_25 (char*,int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int ,char*,char*) ;
 char* FUNC_30 (char*) ;
 int FUNC_31 (int) ;
 int FUNC_32 (scalar_t__,int ,char,int ) ;
 TYPE_5__ FUNC_33 (int,char**) ;
 int FUNC_34 () ;
 int FUNC_35 (int ,char*) ;
 int VAR_9 ;

int FUNC_36(int VAR_10, char** VAR_11) {

   char *VAR_12 = FUNC_30("LC_CTYPE");
   if(VAR_12 != ((void*)0))
      FUNC_35(VAR_4, VAR_12);
   else if ((VAR_12 = FUNC_30("LC_ALL")))
      FUNC_35(VAR_4, VAR_12);
   else
      FUNC_35(VAR_4, "");

   CommandLineSettings VAR_13 = FUNC_33(VAR_10, VAR_11);
   FUNC_15();

   UsersTable* VAR_14 = FUNC_24();
   ProcessList* VAR_15 = FUNC_11(VAR_14, VAR_13.pidWhiteList, VAR_13.userId);

   Settings* VAR_16 = FUNC_21(VAR_15->cpuCount);
   VAR_15->settings = VAR_16;

   Header* VAR_17 = FUNC_4(VAR_15, VAR_16, 2);

   FUNC_5(VAR_17);

   if (VAR_13.delay != -1)
      VAR_16->delay = VAR_13.delay;
   if (!VAR_13.useColors)
      VAR_16->colorScheme = VAR_0;
   if (VAR_13.treeView)
      VAR_16->treeView = 1;

   FUNC_1(VAR_16->delay, VAR_16->colorScheme);

   MainPanel* VAR_18 = FUNC_6();
   FUNC_14(VAR_15, (Panel*) VAR_18);

   FUNC_8(VAR_18, VAR_16->treeView);

   if (VAR_13.sortKey > 0) {
      VAR_16->sortKey = VAR_13.sortKey;
      VAR_16->treeView = 0;
      VAR_16->direction = 1;
   }
   FUNC_12(VAR_15, FUNC_9((Panel*)VAR_18));

   State VAR_19 = {
      .settings = VAR_16,
      .ut = VAR_14,
      .pl = VAR_15,
      .panel = (Panel*) VAR_18,
      .header = VAR_17,
   };
   FUNC_7(VAR_18, &VAR_19);

   ScreenManager* VAR_20 = FUNC_18(0, VAR_17->height, 0, -1, VAR_3, VAR_17, VAR_16, 1);
   FUNC_16(VAR_20, (Panel*) VAR_18, -1);

   FUNC_13(VAR_15);
   FUNC_31(75);
   FUNC_13(VAR_15);

   FUNC_19(VAR_20, ((void*)0), ((void*)0));

   FUNC_27(VAR_2[VAR_7]);
   FUNC_32(VAR_5-1, 0, ' ', VAR_1);
   FUNC_26(VAR_2[VAR_7]);
   FUNC_34();

   FUNC_0();
   if (VAR_16->changed)
      FUNC_22(VAR_16);
   FUNC_3(VAR_17);
   FUNC_10(VAR_15);

   FUNC_17(VAR_20);

   FUNC_23(VAR_14);
   FUNC_20(VAR_16);

   if(VAR_13.pidWhiteList) {
      FUNC_2(VAR_13.pidWhiteList);
   }
   return 0;
}

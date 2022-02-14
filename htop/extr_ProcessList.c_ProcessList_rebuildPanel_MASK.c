
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef scalar_t__ pid_t ;
struct TYPE_13__ {int scrollV; } ;
struct TYPE_12__ {scalar_t__ st_uid; scalar_t__ pid; int tgid; int comm; int show; } ;
struct TYPE_11__ {char* incFilter; int following; scalar_t__ userId; TYPE_7__* panel; scalar_t__ pidWhiteList; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ Process ;
typedef int Object ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,int,int *) ;
 int FUNC_4 (TYPE_7__*,int) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char const*) ;

void FUNC_8(ProcessList* VAR_0) {
   const char* VAR_1 = VAR_0->incFilter;

   int VAR_2 = FUNC_1(VAR_0->panel);
   pid_t VAR_3 = VAR_0->following != -1 ? VAR_0->following : 0;
   int VAR_4 = VAR_0->panel->scrollV;

   FUNC_2(VAR_0->panel);
   int VAR_5 = FUNC_6(VAR_0);
   int VAR_6 = 0;
   for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
      bool VAR_8 = 0;
      Process* VAR_9 = FUNC_5(VAR_0, VAR_7);

      if ( (!VAR_9->show)
         || (VAR_0->userId != (uid_t) -1 && (VAR_9->st_uid != VAR_0->userId))
         || (VAR_1 && !(FUNC_7(VAR_9->comm, VAR_1)))
         || (VAR_0->pidWhiteList && !FUNC_0(VAR_0->pidWhiteList, VAR_9->tgid)) )
         VAR_8 = 1;

      if (!VAR_8) {
         FUNC_3(VAR_0->panel, VAR_6, (Object*)VAR_9);
         if ((VAR_0->following == -1 && VAR_6 == VAR_2) || (VAR_0->following != -1 && VAR_9->pid == VAR_3)) {
            FUNC_4(VAR_0->panel, VAR_6);
            VAR_0->panel->scrollV = VAR_4;
         }
         VAR_6++;
      }
   }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct map {scalar_t__ size; } ;
struct TYPE_6__ {int points; int calls; int end; int exit; int returns; int entry; } ;
struct TYPE_5__ {scalar_t__ x; } ;
typedef int Apply ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int FUNC_8 (int,char**) ;
 int VAR_15 ;

void FUNC_9(int VAR_16, char *VAR_17[]) {
 int VAR_18;
 static int VAR_19;

 if (VAR_19)
  return;
 VAR_19 = 1;
 FUNC_8(VAR_16, VAR_17);
 if (VAR_1) {
  for (VAR_18 = 1; VAR_18 < VAR_16; VAR_18++)
   if (FUNC_7(VAR_17[VAR_18], "-a", 2) == 0) {
    if (VAR_14 == -1
    && FUNC_5(VAR_17[VAR_18][2] ? &VAR_17[VAR_18][2] : "prof.out") > 0)
     VAR_14 = 0;
   } else if ((FUNC_6(VAR_17[VAR_18], "-b") == 0
            || FUNC_6(VAR_17[VAR_18], "-C") == 0) && VAR_5 == 0) {
    VAR_5 = FUNC_4(VAR_3, FUNC_2(VAR_15, 0, 0), VAR_0);
    FUNC_3((Apply)VAR_7, VAR_5, &VAR_12.entry);
    FUNC_3((Apply)VAR_8, VAR_5, &VAR_12.returns);
    FUNC_3((Apply)VAR_9, VAR_5, &VAR_12.exit);
    FUNC_3((Apply)VAR_11, VAR_5, &VAR_12.end);
    if (FUNC_6(VAR_17[VAR_18], "-b") == 0) {
     VAR_4 = FUNC_4(VAR_3, FUNC_2(VAR_15, 0, 0), VAR_0);
     VAR_13 = FUNC_1(FUNC_0(sizeof (struct map), VAR_2), VAR_13);
     ((struct map *)VAR_13->x)->size = 0;
     FUNC_3((Apply)VAR_6, VAR_4, &VAR_12.calls);
     FUNC_3((Apply)VAR_10, VAR_4, &VAR_12.points);
    }
   }
  }
}

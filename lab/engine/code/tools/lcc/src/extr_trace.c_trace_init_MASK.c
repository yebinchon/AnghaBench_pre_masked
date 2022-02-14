
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int returns; int entry; } ;
struct TYPE_5__ {scalar_t__ defined; } ;
typedef TYPE_1__* Symbol ;
typedef int Apply ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int *) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (char*,char) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int,char**) ;

void FUNC_8(int VAR_8, char *VAR_9[]) {
 int VAR_10;
 static int VAR_11;

 if (VAR_11)
  return;
 VAR_11 = 1;
 FUNC_7(VAR_8, VAR_9);
 if (VAR_2)
  for (VAR_10 = 1; VAR_10 < VAR_8; VAR_10++)
   if (FUNC_6(VAR_9[VAR_10], "-t", 2) == 0 && FUNC_5(VAR_9[VAR_10], '=') == ((void*)0)) {
    Symbol VAR_12 = FUNC_2(VAR_1,
     VAR_9[VAR_10][2] ? &VAR_9[VAR_10][2] : "printf",
    FUNC_1(VAR_5, FUNC_3(FUNC_4(VAR_0, VAR_3))));
    VAR_12->defined = 0;
    FUNC_0((Apply)VAR_6, VAR_12, &VAR_4.entry);
    FUNC_0((Apply)VAR_7, VAR_12, &VAR_4.returns);
    break;
   }
}

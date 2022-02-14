
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int (* progend ) () ;int (* stabend ) (TYPE_1__*,int *,int *,int *,int *) ;int (* stabinit ) (int ,int,char**) ;int (* progbeg ) (int,char**) ;} ;
struct TYPE_10__ {char* name; TYPE_7__* ir; } ;
struct TYPE_9__ {scalar_t__ end; } ;
struct TYPE_8__ {int y; scalar_t__ x; int file; } ;
typedef int * Symbol ;
typedef TYPE_1__ Coordinate ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int *,int *) ;
 TYPE_6__* VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ,int **) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int,char**) ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int) ;
 int FUNC_10 () ;
 int VAR_12 ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int,char**) ;
 int FUNC_15 (int ,int,char**) ;
 int FUNC_16 (TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_17 (TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_18 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

int FUNC_19(int VAR_18, char *VAR_19[]) {
 int VAR_20, VAR_21;
 for (VAR_20 = VAR_18 - 1; VAR_20 > 0; VAR_20--)
  if (FUNC_13(VAR_19[VAR_20], "-target=", 8) == 0)
   break;
 if (VAR_20 > 0) {
  char *VAR_22 = FUNC_11(VAR_19[VAR_20], '\\');
  if (VAR_22 != ((void*)0))
   *VAR_22 = '/';
  for (VAR_21 = 0; VAR_4[VAR_21].name && VAR_4[VAR_21].ir; VAR_21++)
   if (FUNC_12(&VAR_19[VAR_20][8], VAR_4[VAR_21].name) == 0) {
    VAR_2 = VAR_4[VAR_21].ir;
    break;
   }
  if (VAR_22 != ((void*)0))
   *VAR_22 = '\\';
 }
 if (!VAR_2) {
  FUNC_5(VAR_12, "%s: unknown target", VAR_19[0]);
  if (VAR_20 > 0)
   FUNC_5(VAR_12, " `%s'", &VAR_19[VAR_20][8]);
  FUNC_5(VAR_12, "; must specify one of\n");
  for (VAR_20 = 0; VAR_4[VAR_20].name; VAR_20++)
   FUNC_5(VAR_12, "\t-target=%s\n", VAR_4[VAR_20].name);
  FUNC_2(VAR_0);
 }
 FUNC_7(VAR_18, VAR_19);
 VAR_14 = FUNC_6();
 (*VAR_2->progbeg)(VAR_18, VAR_19);
 if (VAR_8 && VAR_2->stabinit)
  (*VAR_2->stabinit)(VAR_7, VAR_18, VAR_19);
 FUNC_10();
 if (VAR_6.end)
  FUNC_0(VAR_6.end, ((void*)0), ((void*)0));
 FUNC_9(&VAR_6, 0, sizeof VAR_6);
 if (VAR_8 || VAR_17) {
  Symbol VAR_23 = ((void*)0);
  Coordinate VAR_24;
  FUNC_4(VAR_15, VAR_1, VAR_16, &VAR_23);
  FUNC_4(VAR_9, VAR_1, VAR_16, &VAR_23);
  VAR_24.file = VAR_7;
  VAR_24.x = 0;
  VAR_24.y = VAR_10;
  if ((VAR_8 > 2 || VAR_17) && VAR_2->stabend)
   (*VAR_2->stabend)(&VAR_24, VAR_23,
    FUNC_8(&VAR_11, VAR_3),
    FUNC_8(&VAR_13, VAR_3), ((void*)0));
  else if (VAR_2->stabend)
   (*VAR_2->stabend)(&VAR_24, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 }
 FUNC_3();
 (*VAR_2->progend)();
 FUNC_1(VAR_3);
 return VAR_5 > 0;
}

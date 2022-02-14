
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {char little_endian; char mulops_calls; char wants_callb; char wants_argb; char left_to_right; char wants_dag; int (* defsymbol ) (TYPE_1__*) ;int stabend; int * stabline; } ;
struct TYPE_9__ {int stabend; int * stabline; } ;
struct TYPE_8__ {void* sclass; void* type; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 TYPE_7__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*,char*) ;
 int * FUNC_6 (char*,char*,int ) ;
 void* FUNC_7 (int ,int *,int) ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_8 (char*,int *,int ,int ) ;
 char* VAR_14 ;
 TYPE_4__ VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 char* FUNC_11 (char*) ;
 char* FUNC_12 (char*,int) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,int *) ;
 int FUNC_15 (char*,int *,int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (int,char**) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

void FUNC_20(int VAR_24, char *VAR_25[]) {
 char *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
 int VAR_28;
 static int VAR_29;

 if (VAR_29)
  return;
 VAR_29 = 1;
 FUNC_19(VAR_24, VAR_25);
 for (VAR_28 = 1; VAR_28 < VAR_24; VAR_28++)
  if (FUNC_10(VAR_25[VAR_28], "-g") == 0 || FUNC_10(VAR_25[VAR_28], "-g2") == 0)
   VAR_12 = 2;
  else if (FUNC_13(VAR_25[VAR_28], "-g", 2) == 0) {
   char *VAR_30 = FUNC_9(VAR_25[VAR_28], ',');
   VAR_12 = FUNC_1(VAR_25[VAR_28]+2);
   if (VAR_30) {
    VAR_9 = VAR_30 + 1;
    if (VAR_12 == 0)
     VAR_12 = 1;
    if (VAR_15.stabline == ((void*)0)) {
     VAR_15.stabline = VAR_4->stabline;
     VAR_15.stabend = VAR_4->stabend;
     VAR_4->stabline = VAR_17;
     VAR_4->stabend = VAR_16;
    }
   }
  } else if (FUNC_10(VAR_25[VAR_28], "-x") == 0)
   VAR_23++;
  else if (FUNC_10(VAR_25[VAR_28], "-A") == 0) {
   ++VAR_0;
  } else if (FUNC_10(VAR_25[VAR_28], "-P") == 0)
   VAR_6++;
  else if (FUNC_10(VAR_25[VAR_28], "-w") == 0)
   VAR_22++;
  else if (FUNC_10(VAR_25[VAR_28], "-n") == 0) {
   if (!VAR_8) {
    VAR_8 = FUNC_8(FUNC_11("_YYnull"), &VAR_13, VAR_3, VAR_5);
    VAR_8->type = FUNC_7(VAR_21, ((void*)0), 1);
    VAR_8->sclass = VAR_2;
    (*VAR_4->defsymbol)(VAR_8);
   }
  } else if (FUNC_13(VAR_25[VAR_28], "-n", 2) == 0) {
   char *VAR_31 = FUNC_9(VAR_25[VAR_28], ',');
   if (VAR_31) {
    VAR_7 = FUNC_8(FUNC_11(VAR_31+1), &VAR_13, VAR_3, VAR_5);
    VAR_7->type = FUNC_7(VAR_21, ((void*)0), 1);
    VAR_7->sclass = VAR_2;
    (*VAR_4->defsymbol)(VAR_7);
    VAR_31 = FUNC_12(VAR_25[VAR_28]+2, VAR_31 - (VAR_25[VAR_28]+2));
   } else
    VAR_31 = FUNC_11(VAR_25[VAR_28]+2);
   VAR_8 = FUNC_8(VAR_31, &VAR_13, VAR_3, VAR_5);
   VAR_8->type = FUNC_7(VAR_21, ((void*)0), 1);
   VAR_8->sclass = VAR_2;
   (*VAR_4->defsymbol)(VAR_8);
  } else if (FUNC_10(VAR_25[VAR_28], "-v") == 0)
   FUNC_5(VAR_18, "%s %s\n", VAR_25[0], VAR_14);
  else if (FUNC_13(VAR_25[VAR_28], "-s", 2) == 0)
   VAR_10 = FUNC_14(&VAR_25[VAR_28][2], ((void*)0));
  else if (FUNC_13(VAR_25[VAR_28], "-errout=", 8) == 0) {
   FILE *VAR_32 = FUNC_4(VAR_25[VAR_28]+8, "w");
   if (VAR_32 == ((void*)0)) {
    FUNC_5(VAR_18, "%s: can't write errors to `%s'\n", VAR_25[0], VAR_25[VAR_28]+8);
    FUNC_2(VAR_1);
   }
   FUNC_3(VAR_32);
   VAR_32 = FUNC_6(VAR_25[VAR_28]+8, "w", VAR_18);
   FUNC_0(VAR_32);
  } else if (FUNC_13(VAR_25[VAR_28], "-e", 2) == 0) {
   int VAR_33;
   if ((VAR_33 = FUNC_15(&VAR_25[VAR_28][2], ((void*)0), 0)) > 0)
    VAR_11 = VAR_33;
  } else if (FUNC_13(VAR_25[VAR_28], "-little_endian=", 15) == 0)
   VAR_4->little_endian = VAR_25[VAR_28][15] - '0';
  else if (FUNC_13(VAR_25[VAR_28], "-mulops_calls=", 18) == 0)
   VAR_4->mulops_calls = VAR_25[VAR_28][18] - '0';
  else if (FUNC_13(VAR_25[VAR_28], "-wants_callb=", 13) == 0)
   VAR_4->wants_callb = VAR_25[VAR_28][13] - '0';
  else if (FUNC_13(VAR_25[VAR_28], "-wants_argb=", 12) == 0)
   VAR_4->wants_argb = VAR_25[VAR_28][12] - '0';
  else if (FUNC_13(VAR_25[VAR_28], "-left_to_right=", 15) == 0)
   VAR_4->left_to_right = VAR_25[VAR_28][15] - '0';
  else if (FUNC_13(VAR_25[VAR_28], "-wants_dag=", 11) == 0)
   VAR_4->wants_dag = VAR_25[VAR_28][11] - '0';
  else if (*VAR_25[VAR_28] != '-' || FUNC_10(VAR_25[VAR_28], "-") == 0) {
   if (VAR_26 == ((void*)0))
    VAR_26 = VAR_25[VAR_28];
   else if (VAR_27 == ((void*)0))
    VAR_27 = VAR_25[VAR_28];
  }

 if (VAR_26 != ((void*)0) && FUNC_10(VAR_26, "-") != 0
 && FUNC_6(VAR_26, "r", VAR_19) == ((void*)0)) {
  FUNC_5(VAR_18, "%s: can't read `%s'\n", VAR_25[0], VAR_26);
  FUNC_2(VAR_1);
 }
 if (VAR_27 != ((void*)0) && FUNC_10(VAR_27, "-") != 0
 && FUNC_6(VAR_27, "w", VAR_20) == ((void*)0)) {
  FUNC_5(VAR_18, "%s: can't write `%s'\n", VAR_25[0], VAR_27);
  FUNC_2(VAR_1);
 }
}

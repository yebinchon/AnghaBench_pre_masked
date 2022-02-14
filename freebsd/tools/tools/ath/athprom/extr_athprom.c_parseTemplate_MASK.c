
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int numPcdacValues; } ;
struct TYPE_5__ {TYPE_1__* pDataPerChannel; } ;
struct TYPE_4__ {int numPdGains; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,long,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 TYPE_2__* VAR_13 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int *,int ) ;
 int FUNC_12 (int *,char*,int,char*) ;
 int FUNC_13 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_14(FILE *VAR_14, FILE *VAR_15)
{
 int VAR_16, VAR_17;
 char VAR_18[VAR_1];
 long VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_10 = 1;
 VAR_3 = 1;
 while ((VAR_16 = FUNC_4(VAR_14)) != VAR_0) {
  if (VAR_16 == '#') {
 skiptoeol:
   while ((VAR_16 = FUNC_4(VAR_14)) != VAR_0 && VAR_16 != '\n')
    ;
   if (VAR_16 == VAR_0)
    return;
   VAR_10++;
   VAR_3 = 1;
   continue;
  }
  if (VAR_16 == '.' && VAR_3) {
   if (FUNC_12(VAR_14, VAR_18, VAR_1, ".directive") == VAR_0)
    return;

   if (FUNC_10(VAR_18, "ifmode") == 0) {
    FUNC_9(VAR_14);
    if (FUNC_12(VAR_14, VAR_18, VAR_1, "id") == VAR_0)
     return;
    FUNC_5(VAR_14, VAR_18);
   } else if (FUNC_10(VAR_18, "endmode") == 0) {

    VAR_7 = -1;
   } else if (FUNC_10(VAR_18, "forchan") == 0) {
    VAR_19 = FUNC_3(VAR_14) - sizeof("forchan");
    if (VAR_4 == -1)
     VAR_4 = 0;
   } else if (FUNC_10(VAR_18, "endforchan") == 0) {
    if (++VAR_4 < VAR_11)
     FUNC_2(VAR_14, VAR_19, VAR_2);
    else
     VAR_4 = -1;
   } else if (FUNC_10(VAR_18, "ifpdgain") == 0) {
    FUNC_9(VAR_14);
    if (FUNC_12(VAR_14, VAR_18, VAR_1, "pdgain") == VAR_0)
     return;
    VAR_6 = FUNC_11(VAR_18, ((void*)0), 0);
    if (VAR_6 >= VAR_13->pDataPerChannel[VAR_4].numPdGains) {
     FUNC_8(VAR_14, "endpdgain");
     VAR_6 = -1;
    } else
     VAR_9 = FUNC_7(VAR_6);
   } else if (FUNC_10(VAR_18, "endpdgain") == 0) {
    VAR_6 = VAR_9 = -1;
   } else if (FUNC_10(VAR_18, "forpdgain") == 0) {
    VAR_20 = FUNC_3(VAR_14) - sizeof("forpdgain");
    if (VAR_6 == -1) {
     FUNC_9(VAR_14);
     if (FUNC_12(VAR_14, VAR_18, VAR_1, "pdgain") == VAR_0)
      return;
     VAR_6 = FUNC_11(VAR_18, ((void*)0), 0);
     if (VAR_6 >= VAR_13->pDataPerChannel[VAR_4].numPdGains) {
      FUNC_8(VAR_14, "endforpdgain");
      VAR_6 = -1;
     } else
      VAR_9 = FUNC_7(VAR_6);
    }
   } else if (FUNC_10(VAR_18, "endforpdgain") == 0) {
    if (++VAR_9 < VAR_13->pDataPerChannel[VAR_4].numPdGains)
     FUNC_2(VAR_14, VAR_20, VAR_2);
    else
     VAR_9 = -1;
   } else if (FUNC_10(VAR_18, "forpcdac") == 0) {
    VAR_22 = FUNC_3(VAR_14) - sizeof("forpcdac");
    if (VAR_8 == -1)
     VAR_8 = 0;
   } else if (FUNC_10(VAR_18, "endforpcdac") == 0) {
    if (++VAR_8 < VAR_12[0].numPcdacValues)
     FUNC_2(VAR_14, VAR_22, VAR_2);
    else
     VAR_8 = -1;
   } else if (FUNC_10(VAR_18, "forctl") == 0) {
    VAR_21 = FUNC_3(VAR_14) - sizeof("forchan");
    if (VAR_5 == -1)
     VAR_5 = FUNC_6(0);
   } else if (FUNC_10(VAR_18, "endforctl") == 0) {
    VAR_5 = FUNC_6(VAR_5+1);
    if (VAR_5 != -1)
     FUNC_2(VAR_14, VAR_21, VAR_2);
   } else {
    FUNC_13("line %d, unknown directive %s ignored",
        VAR_10, VAR_18);
   }
   goto skiptoeol;
  }
  if (VAR_16 == '$') {
   if (FUNC_12(VAR_14, VAR_18, VAR_1, "$var") == VAR_0)
    return;

   FUNC_0(VAR_15, VAR_18);
   continue;
  }
  if (VAR_16 == '\\') {
   VAR_16 = FUNC_4(VAR_14);
   if (VAR_16 == VAR_0)
    return;
  }
  FUNC_1(VAR_16, VAR_15);
  VAR_3 = (VAR_16 == '\n');
  if (VAR_3)
   VAR_10++;
 }
}

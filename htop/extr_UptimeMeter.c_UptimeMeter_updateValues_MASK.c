
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int daysbuf ;
struct TYPE_3__ {int* values; int total; } ;
typedef TYPE_1__ Meter ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_2(Meter* VAR_0, char* VAR_1, int VAR_2) {
   int VAR_3 = FUNC_0();
   if (VAR_3 == -1) {
      FUNC_1(VAR_1, VAR_2, "(unknown)");
      return;
   }
   int VAR_4 = VAR_3 % 60;
   int VAR_5 = (VAR_3/60) % 60;
   int VAR_6 = (VAR_3/3600) % 24;
   int VAR_7 = (VAR_3/86400);
   VAR_0->values[0] = VAR_7;
   if (VAR_7 > VAR_0->total) {
      VAR_0->total = VAR_7;
   }
   char VAR_8[32];
   if (VAR_7 > 100) {
      FUNC_1(VAR_8, sizeof(VAR_8), "%d days(!), ", VAR_7);
   } else if (VAR_7 > 1) {
      FUNC_1(VAR_8, sizeof(VAR_8), "%d days, ", VAR_7);
   } else if (VAR_7 == 1) {
      FUNC_1(VAR_8, sizeof(VAR_8), "1 day, ");
   } else {
      VAR_8[0] = '\0';
   }
   FUNC_1(VAR_1, VAR_2, "%s%02d:%02d:%02d", VAR_8, VAR_6, VAR_5, VAR_4);
}

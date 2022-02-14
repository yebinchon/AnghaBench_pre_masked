
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* values; scalar_t__ mode; } ;
typedef TYPE_1__ Meter ;
typedef scalar_t__ ACPresence ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (double*,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int,char const*,...) ;

__attribute__((used)) static void FUNC_2(Meter * VAR_3, char *VAR_4, int VAR_5) {
   ACPresence VAR_6;
   double VAR_7;

   FUNC_0(&VAR_7, &VAR_6);

   if (VAR_7 == -1) {
      VAR_3->values[0] = 0;
      FUNC_1(VAR_4, VAR_5, "n/a");
      return;
   }

   VAR_3->values[0] = VAR_7;

   const char *VAR_8, *VAR_9, *VAR_10;

   VAR_10 = "%.1f%%";
   if (VAR_3->mode == VAR_2) {
      VAR_8 = "%.1f%% (Running on A/C)";
      VAR_9 = "%.1f%% (Running on battery)";
   } else {
      VAR_8 = "%.1f%%(A/C)";
      VAR_9 = "%.1f%%(bat)";
   }

   if (VAR_6 == VAR_1) {
      FUNC_1(VAR_4, VAR_5, VAR_8, VAR_7);
   } else if (VAR_6 == VAR_0) {
      FUNC_1(VAR_4, VAR_5, VAR_9, VAR_7);
   } else {
      FUNC_1(VAR_4, VAR_5, VAR_10, VAR_7);
   }

   return;
}

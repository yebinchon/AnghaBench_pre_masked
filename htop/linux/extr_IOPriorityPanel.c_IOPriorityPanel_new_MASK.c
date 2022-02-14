
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int Panel ;
typedef int Object ;
typedef scalar_t__ IOPriority ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int,int,int,int,int,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (char*,int,char*,char*,int,char*) ;

Panel* FUNC_10(IOPriority VAR_3) {
   Panel* VAR_4 = FUNC_5(1, 1, 1, 1, 1, FUNC_0(VAR_2), FUNC_1("Set    ", "Cancel "));

   FUNC_6(VAR_4, "IO Priority:");
   FUNC_4(VAR_4, (Object*) FUNC_3("None (based on nice)", VAR_1));
   if (VAR_3 == VAR_1) FUNC_7(VAR_4, 0);
   static const struct { int klass; const char* name; } VAR_5[] = {
      { .klass = 128, .name = "Realtime" },
      { .klass = 129, .name = "Best-effort" },
      { .klass = 0, .name = ((void*)0) }
   };
   for (int VAR_6 = 0; VAR_5[VAR_6].name; VAR_6++) {
      for (int VAR_7 = 0; VAR_7 < 8; VAR_7++) {
         char VAR_8[50];
         FUNC_9(VAR_8, sizeof(VAR_8)-1, "%s %d %s", VAR_5[VAR_6].name, VAR_7, VAR_7 == 0 ? "(High)" : (VAR_7 == 7 ? "(Low)" : ""));
         IOPriority VAR_9 = FUNC_2(VAR_5[VAR_6].klass, VAR_7);
         FUNC_4(VAR_4, (Object*) FUNC_3(VAR_8, VAR_9));
         if (VAR_3 == VAR_9) FUNC_7(VAR_4, FUNC_8(VAR_4) - 1);
      }
   }
   FUNC_4(VAR_4, (Object*) FUNC_3("Idle", VAR_0));
   if (VAR_3 == VAR_0) FUNC_7(VAR_4, FUNC_8(VAR_4) - 1);
   return VAR_4;
}

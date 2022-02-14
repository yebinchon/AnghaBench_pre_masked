
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ jails; } ;
typedef TYPE_1__ DragonFlyBSDProcessList ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (scalar_t__,int,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int VAR_2 ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,size_t*,int *,int ) ;
 char* FUNC_11 (size_t) ;
 char* FUNC_12 (char*) ;

__attribute__((used)) static inline void FUNC_13(DragonFlyBSDProcessList* VAR_3) {
   size_t VAR_4;
   char *VAR_5;
   char *VAR_6;
   char *VAR_7;

   if (FUNC_10("jail.list", ((void*)0), &VAR_4, ((void*)0), 0) == -1) {
      FUNC_6(VAR_2, "initial sysctlbyname / jail.list failed\n");
      FUNC_5(3);
   }
retry:
   if (VAR_4 == 0)
      return;

   VAR_5 = FUNC_11(VAR_4);
   if (VAR_5 == ((void*)0)) {
      FUNC_6(VAR_2, "xMalloc failed\n");
      FUNC_5(4);
   }
   if (FUNC_10("jail.list", VAR_5, &VAR_4, ((void*)0), 0) == -1) {
      if (VAR_1 == VAR_0) {
         FUNC_7(VAR_5);
         goto retry;
      }
      FUNC_6(VAR_2, "sysctlbyname / jail.list failed\n");
      FUNC_5(5);
   }

   if (VAR_3->jails) {
      FUNC_0(VAR_3->jails);
   }
   VAR_3->jails = FUNC_2(20, 1);
   VAR_6 = VAR_5;
   while (VAR_6) {
      int VAR_8;
      char *VAR_9;
      VAR_7 = FUNC_8(VAR_6, '\n');
      if (VAR_7)
         *VAR_7++ = 0;

      VAR_8 = FUNC_4(FUNC_9(VAR_6, " "));
      VAR_9 = FUNC_9(((void*)0), " ");

      char *VAR_10 = (char *) (FUNC_1(VAR_3->jails, VAR_8));
      if (VAR_10 == ((void*)0)) {
         VAR_10 = FUNC_12(VAR_9);
         FUNC_3(VAR_3->jails, VAR_8, VAR_10);
      }

      VAR_6 = VAR_7;
  }
  FUNC_7(VAR_5);
}

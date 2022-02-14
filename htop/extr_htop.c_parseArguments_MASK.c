
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct option {char* member_0; char member_3; int member_2; int const member_1; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {int userId; int sortKey; int delay; int useColors; int treeView; int * pidWhiteList; } ;
typedef TYPE_1__ CommandLineSettings ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned int,void*) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 unsigned int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char**,char*,struct option*,int*) ;

 char* VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char const*) ;

 int FUNC_12 (char*,char*,int*) ;
 int VAR_4 ;
 int FUNC_13 (char*,char*) ;
 char* FUNC_14 (char*,char*,char**) ;
 char* FUNC_15 (char*) ;

__attribute__((used)) static CommandLineSettings FUNC_16(int VAR_5, char** VAR_6) {

   CommandLineSettings VAR_7 = {
      .pidWhiteList = ((void*)0),
      .userId = -1,
      .sortKey = 0,
      .delay = -1,
      .useColors = 1,
      .treeView = 0,
   };

   static struct option VAR_8[] =
   {
      {"help", 129, 0, 'h'},
      {"version", 129, 0, 'v'},
      {"delay", 128, 0, 'd'},
      {"sort-key", 128, 0, 's'},
      {"user", 128, 0, 'u'},
      {"no-color", 129, 0, 'C'},
      {"no-colour",129, 0, 'C'},
      {"tree", 129, 0, 't'},
      {"pid", 128, 0, 'p'},
      {0,0,0,0}
   };

   int VAR_9, VAR_10=0;

   while ((VAR_9 = FUNC_8(VAR_5, VAR_6, "hvCs:td:u:p:", VAR_8, &VAR_10))) {
      if (VAR_9 == VAR_0) break;
      switch (VAR_9) {
         case 'h':
            FUNC_9();
            break;
         case 'v':
            FUNC_10();
            break;
         case 's':
            if (FUNC_13(VAR_3, "help") == 0) {
               for (int VAR_11 = 1; VAR_11 < VAR_1; VAR_11++) {
                  const char* VAR_12 = VAR_2[VAR_11].name;
                  if (VAR_12) FUNC_11 ("%s\n", VAR_12);
               }
               FUNC_5(0);
            }
            VAR_7.sortKey = FUNC_1(VAR_3);
            if (VAR_7.sortKey == -1) {
               FUNC_6(VAR_4, "Error: invalid column \"%s\".\n", VAR_3);
            }
            break;
         case 'd':
            if (FUNC_12(VAR_3, "%16d", &(VAR_7.delay)) == 1) {
               if (VAR_7.delay < 1) VAR_7.delay = 1;
               if (VAR_7.delay > 100) VAR_7.delay = 100;
            } else {
               FUNC_6(VAR_4, "Error: invalid delay value \"%s\".\n", VAR_3);
            }
            break;
         case 'u':
            if (!FUNC_0(VAR_3, &(VAR_7.userId))) {
               FUNC_6(VAR_4, "Error: invalid user \"%s\".\n", VAR_3);
            }
            break;
         case 'C':
            VAR_7.useColors = 0;
            break;
         case 't':
            VAR_7.treeView = 1;
            break;
         case 'p': {
            char* VAR_13 = FUNC_15(VAR_3);
            char* VAR_14;
            char* VAR_15 = FUNC_14(VAR_13, ",", &VAR_14);

            if(!VAR_7.pidWhiteList) {
               VAR_7.pidWhiteList = FUNC_2(8, 0);
            }

            while(VAR_15) {
                unsigned int VAR_16 = FUNC_4(VAR_15);
                FUNC_3(VAR_7.pidWhiteList, VAR_16, (void *) 1);
                VAR_15 = FUNC_14(((void*)0), ",", &VAR_14);
            }
            FUNC_7(VAR_13);

            break;
         }
         default:
            FUNC_5(1);
      }
   }
   return VAR_7;
}

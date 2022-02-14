
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int direction; int hideThreads; int shadowOtherUsers; int showThreadNames; int hideKernelThreads; int hideUserlandThreads; int treeView; int highlightBaseName; int highlightMegabytes; int detailedCPUTime; int countCPUsFromZero; int updateProcessNames; int cpuCount; int showProgramPath; int highlightThreads; int* fields; char* filename; int changed; int headerMargin; int delay; scalar_t__ colorScheme; int flags; int sortKey; } ;
typedef TYPE_1__ Settings ;
typedef int ProcessField ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 TYPE_6__* VAR_4 ;
 char const* VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 void* FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (char*) ;
 int FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (char*) ;
 void* FUNC_12 (int,int) ;
 void* FUNC_13 (char const*) ;

Settings* FUNC_14(int VAR_6) {

   Settings* VAR_7 = FUNC_12(1, sizeof(Settings));

   VAR_7->sortKey = VAR_1;
   VAR_7->direction = 1;
   VAR_7->hideThreads = 0;
   VAR_7->shadowOtherUsers = 0;
   VAR_7->showThreadNames = 0;
   VAR_7->hideKernelThreads = 0;
   VAR_7->hideUserlandThreads = 0;
   VAR_7->treeView = 0;
   VAR_7->highlightBaseName = 0;
   VAR_7->highlightMegabytes = 0;
   VAR_7->detailedCPUTime = 0;
   VAR_7->countCPUsFromZero = 0;
   VAR_7->updateProcessNames = 0;
   VAR_7->cpuCount = VAR_6;
   VAR_7->showProgramPath = 1;
   VAR_7->highlightThreads = 1;

   VAR_7->fields = FUNC_12(VAR_3+1, sizeof(ProcessField));


   VAR_7->flags = 0;
   ProcessField* VAR_8 = VAR_2;
   for (int VAR_9 = 0; VAR_8[VAR_9]; VAR_9++) {
      VAR_7->fields[VAR_9] = VAR_8[VAR_9];
      VAR_7->flags |= VAR_4[VAR_8[VAR_9]].flags;
   }

   char* VAR_10 = ((void*)0);
   char* VAR_11 = FUNC_8("HTOPRC");
   if (VAR_11) {
      VAR_7->filename = FUNC_13(VAR_11);
   } else {
      const char* VAR_12 = FUNC_8("HOME");
      if (!VAR_12) VAR_12 = "";
      const char* VAR_13 = FUNC_8("XDG_CONFIG_HOME");
      char* VAR_14 = ((void*)0);
      char* VAR_15 = ((void*)0);
      if (VAR_13) {
         VAR_7->filename = FUNC_6(VAR_13, "/htop/htoprc");
         VAR_14 = FUNC_13(VAR_13);
         VAR_15 = FUNC_6(VAR_13, "/htop");
      } else {
         VAR_7->filename = FUNC_6(VAR_12, "/.config/htop/htoprc");
         VAR_14 = FUNC_6(VAR_12, "/.config");
         VAR_15 = FUNC_6(VAR_12, "/.config/htop");
      }
      VAR_10 = FUNC_6(VAR_12, "/.htoprc");

      FUNC_0();
      (void) FUNC_10(VAR_14, 0700);
      (void) FUNC_10(VAR_15, 0700);
      FUNC_7(VAR_15);
      FUNC_7(VAR_14);
      struct stat VAR_16;
      int VAR_17 = FUNC_9(VAR_10, &VAR_16);
      if (VAR_17 || FUNC_2(VAR_16.st_mode)) {
         FUNC_7(VAR_10);
         VAR_10 = ((void*)0);
      }
      FUNC_1();
   }
   VAR_7->colorScheme = 0;
   VAR_7->changed = 0;
   VAR_7->delay = VAR_0;
   bool VAR_18 = 0;
   if (VAR_10) {
      VAR_18 = FUNC_4(VAR_7, VAR_10);
      if (VAR_18) {

         if (FUNC_5(VAR_7))
            FUNC_11(VAR_10);
      }
      FUNC_7(VAR_10);
   }
   if (!VAR_18) {
      VAR_18 = FUNC_4(VAR_7, VAR_7->filename);
   }
   if (!VAR_18) {
      VAR_7->changed = 1;

      char* VAR_19 = FUNC_6(VAR_5, "/htoprc");
      VAR_18 = FUNC_4(VAR_7, VAR_19);
      FUNC_7(VAR_19);
   }
   if (!VAR_18) {
      FUNC_3(VAR_7);
      VAR_7->hideKernelThreads = 1;
      VAR_7->highlightMegabytes = 1;
      VAR_7->highlightThreads = 1;
      VAR_7->headerMargin = 1;
   }
   return VAR_7;
}

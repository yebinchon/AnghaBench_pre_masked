
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ colorScheme; void* delay; void* accountGuestInCPUMeter; void* updateProcessNames; void* countCPUsFromZero; void* detailedCPUTime; void* headerMargin; void* highlightThreads; void* highlightMegabytes; void* highlightBaseName; void* showProgramPath; void* showThreadNames; void* shadowOtherUsers; void* hideUserlandThreads; void* hideKernelThreads; void* hideThreads; void* treeView; void* direction; void* sortKey; int flags; int fields; } ;
typedef TYPE_1__ Settings ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char**) ;
 char* FUNC_7 (int *) ;
 char** FUNC_8 (char*,char,int*) ;
 void* FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char const*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int *,char*) ;

__attribute__((used)) static bool FUNC_14(Settings* VAR_1, const char* VAR_2) {
   FILE* VAR_3;

   FUNC_0();
   VAR_3 = FUNC_11(VAR_2, "r");
   FUNC_1();
   if (!VAR_3)
      return 0;

   bool VAR_4 = 0;
   bool VAR_5 = 0;
   for (;;) {
      char* VAR_6 = FUNC_7(VAR_3);
      if (!VAR_6) {
         break;
      }
      int VAR_7;
      char** VAR_8 = FUNC_8(VAR_6, '=', &VAR_7);
      FUNC_12 (VAR_6);
      if (VAR_7 < 2) {
         FUNC_6(VAR_8);
         continue;
      }
      if (FUNC_5(VAR_8[0], "fields")) {
         FUNC_13(VAR_1->fields, &(VAR_1->flags), VAR_8[1]);
         VAR_5 = 1;
      } else if (FUNC_5(VAR_8[0], "sort_key")) {

         VAR_1->sortKey = FUNC_9(VAR_8[1]) + 1;
      } else if (FUNC_5(VAR_8[0], "sort_direction")) {
         VAR_1->direction = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "tree_view")) {
         VAR_1->treeView = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "hide_threads")) {
         VAR_1->hideThreads = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "hide_kernel_threads")) {
         VAR_1->hideKernelThreads = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "hide_userland_threads")) {
         VAR_1->hideUserlandThreads = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "shadow_other_users")) {
         VAR_1->shadowOtherUsers = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "show_thread_names")) {
         VAR_1->showThreadNames = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "show_program_path")) {
         VAR_1->showProgramPath = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "highlight_base_name")) {
         VAR_1->highlightBaseName = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "highlight_megabytes")) {
         VAR_1->highlightMegabytes = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "highlight_threads")) {
         VAR_1->highlightThreads = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "header_margin")) {
         VAR_1->headerMargin = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "expand_system_time")) {

         VAR_1->detailedCPUTime = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "detailed_cpu_time")) {
         VAR_1->detailedCPUTime = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "cpu_count_from_zero")) {
         VAR_1->countCPUsFromZero = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "update_process_names")) {
         VAR_1->updateProcessNames = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "account_guest_in_cpu_meter")) {
         VAR_1->accountGuestInCPUMeter = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "delay")) {
         VAR_1->delay = FUNC_9(VAR_8[1]);
      } else if (FUNC_5(VAR_8[0], "color_scheme")) {
         VAR_1->colorScheme = FUNC_9(VAR_8[1]);
         if (VAR_1->colorScheme < 0 || VAR_1->colorScheme >= VAR_0) VAR_1->colorScheme = 0;
      } else if (FUNC_5(VAR_8[0], "left_meters")) {
         FUNC_4(VAR_1, VAR_8[1], 0);
         VAR_4 = 1;
      } else if (FUNC_5(VAR_8[0], "right_meters")) {
         FUNC_4(VAR_1, VAR_8[1], 1);
         VAR_4 = 1;
      } else if (FUNC_5(VAR_8[0], "left_meter_modes")) {
         FUNC_3(VAR_1, VAR_8[1], 0);
         VAR_4 = 1;
      } else if (FUNC_5(VAR_8[0], "right_meter_modes")) {
         FUNC_3(VAR_1, VAR_8[1], 1);
         VAR_4 = 1;
      }
      FUNC_6(VAR_8);
   }
   FUNC_10(VAR_3);
   if (!VAR_4) {
      FUNC_2(VAR_1);
   }
   return VAR_5;
}

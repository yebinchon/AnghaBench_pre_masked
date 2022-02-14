
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_7__ {int * data; } ;
struct TYPE_6__ {TYPE_3__ data; struct TYPE_6__* next; } ;
struct TYPE_5__ {int error; TYPE_2__* files; TYPE_3__ data; } ;
typedef TYPE_1__ OpenFiles_ProcessData ;
typedef TYPE_2__ OpenFiles_FileData ;
typedef TYPE_3__ OpenFiles_Data ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int,int*,int ) ;
 void* FUNC_13 (int,int) ;
 int FUNC_14 (char*,int,char*,int) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static OpenFiles_ProcessData* FUNC_16(pid_t VAR_3) {
   char VAR_4[1025];
   FUNC_14(VAR_4, 1024, "%d", VAR_3);
   OpenFiles_ProcessData* VAR_5 = FUNC_13(1, sizeof(OpenFiles_ProcessData));
   OpenFiles_FileData* VAR_6 = ((void*)0);
   OpenFiles_Data* VAR_7 = &(VAR_5->data);
   int VAR_8[2];
   if (FUNC_11(VAR_8) == -1) {
      VAR_5->error = 1;
      return VAR_5;
   }
   pid_t VAR_9 = FUNC_8();
   if (VAR_9 == -1) {
      VAR_5->error = 1;
      return VAR_5;
   }
   if (VAR_9 == 0) {
      FUNC_3(VAR_8[0]);
      FUNC_4(VAR_8[1], VAR_2);
      FUNC_3(VAR_8[1]);
      int VAR_10 = FUNC_10("/dev/null", VAR_0);
      if (VAR_10 < 0)
         FUNC_6(1);
      FUNC_4(VAR_10, VAR_1);
      FUNC_3(VAR_10);
      FUNC_5("lsof", "lsof", "-P", "-p", VAR_4, "-F", ((void*)0));
      FUNC_6(127);
   }
   FUNC_3(VAR_8[1]);
   FILE* VAR_11 = FUNC_7(VAR_8[0], "r");
   for (;;) {
      char* VAR_12 = FUNC_0(VAR_11);
      if (!VAR_12) {
         break;
      }
      unsigned char VAR_13 = VAR_12[0];
      if (VAR_13 == 'f') {
         OpenFiles_FileData* VAR_14 = FUNC_13(1, sizeof(OpenFiles_FileData));
         if (VAR_6 == ((void*)0)) {
            VAR_5->files = VAR_14;
         } else {
            VAR_6->next = VAR_14;
         }
         VAR_6 = VAR_14;
         VAR_7 = &(VAR_6->data);
      }
      VAR_7->data[VAR_13] = FUNC_15(VAR_12 + 1);
      FUNC_9(VAR_12);
   }
   int VAR_15;
   if (FUNC_12(VAR_9, &VAR_15, 0) == -1) {
      VAR_5->error = 1;
      return VAR_5;
   }
   if (!FUNC_2(VAR_15))
      VAR_5->error = 1;
   else
      VAR_5->error = FUNC_1(VAR_15);
   return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_18__ {int lines; TYPE_1__* display; } ;
struct TYPE_17__ {int pid; } ;
struct TYPE_14__ {char** data; } ;
struct TYPE_16__ {int error; TYPE_10__ data; struct TYPE_16__* next; struct TYPE_16__* files; } ;
struct TYPE_15__ {int items; } ;
typedef TYPE_1__ Panel ;
typedef TYPE_2__ OpenFiles_ProcessData ;
typedef TYPE_2__ OpenFiles_FileData ;
typedef TYPE_4__ OpenFilesScreen ;
typedef TYPE_5__ InfoScreen ;


 int FUNC_0 (TYPE_5__*,char*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,char*,char*,char*,char*,char*,char*) ;

void FUNC_10(InfoScreen* VAR_0) {
   Panel* VAR_1 = VAR_0->display;
   int VAR_2 = FUNC_3(VAR_1);
   FUNC_4(VAR_1);
   OpenFiles_ProcessData* VAR_3 = FUNC_1(((OpenFilesScreen*)VAR_0)->pid);
   if (VAR_3->error == 127) {
      FUNC_0(VAR_0, "Could not execute 'lsof'. Please make sure it is available in your $PATH.");
   } else if (VAR_3->error == 1) {
      FUNC_0(VAR_0, "Failed listing open files.");
   } else {
      OpenFiles_FileData* VAR_4 = VAR_3->files;
      while (VAR_4) {
         char** VAR_5 = VAR_4->data.data;
         int VAR_6 = VAR_5['n'] ? FUNC_8(VAR_5['n']) : 0;
         int VAR_7 = 5 + 7 + 10 + 10 + 10 + VAR_6 + 5 + 1 ;
         char VAR_8[VAR_7];
         FUNC_9(VAR_8, VAR_7, "%5.5s %7.7s %10.10s %10.10s %10.10s %s",
            VAR_5['f'] ? VAR_5['f'] : "",
            VAR_5['t'] ? VAR_5['t'] : "",
            VAR_5['D'] ? VAR_5['D'] : "",
            VAR_5['s'] ? VAR_5['s'] : "",
            VAR_5['i'] ? VAR_5['i'] : "",
            VAR_5['n'] ? VAR_5['n'] : "");
         FUNC_0(VAR_0, VAR_8);
         FUNC_2(&VAR_4->data);
         OpenFiles_FileData* VAR_9 = VAR_4;
         VAR_4 = VAR_4->next;
         FUNC_7(VAR_9);
      }
      FUNC_2(&VAR_3->data);
   }
   FUNC_7(VAR_3);
   FUNC_6(VAR_0->lines);
   FUNC_6(VAR_1->items);
   FUNC_5(VAR_1, VAR_2);
}

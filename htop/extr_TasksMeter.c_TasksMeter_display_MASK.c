
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_6__ {scalar_t__* values; TYPE_1__* pl; } ;
struct TYPE_5__ {int hideKernelThreads; int hideUserlandThreads; scalar_t__ highlightThreads; } ;
struct TYPE_4__ {TYPE_2__* settings; } ;
typedef TYPE_2__ Settings ;
typedef int RichString ;
typedef int Object ;
typedef TYPE_3__ Meter ;


 int* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int,char*) ;
 size_t VAR_5 ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void FUNC_3(Object* VAR_6, RichString* VAR_7) {
   Meter* VAR_8 = (Meter*)VAR_6;
   Settings* VAR_9 = VAR_8->pl->settings;
   char VAR_10[20];

   int VAR_11 = (int) VAR_8->values[2];

   FUNC_2(VAR_10, sizeof(VAR_10), "%d", VAR_11);
   FUNC_1(VAR_7, VAR_0[VAR_2], VAR_10);
   int VAR_12 = VAR_0[VAR_2];
   int VAR_13 = VAR_0[VAR_1];
   if (VAR_9->highlightThreads) {
      VAR_12 = VAR_0[VAR_4];
      VAR_13 = VAR_0[VAR_3];
   }
   if (!VAR_9->hideUserlandThreads) {
      FUNC_0(VAR_7, VAR_0[VAR_1], ", ");
      FUNC_2(VAR_10, sizeof(VAR_10), "%d", (int)VAR_8->values[1]);
      FUNC_0(VAR_7, VAR_12, VAR_10);
      FUNC_0(VAR_7, VAR_13, " thr");
   }
   if (!VAR_9->hideKernelThreads) {
      FUNC_0(VAR_7, VAR_0[VAR_1], ", ");
      FUNC_2(VAR_10, sizeof(VAR_10), "%d", (int)VAR_8->values[0]);
      FUNC_0(VAR_7, VAR_12, VAR_10);
      FUNC_0(VAR_7, VAR_13, " kthr");
   }
   FUNC_0(VAR_7, VAR_0[VAR_1], "; ");
   FUNC_2(VAR_10, sizeof(VAR_10), "%d", (int)VAR_8->values[3]);
   FUNC_0(VAR_7, VAR_0[VAR_5], VAR_10);
   FUNC_0(VAR_7, VAR_0[VAR_1], " running");
}

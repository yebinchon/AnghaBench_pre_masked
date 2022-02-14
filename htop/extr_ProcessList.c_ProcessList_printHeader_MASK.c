
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* title; } ;
struct TYPE_6__ {TYPE_1__* settings; } ;
struct TYPE_5__ {int* fields; int sortKey; int treeView; } ;
typedef int RichString ;
typedef TYPE_2__ ProcessList ;
typedef int ProcessField ;


 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int *) ;

void FUNC_2(ProcessList* VAR_4, RichString* VAR_5) {
   FUNC_1(VAR_5);
   ProcessField* VAR_6 = VAR_4->settings->fields;
   for (int VAR_7 = 0; VAR_6[VAR_7]; VAR_7++) {
      const char* VAR_8 = VAR_3[VAR_6[VAR_7]].title;
      if (!VAR_8) VAR_8 = "- ";
      if (!VAR_4->settings->treeView && VAR_4->settings->sortKey == VAR_6[VAR_7])
         FUNC_0(VAR_5, VAR_0[VAR_2], VAR_8);
      else
         FUNC_0(VAR_5, VAR_0[VAR_1], VAR_8);
   }
}

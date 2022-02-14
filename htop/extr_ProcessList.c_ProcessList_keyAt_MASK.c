
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* title; } ;
struct TYPE_6__ {TYPE_1__* settings; } ;
struct TYPE_5__ {size_t* fields; } ;
typedef TYPE_2__ ProcessList ;
typedef size_t ProcessField ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (char const*) ;

ProcessField FUNC_1(ProcessList* VAR_2, int VAR_3) {
   int VAR_4 = 0;
   ProcessField* VAR_5 = VAR_2->settings->fields;
   ProcessField VAR_6;
   for (int VAR_7 = 0; (VAR_6 = VAR_5[VAR_7]); VAR_7++) {
      const char* VAR_8 = VAR_1[VAR_6].title;
      if (!VAR_8) VAR_8 = "- ";
      int VAR_9 = FUNC_0(VAR_8);
      if (VAR_3 >= VAR_4 && VAR_3 <= VAR_4 + VAR_9) {
         return VAR_6;
      }
      VAR_4 += VAR_9;
   }
   return VAR_0;
}

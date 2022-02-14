
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* comm; int basenameOffset; TYPE_1__* settings; } ;
struct TYPE_4__ {scalar_t__ highlightBaseName; scalar_t__ showProgramPath; } ;
typedef int RichString ;
typedef TYPE_2__ Process ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(Process* VAR_0, int VAR_1, int VAR_2, RichString* VAR_3) {
   int VAR_4 = FUNC_2(VAR_3), VAR_5 = 0;
   char* VAR_6 = VAR_0->comm;

   if (VAR_0->settings->highlightBaseName || !VAR_0->settings->showProgramPath) {
      int VAR_7, VAR_8 = 0;
      for (VAR_7 = 0; VAR_7 < VAR_0->basenameOffset; VAR_7++) {
         if (VAR_6[VAR_7] == '/') {
            VAR_8 = VAR_7 + 1;
         } else if (VAR_6[VAR_7] == ':') {
            VAR_5 = VAR_7 + 1;
            break;
         }
      }
      if (!VAR_5) {
         if (VAR_0->settings->showProgramPath)
            VAR_4 += VAR_8;
         else
            VAR_6 += VAR_8;
         VAR_5 = VAR_0->basenameOffset - VAR_8;
      }
      VAR_5 += VAR_4 - 1;
   }

   FUNC_0(VAR_3, VAR_1, VAR_6);

   if (VAR_0->settings->highlightBaseName)
      FUNC_1(VAR_3, VAR_2, VAR_4, VAR_5);
}

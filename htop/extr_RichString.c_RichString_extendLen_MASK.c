
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chlen; int chptr; int chstr; } ;
typedef TYPE_1__ RichString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(RichString* VAR_1, int VAR_2) {
   if (VAR_1->chlen <= VAR_0) {
      if (VAR_2 > VAR_0) {
         VAR_1->chptr = FUNC_4(FUNC_1(VAR_2 + 1));
         FUNC_3(VAR_1->chptr, VAR_1->chstr, FUNC_1(VAR_1->chlen));
      }
   } else {
      if (VAR_2 <= VAR_0) {
         FUNC_3(VAR_1->chstr, VAR_1->chptr, FUNC_1(VAR_2));
         FUNC_2(VAR_1->chptr);
         VAR_1->chptr = VAR_1->chstr;
      } else {
         VAR_1->chptr = FUNC_5(VAR_1->chptr, FUNC_1(VAR_2 + 1));
      }
   }

   FUNC_0(VAR_1, VAR_2, 0);
   VAR_1->chlen = VAR_2;
}

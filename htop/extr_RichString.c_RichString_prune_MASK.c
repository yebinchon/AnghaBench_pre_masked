
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ chlen; int chstr; int chptr; } ;
typedef TYPE_1__ RichString ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(RichString* VAR_1) {
   if (VAR_1->chlen > VAR_0)
      FUNC_0(VAR_1->chptr);
   FUNC_1(VAR_1, 0, sizeof(RichString));
   VAR_1->chptr = VAR_1->chstr;
}

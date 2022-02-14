
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Settings_ {int dummy; } ;
struct TYPE_3__ {int tag; int showChildren; int show; int updated; int basenameOffset; struct Settings_* settings; } ;
typedef TYPE_1__ Process ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(Process* VAR_1, struct Settings_* VAR_2) {
   VAR_1->settings = VAR_2;
   VAR_1->tag = 0;
   VAR_1->showChildren = 1;
   VAR_1->show = 1;
   VAR_1->updated = 0;
   VAR_1->basenameOffset = -1;
   if (VAR_0 == -1) VAR_0 = FUNC_0();
}

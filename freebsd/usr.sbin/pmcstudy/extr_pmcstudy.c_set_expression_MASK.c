
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int number; char* cputype; TYPE_1__* ents; } ;
struct TYPE_3__ {char* name; scalar_t__ counters_required; int thresh; int command; int func; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(const char *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 for(VAR_8=0 ; VAR_8< VAR_4.number; VAR_8++) {
  if (FUNC_2(VAR_6, VAR_4.ents[VAR_8].name) == 0) {
   VAR_7 = 1;
   VAR_1 = VAR_4.ents[VAR_8].func;
   VAR_0 = VAR_4.ents[VAR_8].command;
   VAR_5 = VAR_4.ents[VAR_8].thresh;
   if (VAR_4.ents[VAR_8].counters_required > VAR_2) {
    FUNC_1("Test %s requires that the CPU have %d counters and this CPU has only %d\n",
           VAR_4.ents[VAR_8].name,
           VAR_4.ents[VAR_8].counters_required, VAR_2);
    FUNC_1("Sorry this test can not be run\n");
    if (VAR_3 == 0) {
     FUNC_0(-1);
    } else {
     return(-1);
    }
   }
   break;
  }
 }
 if (!VAR_7) {
  FUNC_1("For CPU type %s we have no expression:%s\n",
         VAR_4.cputype, VAR_6);
  FUNC_0(-1);
 }
 return(0);
}

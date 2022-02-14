
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t pa_plugin; } ;
struct TYPE_3__ {int (* pl_configure ) (char*) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

void
FUNC_4(char *VAR_4)
{

 if (FUNC_2(VAR_4, "threshold=", 10) == 0) {
  VAR_3 = FUNC_0(VAR_4+10);
 } else {
  if (VAR_2[VAR_1.pa_plugin].pl_configure != ((void*)0)) {
   if (!VAR_2[VAR_1.pa_plugin].pl_configure(VAR_4))
    FUNC_1(VAR_0,
        "ERROR: unknown option <%s>.", VAR_4);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int showChildren; } ;
typedef TYPE_1__ Process ;
typedef int Panel ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(Panel* VAR_0) {
   Process* VAR_1 = (Process*) FUNC_0(VAR_0);
   if (!VAR_1) return 0;
   VAR_1->showChildren = !VAR_1->showChildren;
   return 1;
}

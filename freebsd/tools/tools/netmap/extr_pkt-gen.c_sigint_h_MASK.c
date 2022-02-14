
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cancel; } ;


 int FUNC_0 (char*,void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_2(int VAR_2)
{
 int VAR_3;

 (void)VAR_2;
 FUNC_0("received control-C on thread %p", (void *)FUNC_1());
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1[VAR_3].cancel = 1;
 }
}

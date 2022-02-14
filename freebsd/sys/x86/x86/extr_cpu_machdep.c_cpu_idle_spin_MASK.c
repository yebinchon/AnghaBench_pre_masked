
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sbintime_t ;
struct TYPE_2__ {int idle_state; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(sbintime_t VAR_2)
{
 int *VAR_3;
 int VAR_4;

 VAR_3 = &FUNC_0(VAR_1)->idle_state;
 FUNC_1(VAR_3, VAR_0);






 for (VAR_4 = 0; VAR_4 < 1000; VAR_4++) {
  if (FUNC_3())
   return;
  FUNC_2();
 }
}

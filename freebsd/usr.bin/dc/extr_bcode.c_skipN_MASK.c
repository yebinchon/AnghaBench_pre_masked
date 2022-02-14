
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct number {int dummy; } ;
struct TYPE_2__ {scalar_t__ readsp; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (struct number*) ;
 struct number* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct number *VAR_2;
 u_long VAR_3;

 VAR_2 = FUNC_1();
 if (VAR_2 == ((void*)0))
  return;
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == VAR_0)
  FUNC_4("J command requires a number >= 0");
 else if (VAR_3 > 0 && VAR_1.readsp < VAR_3)
  FUNC_4("J command argument exceeded string execution depth");
 else {
  while (VAR_3-- > 0) {
   FUNC_3();
   VAR_1.readsp--;
  }
  FUNC_2();
 }
}

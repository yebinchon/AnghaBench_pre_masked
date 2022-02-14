
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef scalar_t__ u_int ;
struct number {int number; } ;
struct TYPE_2__ {scalar_t__ scale; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (struct number*) ;
 scalar_t__ FUNC_2 (struct number*) ;
 struct number* FUNC_3 () ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct number *VAR_3;
 u_long VAR_4;

 VAR_3 = FUNC_3();
 if (VAR_3 != ((void*)0)) {
  if (FUNC_0(VAR_3->number))
   FUNC_4("scale must be a nonnegative number");
  else {
   VAR_4 = FUNC_2(VAR_3);
   if (VAR_4 != VAR_1 && VAR_4 <= VAR_0)
    VAR_2.scale = (u_int)VAR_4;
   else
    FUNC_4("scale too large");
   }
  FUNC_1(VAR_3);
 }
}

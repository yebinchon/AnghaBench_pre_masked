
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_int ;
struct number {int dummy; } ;
struct TYPE_2__ {scalar_t__ ibase; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct number*) ;
 int FUNC_1 (struct number*) ;
 struct number* FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct number *VAR_2;
 u_long VAR_3;

 VAR_2 = FUNC_2();
 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 != VAR_0 && 2 <= VAR_3 && VAR_3 <= 16)
   VAR_1.ibase = (u_int)VAR_3;
  else
   FUNC_3("input base must be a number between 2 and 16 "
       "(inclusive)");
  FUNC_0(VAR_2);
 }
}

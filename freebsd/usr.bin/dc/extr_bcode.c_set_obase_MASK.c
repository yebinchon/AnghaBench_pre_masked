
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_int ;
struct number {int dummy; } ;
struct TYPE_2__ {scalar_t__ obase; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct number*) ;
 int FUNC_1 (struct number*) ;
 struct number* FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct number *VAR_3;
 u_long VAR_4;

 VAR_3 = FUNC_2();
 if (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 != VAR_1 && VAR_4 > 1 && VAR_4 <= VAR_0)
   VAR_2.obase = (u_int)VAR_4;
  else
   FUNC_3("output base must be a number greater than 1");
  FUNC_0(VAR_3);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_4 ;

int
FUNC_3(int VAR_5)
{
    if (VAR_2 || FUNC_2(VAR_5) < 0) {
 FUNC_0(0);
 VAR_2 = 0;

 if (VAR_4) {
     if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
  FUNC_1(" -- write timed out");
     else
  FUNC_1(" -- write failed: %m");
 }
 return (0);
    }
    return (1);
}

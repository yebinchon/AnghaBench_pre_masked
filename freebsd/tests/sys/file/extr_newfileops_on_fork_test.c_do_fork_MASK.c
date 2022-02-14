
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,int *,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_4;

 VAR_4 = FUNC_3();
 if (VAR_4 < 0)
  FUNC_0(1, "fork");
 if (VAR_4 > 0) {
  FUNC_5(VAR_4, ((void*)0), 0);
  FUNC_2(0);
 }






 if (FUNC_4(VAR_3 + 1, 0) < 0) {
  if (VAR_2 == VAR_0)
   FUNC_2(0);
  else if (VAR_2 == VAR_1)
   FUNC_1(1, "file descriptor still open in child");
  else
   FUNC_0(1, "unexpected error");
 } else
  FUNC_1(1, "ftruncate succeeded");
}

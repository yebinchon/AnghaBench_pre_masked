
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(int VAR_5)
{
 (void)VAR_5;
 for (;;) {
  int VAR_6 = FUNC_0(-1, ((void*)0), VAR_1);
  if (VAR_4 == VAR_6) {
   VAR_2 = 1;
   break;
  } else if (VAR_6 == -1 && VAR_3 != VAR_0) {
   FUNC_1("waitpid");
   return;
  }
 }
}

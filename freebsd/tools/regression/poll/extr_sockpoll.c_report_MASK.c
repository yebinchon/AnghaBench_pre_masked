
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(int VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_3 == VAR_4)
  FUNC_2("ok %-2d    ", VAR_1);
 else
  FUNC_2("not ok %-2d", VAR_1);
 FUNC_2(" state %s: expected %s; got %s\n",
     VAR_2, FUNC_0(VAR_3), FUNC_0(VAR_4));
 FUNC_1(VAR_0);
}

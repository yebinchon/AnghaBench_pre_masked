
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*,...) ;
 char const* FUNC_2 (scalar_t__) ;

void
FUNC_3(const char *VAR_2)
{
 if (VAR_2 == ((void*)0))
  FUNC_1(VAR_0, "fatal: %s", FUNC_2(VAR_1));
 else
  if (VAR_1)
   FUNC_1(VAR_0, "fatal: %s: %s",
       VAR_2, FUNC_2(VAR_1));
  else
   FUNC_1(VAR_0, "fatal: %s", VAR_2);

 FUNC_0(1);
}

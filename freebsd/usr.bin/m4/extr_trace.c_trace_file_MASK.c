
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_3(const char *VAR_2)
{

 if (VAR_1 && VAR_1 != VAR_0)
  FUNC_1(VAR_1);
 VAR_1 = FUNC_2(VAR_2, "w");
 if (!VAR_1)
  FUNC_0(1, "can't open %s", VAR_2);
}

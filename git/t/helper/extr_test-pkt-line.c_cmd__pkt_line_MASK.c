
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char const**) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(int VAR_0, const char **VAR_1)
{
 if (VAR_0 < 2)
  FUNC_0("too few arguments");

 if (!FUNC_2(VAR_1[1], "pack"))
  FUNC_1(VAR_0 - 2, VAR_1 + 2);
 else if (!FUNC_2(VAR_1[1], "unpack"))
  FUNC_3();
 else if (!FUNC_2(VAR_1[1], "unpack-sideband"))
  FUNC_4();
 else
  FUNC_0("invalid argument '%s'", VAR_1[1]);

 return 0;
}

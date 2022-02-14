
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_0)
{
 static int VAR_1 = -1;
 if (VAR_1 == -1)
  VAR_1 = FUNC_0();

 return VAR_1 ? FUNC_2(VAR_0) : FUNC_1(VAR_0);
}

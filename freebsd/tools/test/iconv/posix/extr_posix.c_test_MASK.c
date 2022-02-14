
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_1(int (VAR_0) (void), const char * VAR_1)
{
 int VAR_2;

 if ((VAR_2 = VAR_0()))
  FUNC_0("%s failed (%d)\n", VAR_1, VAR_2);
 else
  FUNC_0("%s succeeded\n", VAR_1);
}

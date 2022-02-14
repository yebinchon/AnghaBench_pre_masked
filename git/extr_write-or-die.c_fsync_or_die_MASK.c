
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(int VAR_0, const char *VAR_1)
{
 if (FUNC_1(VAR_0) < 0) {
  FUNC_0("fsync error on '%s'", VAR_1);
 }
}

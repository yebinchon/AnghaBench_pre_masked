
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, const char *VAR_2)
{
 if (!VAR_0)
  VAR_2 = "access denied or repository not exported";
 FUNC_0(1, "ERR %s: %s", VAR_2, VAR_1);
 return -1;
}

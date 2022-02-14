
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return 0;
 VAR_1 = *VAR_0 & 0xff;
 return (FUNC_0(VAR_1) || VAR_1 == '_' || VAR_1 == '$');
}

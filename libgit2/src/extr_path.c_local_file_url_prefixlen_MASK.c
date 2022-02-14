
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
 int VAR_1 = -1;

 if (FUNC_0(VAR_0, "file://") == 0) {
  if (VAR_0[7] == '/')
   VAR_1 = 8;
  else if (FUNC_0(VAR_0 + 7, "localhost/") == 0)
   VAR_1 = 17;
 }

 return VAR_1;
}

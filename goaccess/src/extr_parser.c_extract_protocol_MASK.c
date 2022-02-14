
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,int) ;

__attribute__((used)) static const char *
FUNC_1 (const char *VAR_0)
{
  const char *VAR_1;

  if ((VAR_1 = "HTTP/1.0", !FUNC_0 (VAR_0, VAR_1, 8)) ||
      (VAR_1 = "HTTP/1.1", !FUNC_0 (VAR_0, VAR_1, 8)) ||
      (VAR_1 = "HTTP/2", !FUNC_0 (VAR_0, VAR_1, 6)))
    return VAR_1;
  return ((void*)0);
}

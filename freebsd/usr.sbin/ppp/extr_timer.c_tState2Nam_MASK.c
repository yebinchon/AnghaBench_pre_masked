
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;



__attribute__((used)) static const char *
FUNC_0(u_int VAR_0)
{
  static const char * const VAR_1[] = { "stopped", "running", "expired" };

  if (VAR_0 >= sizeof VAR_1 / sizeof VAR_1[0])
    return "unknown";
  return VAR_1[VAR_0];
}

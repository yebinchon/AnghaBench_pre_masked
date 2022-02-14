
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const*) ;






__attribute__((used)) static const char *FUNC_1(int VAR_0)
{
 static const char *const VAR_1[] = {
  [130] = "read",
  [129] = "write",
  [128] = "barrier",
  [131] = "flush",
  [132] = "discard" };

 if (VAR_0 < 0 || VAR_0 >= FUNC_0(VAR_1))
  return "unknown";

 if (!VAR_1[VAR_0])
  return "reserved";

 return VAR_1[VAR_0];
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(int VAR_0)
{
 static const char *VAR_1[] = {
  "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
 };

 if (VAR_0 >= 0 && VAR_0 < 7)
  return (VAR_1[VAR_0]);
 else
  return ("UNK");
}

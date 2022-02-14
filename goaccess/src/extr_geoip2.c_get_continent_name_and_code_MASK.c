
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static const char *
FUNC_1 (const char *VAR_0)
{
  if (FUNC_0 (VAR_0, "NA", 2) == 0)
    return "NA North America";
  else if (FUNC_0 (VAR_0, "OC", 2) == 0)
    return "OC Oceania";
  else if (FUNC_0 (VAR_0, "EU", 2) == 0)
    return "EU Europe";
  else if (FUNC_0 (VAR_0, "SA", 2) == 0)
    return "SA South America";
  else if (FUNC_0 (VAR_0, "AF", 2) == 0)
    return "AF Africa";
  else if (FUNC_0 (VAR_0, "AN", 2) == 0)
    return "AN Antarctica";
  else if (FUNC_0 (VAR_0, "AS", 2) == 0)
    return "AS Asia";
  else
    return "-- Unknown";
}

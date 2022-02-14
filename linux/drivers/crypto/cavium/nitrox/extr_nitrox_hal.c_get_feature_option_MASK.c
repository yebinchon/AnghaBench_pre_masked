
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static const char *FUNC_0(u8 VAR_1, int VAR_2)
{
 if (VAR_1 == 0)
  return "";
 else if (VAR_1 < VAR_0)
  return "-C15";

 if (VAR_2 >= 850)
  return "-C45";
 else if (VAR_2 >= 750)
  return "-C35";
 else if (VAR_2 >= 550)
  return "-C25";

 return "";
}

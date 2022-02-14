
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const* const*) ;

char const *
FUNC_1(int VAR_0, int VAR_1)
{
 static char const * const VAR_2[] = {
             "Disabled",
             "Only for point-to-point packets",
             "Both point-to-point and broadcast packets"
 };

 static char const * const VAR_3[] = {
                                    "NONE",
                                    "P2P",
                                    "ALL",
 };

 if (VAR_1)
  return (VAR_0 >= FUNC_0(VAR_3)? "?" : VAR_3[VAR_0]);

 return (VAR_0 >= FUNC_0(VAR_2)? "?" : VAR_2[VAR_0]);
}

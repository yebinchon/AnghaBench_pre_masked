
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum trailer_if_exists { ____Placeholder_trailer_if_exists } trailer_if_exists ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char const*) ;

int FUNC_1(enum trailer_if_exists *VAR_6, const char *VAR_7)
{
 if (!VAR_7)
  *VAR_6 = VAR_3;
 else if (!FUNC_0("addIfDifferent", VAR_7))
  *VAR_6 = VAR_1;
 else if (!FUNC_0("addIfDifferentNeighbor", VAR_7))
  *VAR_6 = VAR_2;
 else if (!FUNC_0("add", VAR_7))
  *VAR_6 = VAR_0;
 else if (!FUNC_0("replace", VAR_7))
  *VAR_6 = VAR_5;
 else if (!FUNC_0("doNothing", VAR_7))
  *VAR_6 = VAR_4;
 else
  return -1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum trailer_if_missing { ____Placeholder_trailer_if_missing } trailer_if_missing ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;

int FUNC_1(enum trailer_if_missing *VAR_3, const char *VAR_4)
{
 if (!VAR_4)
  *VAR_3 = VAR_1;
 else if (!FUNC_0("doNothing", VAR_4))
  *VAR_3 = VAR_2;
 else if (!FUNC_0("add", VAR_4))
  *VAR_3 = VAR_0;
 else
  return -1;
 return 0;
}

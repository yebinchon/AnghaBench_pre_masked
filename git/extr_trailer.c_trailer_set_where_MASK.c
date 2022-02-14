
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum trailer_where { ____Placeholder_trailer_where } trailer_where ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*) ;

int FUNC_1(enum trailer_where *VAR_5, const char *VAR_6)
{
 if (!VAR_6)
  *VAR_5 = VAR_2;
 else if (!FUNC_0("after", VAR_6))
  *VAR_5 = VAR_0;
 else if (!FUNC_0("before", VAR_6))
  *VAR_5 = VAR_1;
 else if (!FUNC_0("end", VAR_6))
  *VAR_5 = VAR_3;
 else if (!FUNC_0("start", VAR_6))
  *VAR_5 = VAR_4;
 else
  return -1;
 return 0;
}

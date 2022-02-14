
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, size_t *VAR_2, const size_t VAR_3)
{

 for (; *VAR_1 && *VAR_2 < VAR_3; ++VAR_1) {
  size_t VAR_4;

  switch (*VAR_1) {
  case '\t':




   if (*VAR_2 > VAR_0 - 8)
    return;


   VAR_4 = (*VAR_2 / 8 + 1) * 8;





   if (VAR_4 > VAR_3)
    return;
   *VAR_2 = VAR_4;
   break;
  default:
   ++(*VAR_2);
  }
  FUNC_0(*VAR_1);
 }
}

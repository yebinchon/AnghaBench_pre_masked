
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;

int FUNC_1(const char *VAR_1, long VAR_2, long VAR_3)
{
 long VAR_4;

 if (!(VAR_3 & VAR_0))
  return (VAR_2 <= 1);

 for (VAR_4 = 0; VAR_4 < VAR_2 && FUNC_0(VAR_1[VAR_4]); VAR_4++)
  ;

 return (VAR_4 == VAR_2);
}

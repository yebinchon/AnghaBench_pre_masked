
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_4)
{
 if (!(VAR_3 & VAR_0))
  return 0;
 if (VAR_3 & (FUNC_0(VAR_4) ? VAR_2 : VAR_1)) {
  FUNC_1(VAR_4);
  return 1;
 }
 return 0;
}

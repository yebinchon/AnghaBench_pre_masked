
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (char const*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char const* FUNC_3 (char const*) ;
 char const* FUNC_4 (char const*) ;
 char const* VAR_7 ;

__attribute__((used)) static const char *
FUNC_5(void)
{
 const char *VAR_8;

 VAR_5++;
 if (FUNC_2(VAR_7, VAR_2, VAR_4) == ((void*)0)) {
  if (FUNC_1(VAR_4))
   FUNC_0(2, "can't read %s", VAR_3);
  else
   return (((void*)0));
 }
 VAR_8 = FUNC_3(VAR_7);
 if (VAR_6 == VAR_1 && *VAR_8 == '#') {
  VAR_6 = VAR_0;
  return (FUNC_3(VAR_8 + 1));
 } else if (*VAR_8 == '\0') {
  return (VAR_8);
 } else {
  return (FUNC_4(VAR_8));
 }
}

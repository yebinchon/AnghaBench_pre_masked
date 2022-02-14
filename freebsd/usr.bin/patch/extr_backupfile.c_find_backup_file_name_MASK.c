
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char const* FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* FUNC_6 (char const*) ;

char *
FUNC_7(const char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_0 == VAR_2)
  return FUNC_1(VAR_4, VAR_3);
 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 VAR_6 = FUNC_1(FUNC_0(VAR_7), ".~");
 FUNC_3(VAR_7);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_7 = FUNC_6(VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }
 VAR_5 = FUNC_2(VAR_7);
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_6);
  FUNC_3(VAR_7);
  return ((void*)0);
 }
 VAR_8 = FUNC_5(VAR_6, VAR_5);
 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 if (VAR_0 == VAR_1 && VAR_8 == 0)
  return FUNC_1(VAR_4, VAR_3);
 return FUNC_4(VAR_4, VAR_8 + 1);
}

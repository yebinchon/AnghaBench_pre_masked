
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char* const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*,char const**) ;
 int FUNC_4 (int,int) ;

int FUNC_5(const char *VAR_4, char * const VAR_5[])
{
 int VAR_6 = FUNC_3(VAR_4, (const char **)VAR_5);


 if (!FUNC_0(VAR_4, VAR_5))
  return 0;


 {
  int VAR_7 = VAR_3;
  FUNC_4(VAR_6, VAR_7);
  VAR_3 = VAR_7;
 }
 if (VAR_3 == VAR_0 && !FUNC_2(VAR_4, '/'))
  VAR_3 = FUNC_1(VAR_4) ? VAR_0 : VAR_1;
 else if (VAR_3 == VAR_2 && !FUNC_2(VAR_4, '/'))
  VAR_3 = VAR_1;
 return -1;
}

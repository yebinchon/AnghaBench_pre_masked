
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int*,int*) ;
 int* FUNC_2 (int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (char const*) ;
 int* FUNC_7 (int*,int) ;
 int FUNC_8 (int*,char const*,int) ;

int FUNC_9(const char *VAR_1)
{
 int VAR_2;
 wchar_t *VAR_3, *VAR_4;
 BOOL VAR_5;

 if (!VAR_1 || !*VAR_1)
  return 0;

 VAR_2 = FUNC_6(VAR_1) * 2 + 1;
 VAR_3 = FUNC_2(VAR_2, sizeof(wchar_t));
 if (!VAR_3)
  FUNC_3("Out of memory, (tried to allocate %u wchar_t's)", VAR_2);
 FUNC_8(VAR_3, VAR_1, VAR_2);
 VAR_4 = FUNC_7(VAR_3, L'=');
 if (!VAR_4)
  VAR_5 = FUNC_1(VAR_3, ((void*)0));
 else {
  *VAR_4 = L'\0';
  VAR_5 = FUNC_1(VAR_3, VAR_4 + 1);
 }
 FUNC_5(VAR_3);

 if (!VAR_5)
  VAR_0 = FUNC_4(FUNC_0());

 return VAR_5 ? 0 : -1;
}

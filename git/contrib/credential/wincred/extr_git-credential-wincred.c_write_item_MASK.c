
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,char*,int,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int,int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char) ;
 int VAR_2 ;
 char* FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(const char *VAR_3, LPCWSTR VAR_4, int VAR_5)
{
 char *VAR_6;

 if (!VAR_4 || !VAR_5) {
  FUNC_4("%s=\n", VAR_3);
  return;
 }

 int VAR_7 = FUNC_0(VAR_0, 0, VAR_4, VAR_5, ((void*)0), 0, ((void*)0),
     VAR_1);
 VAR_6 = FUNC_6(VAR_7);

 if (!FUNC_0(VAR_0, 0, VAR_4, VAR_5, VAR_6, VAR_7, ((void*)0), VAR_1))
  FUNC_1("WideCharToMultiByte failed!");

 FUNC_4("%s=", VAR_3);
 FUNC_3(VAR_6, 1, VAR_7, VAR_2);
 FUNC_5('\n');
 FUNC_2(VAR_6);
}

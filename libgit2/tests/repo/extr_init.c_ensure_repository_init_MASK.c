
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 char const* FUNC_8 (int ) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(
 const char *VAR_2,
 int VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 const char *VAR_6;

 FUNC_1(!FUNC_4(VAR_2));

 FUNC_2(FUNC_5(&VAR_1, VAR_2, VAR_3));

 VAR_6 = FUNC_9(VAR_1);
 if (VAR_6 != ((void*)0) || VAR_5 != ((void*)0)) {
  FUNC_1(
   FUNC_3(VAR_6, VAR_5) == 0
  );
 }

 FUNC_1(
  FUNC_3(FUNC_8(VAR_1), VAR_4) == 0
 );

 FUNC_1(FUNC_6(VAR_1) == VAR_3);
 FUNC_1(FUNC_7(VAR_1));
}

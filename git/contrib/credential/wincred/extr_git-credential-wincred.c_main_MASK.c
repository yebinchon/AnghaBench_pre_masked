
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* VAR_1 ;
 int FUNC_6 () ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_7 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 int VAR_6 ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*,int ) ;
 char* VAR_7 ;

int FUNC_12(int VAR_8, char *VAR_9[])
{
 const char *VAR_10 =
     "usage: git credential-wincred <get|store|erase>\n";

 if (!VAR_9[1])
  FUNC_3(VAR_10);


 FUNC_2(FUNC_1(VAR_4), VAR_0);
 FUNC_2(FUNC_1(VAR_5), VAR_0);

 FUNC_7();

 FUNC_6();

 if (!VAR_3 || !(VAR_1 || VAR_2))
  return 0;


 FUNC_10(VAR_6, L"git:");
 FUNC_11(VAR_6, VAR_3, FUNC_0(VAR_6));
 FUNC_11(VAR_6, L"://", FUNC_0(VAR_6));
 if (VAR_7) {
  FUNC_11(VAR_6, VAR_7, FUNC_0(VAR_6));
  FUNC_11(VAR_6, L"@", FUNC_0(VAR_6));
 }
 if (VAR_1)
  FUNC_11(VAR_6, VAR_1, FUNC_0(VAR_6));
 if (VAR_2) {
  FUNC_11(VAR_6, L"/", FUNC_0(VAR_6));
  FUNC_11(VAR_6, VAR_2, FUNC_0(VAR_6));
 }

 if (!FUNC_9(VAR_9[1], "get"))
  FUNC_5();
 else if (!FUNC_9(VAR_9[1], "store"))
  FUNC_8();
 else if (!FUNC_9(VAR_9[1], "erase"))
  FUNC_4();

 return 0;
}

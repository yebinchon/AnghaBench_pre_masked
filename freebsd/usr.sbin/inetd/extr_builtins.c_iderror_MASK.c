
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,int,int,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(int VAR_3, int VAR_4, int VAR_5, const char *VAR_6)
{
 char *VAR_7;

 FUNC_0(&VAR_7, "%d , %d : ERROR : %s\r\n", VAR_3, VAR_4, VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_5(VAR_1, "asprintf: %m");
  FUNC_1(VAR_0);
 }
 FUNC_3(VAR_5, VAR_7, FUNC_4(VAR_7), VAR_2);
 FUNC_2(VAR_7);

 FUNC_1(0);
}

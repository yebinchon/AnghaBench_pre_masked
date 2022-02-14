
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int,int,int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 char *VAR_3;

 VAR_3 = FUNC_2(VAR_1 + 1);
 FUNC_3(VAR_3, 'a', VAR_1);
 VAR_3[VAR_1] = '\0';
 FUNC_1(VAR_3, VAR_2, 0777, 1, VAR_0);
 FUNC_0(VAR_3);
}

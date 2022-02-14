
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,int) ;

void FUNC_5(void)
{
 char *VAR_1 = (char *)FUNC_2(VAR_0 + 1);
 FUNC_3(VAR_1, 'a', VAR_0 + 1);
 VAR_1[VAR_0] = 0;

 FUNC_0(FUNC_4(VAR_1, 0666));

 FUNC_1(VAR_1);
}

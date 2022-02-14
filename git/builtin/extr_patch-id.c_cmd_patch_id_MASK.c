
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ) ;

int FUNC_4(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 int VAR_5 = -1;

 FUNC_1(VAR_0, &VAR_5);


 if (VAR_5 < 0)
  VAR_5 = 0;

 if (VAR_2 == 2 && !FUNC_2(VAR_3[1], "--stable"))
  VAR_5 = 1;
 else if (VAR_2 == 2 && !FUNC_2(VAR_3[1], "--unstable"))
  VAR_5 = 0;
 else if (VAR_2 != 1)
  FUNC_3(VAR_1);

 FUNC_0(VAR_5);
 return 0;
}

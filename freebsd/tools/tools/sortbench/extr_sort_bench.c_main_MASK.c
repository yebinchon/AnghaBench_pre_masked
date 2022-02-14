
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum test { ____Placeholder_test } test ;
typedef enum sort { ____Placeholder_sort } sort ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int,int,int) ;
 int FUNC_5 (char const*) ;

int
FUNC_6(int VAR_3, char *VAR_4[])
{
 const char *VAR_5 = VAR_4[0];
 int VAR_6, VAR_7;
 if (VAR_3 != VAR_2)
  FUNC_5(VAR_5);

 enum sort VAR_8 = FUNC_1(VAR_4[1]);
 if (VAR_8 == VAR_0)
  FUNC_5(VAR_5);

 enum test VAR_9 = FUNC_2(VAR_4[2]);
 if (VAR_9 == VAR_1)
  FUNC_5(VAR_5);

 VAR_6 = FUNC_0(VAR_4[3]);
 VAR_7 = FUNC_3(2, FUNC_0(VAR_4[4]));

 FUNC_4(VAR_8, VAR_9, VAR_6, VAR_7);
}

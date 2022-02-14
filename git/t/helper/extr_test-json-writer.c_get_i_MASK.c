
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intmax_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static void FUNC_3(int VAR_2, intmax_t *VAR_3)
{
 char *VAR_4;
 char *VAR_5;

 FUNC_1(VAR_2, &VAR_4);

 *VAR_3 = FUNC_2(VAR_4, &VAR_5, 10);
 if (*VAR_5 || VAR_1 == VAR_0)
  FUNC_0("line[%d]: invalid integer value", VAR_2);
}

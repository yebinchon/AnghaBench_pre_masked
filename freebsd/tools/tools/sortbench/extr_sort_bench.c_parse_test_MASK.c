
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum test { ____Placeholder_test } test ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static enum test
FUNC_1(char *VAR_5)
{
 if (FUNC_0(VAR_5, "rand") == 0)
  return VAR_2;
 else if (FUNC_0(VAR_5, "sort") == 0)
  return VAR_4;
 else if (FUNC_0(VAR_5, "part") == 0)
  return VAR_1;
 else if (FUNC_0(VAR_5, "rev") == 0)
  return VAR_3;
 else
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum sort { ____Placeholder_sort } sort ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static enum sort
FUNC_1(char *VAR_5)
{
 if (FUNC_0(VAR_5, "merge") == 0)
  return VAR_2;




 else if (FUNC_0(VAR_5, "quick") == 0)
  return VAR_3;
 else if (FUNC_0(VAR_5, "heap") == 0)
  return VAR_0;
 else
  return VAR_1;
}

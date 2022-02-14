
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int*) ;

int FUNC_3(void)
{
 int VAR_0 = -1;

 if (!FUNC_2("splitindex.maxpercentchange", &VAR_0)) {
  if (0 <= VAR_0 && VAR_0 <= 100)
   return VAR_0;

  return FUNC_1(FUNC_0("splitIndex.maxPercentChange value '%d' "
          "should be between 0 and 100"), VAR_0);
 }

 return -1;
}

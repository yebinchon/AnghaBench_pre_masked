
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*) ;
 int FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_1, timestamp_t *VAR_2)
{
 int VAR_3 = 0;

 if (!FUNC_1(VAR_1, "never") || !FUNC_1(VAR_1, "false"))
  *VAR_2 = 0;
 else if (!FUNC_1(VAR_1, "all") || !FUNC_1(VAR_1, "now"))
  *VAR_2 = VAR_0;
 else
  *VAR_2 = FUNC_0(VAR_1, &VAR_3);

 return VAR_3;
}

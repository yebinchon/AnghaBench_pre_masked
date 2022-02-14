
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (char const*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;

qboolean FUNC_2(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2);

 if(VAR_4 > VAR_3)
  return VAR_0;

 VAR_1 += VAR_3 - VAR_4;

 return !FUNC_0(VAR_1, VAR_2);
}

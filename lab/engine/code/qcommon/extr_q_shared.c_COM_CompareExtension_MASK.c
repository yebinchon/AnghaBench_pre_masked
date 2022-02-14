
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;

qboolean FUNC_2(const char *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = FUNC_1(VAR_3);

 if(VAR_5 <= VAR_4)
 {
  VAR_2 += VAR_4 - VAR_5;

  if(!FUNC_0(VAR_2, VAR_3))
   return VAR_1;
 }

 return VAR_0;
}

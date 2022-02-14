
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int platform_SHA_CTX ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char const*,size_t) ;

int FUNC_1(platform_SHA_CTX *VAR_1, const void *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 size_t VAR_5 = 0;
 const char *VAR_6 = (const char*)VAR_2;

 while (VAR_3) {
  VAR_4 = VAR_3;
  if (VAR_4 > VAR_0)
   VAR_4 = VAR_0;
  FUNC_0(VAR_1, VAR_6, VAR_4);
  VAR_5 += VAR_4;
  VAR_6 += VAR_4;
  VAR_3 -= VAR_4;
 }
 return VAR_5;
}

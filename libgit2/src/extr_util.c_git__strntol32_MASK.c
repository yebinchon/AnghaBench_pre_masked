
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int*,char const*,size_t,char const**,int) ;
 int FUNC_1 (int ,char*,int,char const*) ;

int FUNC_2(int32_t *VAR_1, const char *VAR_2, size_t VAR_3, const char **VAR_4, int VAR_5)
{
 const char *VAR_6;
 int32_t VAR_7;
 int64_t VAR_8;
 int VAR_9;

 if ((VAR_9 = FUNC_0(&VAR_8, VAR_2, VAR_3, &VAR_6, VAR_5)) < 0)
  return VAR_9;

 VAR_7 = VAR_8 & 0xFFFFFFFF;
 if (VAR_7 != VAR_8) {
  int VAR_10 = (int)(VAR_6 - VAR_2);
  FUNC_1(VAR_0, "failed to convert: '%.*s' is too large", VAR_10, VAR_2);
  return -1;
 }

 *VAR_1 = VAR_7;
 if (VAR_4)
  *VAR_4 = VAR_6;

 return VAR_9;
}

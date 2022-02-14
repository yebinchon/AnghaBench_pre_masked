
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,char const*) ;
 int FUNC_1 (int ,char*,char const*) ;

int FUNC_2(int32_t *VAR_1, const char *VAR_2)
{
 int64_t VAR_3;
 int32_t VAR_4;

 if (FUNC_0(&VAR_3, VAR_2) < 0)
  goto fail_parse;

 VAR_4 = VAR_3 & 0xFFFFFFFF;
 if (VAR_4 != VAR_3)
  goto fail_parse;

 *VAR_1 = VAR_4;
 return 0;

fail_parse:
 FUNC_1(VAR_0, "failed to parse '%s' as a 32-bit integer", VAR_2 ? VAR_2 : "(null)");
 return -1;
}

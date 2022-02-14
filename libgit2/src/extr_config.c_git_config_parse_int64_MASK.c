
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,char const*,int ,char const**,int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char const*) ;

int FUNC_3(int64_t *VAR_1, const char *VAR_2)
{
 const char *VAR_3;
 int64_t VAR_4;

 if (!VAR_2 || FUNC_0(&VAR_4, VAR_2, FUNC_2(VAR_2), &VAR_3, 0) < 0)
  goto fail_parse;

 switch (*VAR_3) {
 case 'g':
 case 'G':
  VAR_4 *= 1024;


 case 'm':
 case 'M':
  VAR_4 *= 1024;


 case 'k':
 case 'K':
  VAR_4 *= 1024;



  if (VAR_3[1] != '\0')
   return -1;



 case '\0':
  *VAR_1 = VAR_4;
  return 0;

 default:
  goto fail_parse;
 }

fail_parse:
 FUNC_1(VAR_0, "failed to parse '%s' as an integer", VAR_2 ? VAR_2 : "(null)");
 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct option {scalar_t__ type; scalar_t__ value; int defval; scalar_t__ short_name; scalar_t__ long_name; } ;
typedef enum parse_opt_result { ____Placeholder_parse_opt_result } parse_opt_result ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (struct option const*,int) ;
 int FUNC_3 (struct strbuf*,char*,scalar_t__) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static enum parse_opt_result FUNC_5(
 const struct option *VAR_4,
 const struct option *VAR_5,
 int VAR_6)
{
 const struct option *VAR_7;
 struct strbuf VAR_8 = VAR_3;





 for (VAR_7 = VAR_5; VAR_7->type != VAR_1; VAR_7++) {
  if (VAR_7 == VAR_4 ||
      VAR_7->type != VAR_0 ||
      VAR_7->value != VAR_4->value ||
      VAR_7->defval != *(int *)VAR_4->value)
   continue;

  if (VAR_7->long_name)
   FUNC_3(&VAR_8, "--%s", VAR_7->long_name);
  else
   FUNC_3(&VAR_8, "-%c", VAR_7->short_name);
  FUNC_1(FUNC_0("%s is incompatible with %s"),
        FUNC_2(VAR_4, VAR_6), VAR_8.buf);
  FUNC_4(&VAR_8);
  return VAR_2;
 }
 return FUNC_1(FUNC_0("%s : incompatible with something else"),
       FUNC_2(VAR_4, VAR_6));
}

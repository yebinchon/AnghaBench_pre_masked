
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_check_item {char* value; } ;
typedef enum crlf_action { ____Placeholder_crlf_action } crlf_action ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static enum crlf_action FUNC_4(struct attr_check_item *VAR_5)
{
 const char *VAR_6 = VAR_5->value;

 if (FUNC_1(VAR_6))
  return VAR_2;
 else if (FUNC_0(VAR_6))
  return VAR_1;
 else if (FUNC_2(VAR_6))
  ;
 else if (!FUNC_3(VAR_6, "input"))
  return VAR_3;
 else if (!FUNC_3(VAR_6, "auto"))
  return VAR_0;
 return VAR_4;
}

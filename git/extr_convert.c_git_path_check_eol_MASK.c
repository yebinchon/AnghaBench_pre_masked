
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_check_item {char* value; } ;
typedef enum eol { ____Placeholder_eol } eol ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum eol FUNC_2(struct attr_check_item *VAR_3)
{
 const char *VAR_4 = VAR_3->value;

 if (FUNC_0(VAR_4))
  ;
 else if (!FUNC_1(VAR_4, "lf"))
  return VAR_1;
 else if (!FUNC_1(VAR_4, "crlf"))
  return VAR_0;
 return VAR_2;
}

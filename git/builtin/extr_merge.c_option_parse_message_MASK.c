
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct option {struct strbuf* value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct strbuf*,char*,char*,char const*) ;
 int FUNC_3 (struct strbuf*,int ) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_1,
    const char *VAR_2, int VAR_3)
{
 struct strbuf *VAR_4 = VAR_1->value;

 if (VAR_3)
  FUNC_3(VAR_4, 0);
 else if (VAR_2) {
  FUNC_2(VAR_4, "%s%s", VAR_4->len ? "\n\n" : "", VAR_2);
  VAR_0 = 1;
 } else
  return FUNC_1(FUNC_0("switch `m' requires a value"));
 return 0;
}

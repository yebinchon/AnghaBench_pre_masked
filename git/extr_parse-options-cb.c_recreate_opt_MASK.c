
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct option {char const* long_name; char short_name; } ;


 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static int FUNC_3(struct strbuf *VAR_0, const struct option *VAR_1,
  const char *VAR_2, int VAR_3)
{
 FUNC_2(VAR_0);

 if (VAR_1->long_name) {
  FUNC_1(VAR_0, VAR_3 ? "--no-" : "--");
  FUNC_1(VAR_0, VAR_1->long_name);
  if (VAR_2) {
   FUNC_0(VAR_0, '=');
   FUNC_1(VAR_0, VAR_2);
  }
 } else if (VAR_1->short_name && !VAR_3) {
  FUNC_0(VAR_0, '-');
  FUNC_0(VAR_0, VAR_1->short_name);
  if (VAR_2)
   FUNC_1(VAR_0, VAR_2);
 } else
  return -1;

 return 0;
}

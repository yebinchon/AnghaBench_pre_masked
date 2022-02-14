
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct option {struct strbuf* value; } ;


 int VAR_0 ;
 int FUNC_0 (struct strbuf*,char) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*,int ) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 struct strbuf *VAR_4 = VAR_1->value;
 if (VAR_3) {
  VAR_0 = 0;
  FUNC_3(VAR_4, 0);
 } else {
  VAR_0 = 1;
  if (VAR_4->len)
   FUNC_0(VAR_4, '\n');
  FUNC_1(VAR_4, VAR_2);
  FUNC_2(VAR_4);
 }
 return 0;
}

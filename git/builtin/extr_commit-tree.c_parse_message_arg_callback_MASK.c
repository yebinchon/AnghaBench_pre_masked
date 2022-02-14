
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;
struct option {struct strbuf* value; } ;


 int FUNC_0 (int,char const*) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_0,
  const char *VAR_1, int VAR_2)
{
 struct strbuf *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2, VAR_1);

 if (VAR_3->len)
  FUNC_1(VAR_3, '\n');
 FUNC_2(VAR_3, VAR_1);
 FUNC_3(VAR_3);

 return 0;
}

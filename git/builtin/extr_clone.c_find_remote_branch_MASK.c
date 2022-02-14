
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref {int dummy; } ;


 struct strbuf VAR_0 ;
 struct ref* FUNC_0 (struct ref const*,int ) ;
 int FUNC_1 (struct strbuf*,char const*) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static struct ref *FUNC_3(const struct ref *VAR_1, const char *VAR_2)
{
 struct ref *VAR_3;
 struct strbuf VAR_4 = VAR_0;
 FUNC_1(&VAR_4, "refs/heads/");
 FUNC_1(&VAR_4, VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_4.buf);
 FUNC_2(&VAR_4);

 if (VAR_3)
  return VAR_3;

 FUNC_1(&VAR_4, "refs/tags/");
 FUNC_1(&VAR_4, VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_4.buf);
 FUNC_2(&VAR_4);

 return VAR_3;
}

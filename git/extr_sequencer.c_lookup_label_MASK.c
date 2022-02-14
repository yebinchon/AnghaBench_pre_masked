
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct commit {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 struct commit* FUNC_2 (int ) ;
 int FUNC_3 (struct strbuf*,char*,int,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int ,int ,char*,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static struct commit *FUNC_7(const char *VAR_0, int VAR_1,
       struct strbuf *VAR_2)
{
 struct commit *VAR_3;

 FUNC_4(VAR_2);
 FUNC_3(VAR_2, "refs/rewritten/%.*s", VAR_1, VAR_0);
 VAR_3 = FUNC_2(VAR_2->buf);
 if (!VAR_3) {

  FUNC_5(VAR_2, 0, FUNC_6("refs/rewritten/"), "", 0);
  VAR_3 = FUNC_2(VAR_2->buf);
 }

 if (!VAR_3)
  FUNC_1(FUNC_0("could not resolve '%s'"), VAR_2->buf);

 return VAR_3;
}

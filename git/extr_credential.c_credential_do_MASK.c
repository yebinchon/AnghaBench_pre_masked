
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct credential {int dummy; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (struct credential*,int ,int) ;
 int FUNC_2 (struct strbuf*,char*,char const*) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(struct credential *VAR_1, const char *VAR_2,
    const char *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 int VAR_5;

 if (VAR_2[0] == '!')
  FUNC_3(&VAR_4, VAR_2 + 1);
 else if (FUNC_0(VAR_2))
  FUNC_3(&VAR_4, VAR_2);
 else
  FUNC_2(&VAR_4, "git credential-%s", VAR_2);

 FUNC_2(&VAR_4, " %s", VAR_3);
 VAR_5 = FUNC_1(VAR_1, VAR_4.buf, !FUNC_5(VAR_3, "get"));

 FUNC_4(&VAR_4);
 return VAR_5;
}

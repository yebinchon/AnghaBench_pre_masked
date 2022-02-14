
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; } ;
struct credential {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct credential*,struct strbuf*) ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (struct strbuf*,char*,char const*,...) ;
 int FUNC_3 (struct strbuf*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_1, struct credential *VAR_2,
    int VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_0;
 char *VAR_6;

 FUNC_0(VAR_2, &VAR_4);
 if (VAR_4.len)
  FUNC_2(&VAR_5, "%s for '%s': ", VAR_1, VAR_4.buf);
 else
  FUNC_2(&VAR_5, "%s: ", VAR_1);

 VAR_6 = FUNC_1(VAR_5.buf, VAR_3);

 FUNC_3(&VAR_4);
 FUNC_3(&VAR_5);
 return FUNC_4(VAR_6);
}

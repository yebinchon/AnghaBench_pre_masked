
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct remote {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct remote*,char const**,int ) ;
 int FUNC_2 (int ,char const*) ;
 struct remote* FUNC_3 (char const*) ;
 int FUNC_4 (struct remote*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct strbuf*,char*,char const*) ;
 int FUNC_7 (struct strbuf*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_1, const char **VAR_2,
    int VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 struct remote *VAR_5;

 FUNC_6(&VAR_4, "remote.%s.fetch", VAR_1);

 VAR_5 = FUNC_3(VAR_1);
 if (!FUNC_4(VAR_5, 1))
  FUNC_2(FUNC_0("No such remote '%s'"), VAR_1);

 if (!VAR_3 && FUNC_5(VAR_4.buf)) {
  FUNC_7(&VAR_4);
  return 1;
 }
 FUNC_1(VAR_5, VAR_2, VAR_4.buf);

 FUNC_7(&VAR_4);
 return 0;
}

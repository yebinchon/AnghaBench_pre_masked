
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule {int name; } ;
struct strbuf {int buf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,char*,int ) ;
 int FUNC_5 (struct strbuf*) ;
 struct submodule* FUNC_6 (int ,int *,char const*) ;
 int VAR_1 ;

int FUNC_7(struct strbuf *VAR_2, const char *VAR_3)
{
 const struct submodule *VAR_4;
 const char *VAR_5;
 int VAR_6 = 0;

 FUNC_5(VAR_2);
 FUNC_2(VAR_2, VAR_3);
 FUNC_3(VAR_2, '/');
 FUNC_2(VAR_2, ".git");

 VAR_5 = FUNC_1(VAR_2->buf);
 if (VAR_5) {
  FUNC_5(VAR_2);
  FUNC_2(VAR_2, VAR_5);
 }
 if (!FUNC_0(VAR_2->buf)) {
  VAR_4 = FUNC_6(VAR_1, &VAR_0, VAR_3);
  if (!VAR_4) {
   VAR_6 = -1;
   goto cleanup;
  }
  FUNC_5(VAR_2);
  FUNC_4(VAR_2, "%s/%s", "modules", VAR_4->name);
 }

cleanup:
 return VAR_6;
}

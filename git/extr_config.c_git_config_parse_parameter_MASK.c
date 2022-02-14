
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;
typedef scalar_t__ (* config_fn_t ) (char*,char const*,void*) ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char**,int *) ;
 int FUNC_4 (struct strbuf**) ;
 int FUNC_5 (struct strbuf*,int) ;
 struct strbuf** FUNC_6 (char const*,char,int) ;
 int FUNC_7 (struct strbuf*) ;

int FUNC_8(const char *VAR_0,
          config_fn_t VAR_1, void *VAR_2)
{
 const char *VAR_3;
 char *VAR_4;
 struct strbuf **VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_0, '=', 2);
 if (!VAR_5[0])
  return FUNC_1(FUNC_0("bogus config parameter: %s"), VAR_0);

 if (VAR_5[0]->len && VAR_5[0]->buf[VAR_5[0]->len - 1] == '=') {
  FUNC_5(VAR_5[0], VAR_5[0]->len - 1);
  VAR_3 = VAR_5[1] ? VAR_5[1]->buf : "";
 } else {
  VAR_3 = ((void*)0);
 }

 FUNC_7(VAR_5[0]);
 if (!VAR_5[0]->len) {
  FUNC_4(VAR_5);
  return FUNC_1(FUNC_0("bogus config parameter: %s"), VAR_0);
 }

 if (FUNC_3(VAR_5[0]->buf, &VAR_4, ((void*)0))) {
  VAR_6 = -1;
 } else {
  VAR_6 = (VAR_1(VAR_4, VAR_3, VAR_2) < 0) ? -1 : 0;
  FUNC_2(VAR_4);
 }
 FUNC_4(VAR_5);
 return VAR_6;
}

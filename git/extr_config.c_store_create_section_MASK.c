
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct config_store_data {int baselen; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char const*,char,int) ;
 int FUNC_1 (struct strbuf*,char const) ;
 int FUNC_2 (struct strbuf*,char*,int,char const*) ;
 int FUNC_3 (struct strbuf*,char*) ;

__attribute__((used)) static struct strbuf FUNC_4(const char *VAR_1,
       const struct config_store_data *VAR_2)
{
 const char *VAR_3;
 int VAR_4;
 struct strbuf VAR_5 = VAR_0;

 VAR_3 = FUNC_0(VAR_1, '.', VAR_2->baselen);
 if (VAR_3) {
  FUNC_2(&VAR_5, "[%.*s \"", (int)(VAR_3 - VAR_1), VAR_1);
  for (VAR_4 = VAR_3 - VAR_1 + 1; VAR_4 < VAR_2->baselen; VAR_4++) {
   if (VAR_1[VAR_4] == '"' || VAR_1[VAR_4] == '\\')
    FUNC_1(&VAR_5, '\\');
   FUNC_1(&VAR_5, VAR_1[VAR_4]);
  }
  FUNC_3(&VAR_5, "\"]\n");
 } else {
  FUNC_2(&VAR_5, "[%.*s]\n", VAR_2->baselen, VAR_1);
 }

 return VAR_5;
}

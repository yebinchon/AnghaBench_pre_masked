
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct config_store_data {int baselen; } ;
typedef int ssize_t ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const) ;
 int FUNC_1 (struct strbuf*,char*,...) ;
 int FUNC_2 (struct strbuf*,char*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_6(int VAR_1, const char *VAR_2, const char *VAR_3,
     const struct config_store_data *VAR_4)
{
 int VAR_5;
 ssize_t VAR_6;
 int VAR_7 = FUNC_4(VAR_2 + VAR_4->baselen + 1);
 const char *VAR_8 = "";
 struct strbuf VAR_9 = VAR_0;
 if (VAR_3[0] == ' ')
  VAR_8 = "\"";
 for (VAR_5 = 0; VAR_3[VAR_5]; VAR_5++)
  if (VAR_3[VAR_5] == ';' || VAR_3[VAR_5] == '#')
   VAR_8 = "\"";
 if (VAR_5 && VAR_3[VAR_5 - 1] == ' ')
  VAR_8 = "\"";

 FUNC_1(&VAR_9, "\t%.*s = %s",
      VAR_7, VAR_2 + VAR_4->baselen + 1, VAR_8);

 for (VAR_5 = 0; VAR_3[VAR_5]; VAR_5++)
  switch (VAR_3[VAR_5]) {
  case '\n':
   FUNC_2(&VAR_9, "\\n");
   break;
  case '\t':
   FUNC_2(&VAR_9, "\\t");
   break;
  case '"':
  case '\\':
   FUNC_0(&VAR_9, '\\');

  default:
   FUNC_0(&VAR_9, VAR_3[VAR_5]);
   break;
  }
 FUNC_1(&VAR_9, "%s\n", VAR_8);

 VAR_6 = FUNC_5(VAR_1, VAR_9.buf, VAR_9.len);
 FUNC_3(&VAR_9);

 return VAR_6;
}

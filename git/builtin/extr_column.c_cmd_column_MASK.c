
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int buf; } ;
struct option {int dummy; } ;
struct column_options {int width; char const* indent; int nl; int padding; } ;
typedef int copts ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int ,char*,int*,int ) ;
 struct option FUNC_4 (int ,char*,char const**,int ,int ) ;
 struct strbuf VAR_0 ;
 struct string_list VAR_1 ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 (struct column_options*,int ,int) ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_11 (struct string_list*,int,struct column_options*) ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int VAR_5 ;
 int FUNC_13 (struct strbuf*,int ) ;
 scalar_t__ FUNC_14 (char const*,char const*) ;
 int FUNC_15 (struct string_list*,int ) ;
 int FUNC_16 (int ,struct option*) ;

int FUNC_17(int VAR_6, const char **VAR_7, const char *VAR_8)
{
 struct string_list VAR_9 = VAR_1;
 struct strbuf VAR_10 = VAR_0;
 struct column_options VAR_11;
 const char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct option VAR_14[] = {
  FUNC_4(0, "command", &VAR_13, FUNC_0("name"), FUNC_0("lookup config vars")),
  FUNC_1(0, "mode", &VAR_3, FUNC_0("layout to use")),
  FUNC_3(0, "raw-mode", &VAR_3, FUNC_0("layout to use")),
  FUNC_3(0, "width", &VAR_11.width, FUNC_0("Maximum width")),
  FUNC_4(0, "indent", &VAR_11.indent, FUNC_0("string"), FUNC_0("Padding space on left border")),
  FUNC_3(0, "nl", &VAR_11.nl, FUNC_0("Padding space on right border")),
  FUNC_3(0, "padding", &VAR_11.padding, FUNC_0("Padding space between columns")),
  FUNC_2()
 };


 if (VAR_6 > 1 && FUNC_12(VAR_7[1], "--command=")) {
  VAR_12 = VAR_7[1] + 10;
  FUNC_8(VAR_4, (void *)VAR_12);
 } else
  FUNC_8(VAR_4, ((void*)0));

 FUNC_9(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.padding = 1;
 VAR_6 = FUNC_10(VAR_6, VAR_7, VAR_8, VAR_14, VAR_2, 0);
 if (VAR_6)
  FUNC_16(VAR_2, VAR_14);
 if (VAR_13 || VAR_12) {
  if (!VAR_13 || !VAR_12 || FUNC_14(VAR_13, VAR_12))
   FUNC_6(FUNC_5("--command must be the first argument"));
 }
 FUNC_7(&VAR_3, -1);
 while (!FUNC_13(&VAR_10, VAR_5))
  FUNC_15(&VAR_9, VAR_10.buf);

 FUNC_11(&VAR_9, VAR_3, &VAR_11);
 return 0;
}

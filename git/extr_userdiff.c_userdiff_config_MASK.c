
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct userdiff_driver {int binary; int word_regex; int textconv_want_cache; int textconv; int external; int funcname; int name; } ;


 int FUNC_0 (struct userdiff_driver*,scalar_t__,int ) ;
 int VAR_0 ;
 struct userdiff_driver* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (struct userdiff_driver*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,char const**,int*,char const**) ;
 int FUNC_5 (int *,char const*,char const*,int ) ;
 int FUNC_6 (int*,char const*,char const*) ;
 int FUNC_7 (char const*,char*) ;
 struct userdiff_driver* FUNC_8 (char const*,int) ;
 int FUNC_9 (char const*,int) ;

int FUNC_10(const char *VAR_4, const char *VAR_5)
{
 struct userdiff_driver *VAR_6;
 const char *VAR_7, *VAR_8;
 int VAR_9;

 if (FUNC_4(VAR_4, "diff", &VAR_7, &VAR_9, &VAR_8) || !VAR_7)
  return 0;

 VAR_6 = FUNC_8(VAR_7, VAR_9);
 if (!VAR_6) {
  FUNC_0(VAR_1, VAR_3+1, VAR_2);
  VAR_6 = &VAR_1[VAR_3++];
  FUNC_2(VAR_6, 0, sizeof(*VAR_6));
  VAR_6->name = FUNC_9(VAR_7, VAR_9);
  VAR_6->binary = -1;
 }

 if (!FUNC_7(VAR_8, "funcname"))
  return FUNC_5(&VAR_6->funcname, VAR_4, VAR_5, 0);
 if (!FUNC_7(VAR_8, "xfuncname"))
  return FUNC_5(&VAR_6->funcname, VAR_4, VAR_5, VAR_0);
 if (!FUNC_7(VAR_8, "binary"))
  return FUNC_6(&VAR_6->binary, VAR_4, VAR_5);
 if (!FUNC_7(VAR_8, "command"))
  return FUNC_1(&VAR_6->external, VAR_4, VAR_5);
 if (!FUNC_7(VAR_8, "textconv"))
  return FUNC_1(&VAR_6->textconv, VAR_4, VAR_5);
 if (!FUNC_7(VAR_8, "cachetextconv"))
  return FUNC_3(&VAR_6->textconv_want_cache, VAR_4, VAR_5);
 if (!FUNC_7(VAR_8, "wordregex"))
  return FUNC_1(&VAR_6->word_regex, VAR_4, VAR_5);

 return 0;
}

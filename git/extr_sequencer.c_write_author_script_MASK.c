
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*,int ) ;
 int FUNC_5 (struct strbuf*,char*) ;
 int FUNC_6 (struct strbuf*) ;
 char* FUNC_7 (char const*,char) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_10(const char *VAR_1)
{
 struct strbuf VAR_2 = VAR_0;
 const char *VAR_3;
 int VAR_4;

 for (;;)
  if (!*VAR_1 || FUNC_2(VAR_1, "\n")) {
missing_author:

   FUNC_8(FUNC_0());
   return 0;
  } else if (FUNC_1(VAR_1, "author ", &VAR_1))
   break;
  else if ((VAR_3 = FUNC_7(VAR_1, '\n')))
   VAR_1 = VAR_3 + 1;
  else
   goto missing_author;

 FUNC_5(&VAR_2, "GIT_AUTHOR_NAME='");
 while (*VAR_1 && *VAR_1 != '\n' && *VAR_1 != '\r')
  if (FUNC_1(VAR_1, " <", &VAR_1))
   break;
  else if (*VAR_1 != '\'')
   FUNC_3(&VAR_2, *(VAR_1++));
  else
   FUNC_4(&VAR_2, "'\\%c'", *(VAR_1++));
 FUNC_5(&VAR_2, "'\nGIT_AUTHOR_EMAIL='");
 while (*VAR_1 && *VAR_1 != '\n' && *VAR_1 != '\r')
  if (FUNC_1(VAR_1, "> ", &VAR_1))
   break;
  else if (*VAR_1 != '\'')
   FUNC_3(&VAR_2, *(VAR_1++));
  else
   FUNC_4(&VAR_2, "'\\%c'", *(VAR_1++));
 FUNC_5(&VAR_2, "'\nGIT_AUTHOR_DATE='@");
 while (*VAR_1 && *VAR_1 != '\n' && *VAR_1 != '\r')
  if (*VAR_1 != '\'')
   FUNC_3(&VAR_2, *(VAR_1++));
  else
   FUNC_4(&VAR_2, "'\\%c'", *(VAR_1++));
 FUNC_3(&VAR_2, '\'');
 VAR_4 = FUNC_9(VAR_2.buf, VAR_2.len, FUNC_0(), 1);
 FUNC_6(&VAR_2);
 return VAR_4;
}

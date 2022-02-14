
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct fsck_options {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (struct fsck_options*,struct object*,int ,char*) ;
 char* FUNC_4 (char const*,char) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(const char **VAR_10, struct object *VAR_11, struct fsck_options *VAR_12)
{
 const char *VAR_13 = *VAR_10;
 char *VAR_14;

 *VAR_10 = FUNC_4(*VAR_10, '\n');
 if (**VAR_10 == '\n')
  (*VAR_10)++;

 if (*VAR_13 == '<')
  return FUNC_3(VAR_12, VAR_11, VAR_6, "invalid author/committer line - missing space before email");
 VAR_13 += FUNC_5(VAR_13, "<>\n");
 if (*VAR_13 == '>')
  return FUNC_3(VAR_12, VAR_11, VAR_3, "invalid author/committer line - bad name");
 if (*VAR_13 != '<')
  return FUNC_3(VAR_12, VAR_11, VAR_5, "invalid author/committer line - missing email");
 if (VAR_13[-1] != ' ')
  return FUNC_3(VAR_12, VAR_11, VAR_8, "invalid author/committer line - missing space before email");
 VAR_13++;
 VAR_13 += FUNC_5(VAR_13, "<>\n");
 if (*VAR_13 != '>')
  return FUNC_3(VAR_12, VAR_11, VAR_2, "invalid author/committer line - bad email");
 VAR_13++;
 if (*VAR_13 != ' ')
  return FUNC_3(VAR_12, VAR_11, VAR_7, "invalid author/committer line - missing space before date");
 VAR_13++;
 if (*VAR_13 == '0' && VAR_13[1] != ' ')
  return FUNC_3(VAR_12, VAR_11, VAR_9, "invalid author/committer line - zero-padded date");
 if (FUNC_0(FUNC_2(VAR_13, &VAR_14, 10)))
  return FUNC_3(VAR_12, VAR_11, VAR_1, "invalid author/committer line - date causes integer overflow");
 if ((VAR_14 == VAR_13 || *VAR_14 != ' '))
  return FUNC_3(VAR_12, VAR_11, VAR_0, "invalid author/committer line - bad date");
 VAR_13 = VAR_14 + 1;
 if ((*VAR_13 != '+' && *VAR_13 != '-') ||
     !FUNC_1(VAR_13[1]) ||
     !FUNC_1(VAR_13[2]) ||
     !FUNC_1(VAR_13[3]) ||
     !FUNC_1(VAR_13[4]) ||
     (VAR_13[5] != '\n'))
  return FUNC_3(VAR_12, VAR_11, VAR_4, "invalid author/committer line - bad time zone");
 VAR_13 += 6;
 return 0;
}

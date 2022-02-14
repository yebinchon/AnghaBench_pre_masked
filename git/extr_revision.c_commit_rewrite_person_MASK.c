
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct strbuf {int buf; int len; } ;
struct ident_split {char* mail_begin; char* mail_end; char* name_begin; char* name_end; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (struct string_list*,char const**,size_t*,char const**,size_t*) ;
 scalar_t__ FUNC_1 (struct ident_split*,char*,size_t) ;
 int FUNC_2 (struct strbuf*,char*,int,char const*,int,char const*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char*,int,int,int ) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (int,char const*) ;

__attribute__((used)) static int FUNC_8(struct strbuf *VAR_1, const char *VAR_2, struct string_list *VAR_3)
{
 char *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7, VAR_8;
 const char *VAR_9;
 const char *VAR_10;
 struct ident_split VAR_11;

 VAR_4 = FUNC_7(VAR_1->buf, VAR_2);
 if (!VAR_4)
  return 0;

 VAR_4 += FUNC_6(VAR_2);
 VAR_5 = FUNC_5(VAR_4, '\n');
 if (!VAR_5)
  return 0;

 VAR_6 = VAR_5 - VAR_4;

 if (FUNC_1(&VAR_11, VAR_4, VAR_6))
  return 0;

 VAR_10 = VAR_11.mail_begin;
 VAR_8 = VAR_11.mail_end - VAR_11.mail_begin;
 VAR_9 = VAR_11.name_begin;
 VAR_7 = VAR_11.name_end - VAR_11.name_begin;

 if (FUNC_0(VAR_3, &VAR_10, &VAR_8, &VAR_9, &VAR_7)) {
  struct strbuf VAR_12 = VAR_0;

  FUNC_2(&VAR_12, "%.*s <%.*s>",
       (int)VAR_7, VAR_9, (int)VAR_8, VAR_10);

  FUNC_4(VAR_1, VAR_11.name_begin - VAR_1->buf,
         VAR_11.mail_end - VAR_11.name_begin + 1,
         VAR_12.buf, VAR_12.len);

  FUNC_3(&VAR_12);

  return 1;
 }

 return 0;
}

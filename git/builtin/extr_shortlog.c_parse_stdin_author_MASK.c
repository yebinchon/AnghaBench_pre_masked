
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct shortlog {scalar_t__ email; int mailmap; } ;
struct ident_split {char* name_begin; char* mail_begin; char* name_end; char* mail_end; } ;


 int FUNC_0 (int *,char const**,size_t*,char const**,size_t*) ;
 scalar_t__ FUNC_1 (struct ident_split*,char const*,int ) ;
 int FUNC_2 (struct strbuf*,char const*,size_t) ;
 int FUNC_3 (struct strbuf*,char*,int,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(struct shortlog *VAR_0,
          struct strbuf *VAR_1, const char *VAR_2)
{
 const char *VAR_3, *VAR_4;
 size_t VAR_5, VAR_6;
 struct ident_split VAR_7;

 if (FUNC_1(&VAR_7, VAR_2, FUNC_4(VAR_2)))
  return -1;

 VAR_4 = VAR_7.name_begin;
 VAR_3 = VAR_7.mail_begin;
 VAR_5 = VAR_7.name_end - VAR_7.name_begin;
 VAR_6 = VAR_7.mail_end - VAR_7.mail_begin;

 FUNC_0(&VAR_0->mailmap, &VAR_3, &VAR_6, &VAR_4, &VAR_5);
 FUNC_2(VAR_1, VAR_4, VAR_5);
 if (VAR_0->email)
  FUNC_3(VAR_1, " <%.*s>", (int)VAR_6, VAR_3);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ident_split {scalar_t__ tz_end; scalar_t__ date_begin; scalar_t__ mail_end; scalar_t__ mail_begin; scalar_t__ name_end; scalar_t__ name_begin; scalar_t__ tz_begin; scalar_t__ date_end; } ;


 int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ident_split*,struct strbuf*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,char) ;
 char* FUNC_4 (int ,char*,size_t*) ;
 int FUNC_5 (char*,char*,int ,char*,int ) ;
 char const* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (scalar_t__,struct strbuf*) ;
 int FUNC_9 (char**,int ) ;
 scalar_t__ FUNC_10 (struct ident_split*,char const*,size_t) ;
 int FUNC_11 (struct strbuf*,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct strbuf*,char) ;
 int FUNC_13 (struct strbuf*,int ) ;
 int FUNC_14 (struct strbuf*,int *) ;
 size_t FUNC_15 (char const*) ;
 int FUNC_16 (scalar_t__,scalar_t__) ;
 char* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct strbuf *VAR_7)
{
 char *VAR_8, *VAR_9, *VAR_10;
 struct ident_split VAR_11;

 VAR_8 = FUNC_17(FUNC_7("GIT_AUTHOR_NAME"));
 VAR_9 = FUNC_17(FUNC_7("GIT_AUTHOR_EMAIL"));
 VAR_10 = FUNC_17(FUNC_7("GIT_AUTHOR_DATE"));

 if (VAR_3) {
  struct ident_split VAR_12;
  size_t VAR_13;
  const char *VAR_14;

  VAR_14 = FUNC_4(VAR_4, "author", &VAR_13);
  if (!VAR_14)
   FUNC_2(FUNC_0("commit '%s' lacks author header"), VAR_3);
  if (FUNC_10(&VAR_12, VAR_14, VAR_13) < 0)
   FUNC_2(FUNC_0("commit '%s' has malformed author line"), VAR_3);

  FUNC_9(&VAR_8, FUNC_16(VAR_12.name_begin, VAR_12.name_end - VAR_12.name_begin));
  FUNC_9(&VAR_9, FUNC_16(VAR_12.mail_begin, VAR_12.mail_end - VAR_12.mail_begin));

  if (VAR_12.date_begin) {
   struct strbuf VAR_15 = VAR_1;
   FUNC_12(&VAR_15, '@');
   FUNC_11(&VAR_15, VAR_12.date_begin, VAR_12.date_end - VAR_12.date_begin);
   FUNC_12(&VAR_15, ' ');
   FUNC_11(&VAR_15, VAR_12.tz_begin, VAR_12.tz_end - VAR_12.tz_begin);
   FUNC_9(&VAR_10, FUNC_14(&VAR_15, ((void*)0)));
  }
 }

 if (VAR_5) {
  struct ident_split VAR_16;

  if (FUNC_10(&VAR_16, VAR_5, FUNC_15(VAR_5)) < 0)
   FUNC_2(FUNC_0("malformed --author parameter"));
  FUNC_9(&VAR_8, FUNC_16(VAR_16.name_begin, VAR_16.name_end - VAR_16.name_begin));
  FUNC_9(&VAR_9, FUNC_16(VAR_16.mail_begin, VAR_16.mail_end - VAR_16.mail_begin));
 }

 if (VAR_6) {
  struct strbuf VAR_17 = VAR_1;
  if (FUNC_8(VAR_6, &VAR_17))
   FUNC_2(FUNC_0("invalid date format: %s"), VAR_6);
  FUNC_9(&VAR_10, FUNC_14(&VAR_17, ((void*)0)));
 }

 FUNC_13(VAR_7, FUNC_5(VAR_8, VAR_9, VAR_2, VAR_10,
    VAR_0));
 FUNC_1(&VAR_11, VAR_7);
 FUNC_3("GIT_AUTHOR_NAME", VAR_11.name_begin, VAR_11.name_end, 0);
 FUNC_3("GIT_AUTHOR_EMAIL", VAR_11.mail_begin, VAR_11.mail_end, 0);
 FUNC_3("GIT_AUTHOR_DATE", VAR_11.date_begin, VAR_11.tz_end, '@');
 FUNC_6(VAR_8);
 FUNC_6(VAR_9);
 FUNC_6(VAR_10);
}

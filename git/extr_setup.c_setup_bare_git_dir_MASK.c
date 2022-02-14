
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char* buf; } ;
struct repository_format {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,struct repository_format*,int*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,int) ;
 char const* FUNC_8 (char const*,struct strbuf*,struct repository_format*,int*) ;
 int FUNC_9 (struct strbuf*,int) ;
 char* FUNC_10 (char*,int) ;

__attribute__((used)) static const char *FUNC_11(struct strbuf *VAR_5, int VAR_6,
          struct repository_format *VAR_7,
          int *VAR_8)
{
 int VAR_9;

 if (FUNC_2(".", VAR_7, VAR_8))
  return ((void*)0);

 FUNC_7(VAR_0, "0", 1);


 if (FUNC_4(VAR_1) || VAR_2) {
  static const char *VAR_10;

  VAR_10 = VAR_6 == VAR_5->len ? "." : FUNC_10(VAR_5->buf, VAR_6);
  if (FUNC_1(VAR_5->buf))
   FUNC_3(FUNC_0("cannot come back to cwd"));
  return FUNC_8(VAR_10, VAR_5, VAR_7, VAR_8);
 }

 VAR_3 = 1;
 VAR_4 = 0;
 if (VAR_6 != VAR_5->len) {
  if (FUNC_1(VAR_5->buf))
   FUNC_3(FUNC_0("cannot come back to cwd"));
  VAR_9 = FUNC_5(VAR_5->buf);
  FUNC_9(VAR_5, VAR_6 > VAR_9 ? VAR_6 : VAR_9);
  FUNC_6(VAR_5->buf);
 }
 else
  FUNC_6(".");
 return ((void*)0);
}

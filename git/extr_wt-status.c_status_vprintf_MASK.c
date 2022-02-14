
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct wt_status {int fp; scalar_t__ display_comment_prefix; } ;
struct strbuf {char* buf; int len; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ,char const*,struct strbuf*) ;
 char VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct strbuf*,char const*,int) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (struct strbuf*) ;
 int FUNC_7 (struct strbuf*,char const*,int ) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static void FUNC_9(struct wt_status *VAR_2, int VAR_3, const char *VAR_4,
  const char *VAR_5, va_list VAR_6, const char *VAR_7)
{
 struct strbuf VAR_8 = VAR_0;
 struct strbuf VAR_9 = VAR_0;
 const char *VAR_10, *VAR_11;

 FUNC_7(&VAR_8, VAR_5, VAR_6);
 if (!VAR_8.len) {
  if (VAR_2->display_comment_prefix) {
   FUNC_3(&VAR_8, VAR_1);
   if (!VAR_7)
    FUNC_3(&VAR_8, ' ');
  }
  FUNC_0(VAR_2->fp, VAR_4, &VAR_8);
  if (VAR_7)
   FUNC_1(VAR_2->fp, "%s", VAR_7);
  FUNC_5(&VAR_8);
  return;
 }
 for (VAR_10 = VAR_8.buf; *VAR_10; VAR_10 = VAR_11 + 1) {
  VAR_11 = FUNC_8(VAR_10, '\n');

  FUNC_6(&VAR_9);
  if (VAR_3 && VAR_2->display_comment_prefix) {
   FUNC_3(&VAR_9, VAR_1);
   if (*VAR_10 != '\n' && *VAR_10 != '\t')
    FUNC_3(&VAR_9, ' ');
  }
  if (VAR_11)
   FUNC_2(&VAR_9, VAR_10, VAR_11 - VAR_10);
  else
   FUNC_4(&VAR_9, VAR_10);
  FUNC_0(VAR_2->fp, VAR_4, &VAR_9);
  if (VAR_11)
   FUNC_1(VAR_2->fp, "\n");
  else
   break;
  VAR_3 = 1;
 }
 if (VAR_7)
  FUNC_1(VAR_2->fp, "%s", VAR_7);
 FUNC_5(&VAR_9);
 FUNC_5(&VAR_8);
}

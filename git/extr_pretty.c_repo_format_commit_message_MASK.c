
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct repository {int dummy; } ;
struct pretty_print_context {char* output_encoding; } ;
struct format_commit_context {char const* commit_encoding; int message; int wrap_start; struct pretty_print_context const* pretty_ctx; struct commit const* commit; } ;
struct commit {int dummy; } ;
typedef int context ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct format_commit_context*,int ,int) ;
 char* FUNC_2 (int ,int ,char const*,char const*,size_t*) ;
 int FUNC_3 (struct repository*,struct commit const*,char const**,char const*) ;
 int FUNC_4 (struct repository*,struct commit const*,int ) ;
 int FUNC_5 (struct strbuf*,struct format_commit_context*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (struct strbuf*,char*,size_t,size_t) ;
 int FUNC_8 (struct strbuf*,char const*,int ,struct format_commit_context*) ;

void FUNC_9(struct repository *VAR_1,
    const struct commit *VAR_2,
    const char *VAR_3, struct strbuf *VAR_4,
    const struct pretty_print_context *VAR_5)
{
 struct format_commit_context VAR_6;
 const char *VAR_7 = VAR_5->output_encoding;
 const char *VAR_8 = "UTF-8";

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.commit = VAR_2;
 VAR_6.pretty_ctx = VAR_5;
 VAR_6.wrap_start = VAR_4->len;




 VAR_6.message = FUNC_3(VAR_1, VAR_2,
            &VAR_6.commit_encoding,
            VAR_8);

 FUNC_8(VAR_4, VAR_3, VAR_0, &VAR_6);
 FUNC_5(VAR_4, &VAR_6, 0, 0, 0);


 if (VAR_7) {
  if (FUNC_6(VAR_8, VAR_7))
   VAR_7 = ((void*)0);
 } else {
  if (VAR_6.commit_encoding &&
      !FUNC_6(VAR_6.commit_encoding, VAR_8))
   VAR_7 = VAR_6.commit_encoding;
 }

 if (VAR_7) {
  size_t VAR_9;
  char *VAR_10 = FUNC_2(VAR_4->buf, VAR_4->len,
      VAR_7, VAR_8, &VAR_9);
  if (VAR_10)
   FUNC_7(VAR_4, VAR_10, VAR_9, VAR_9 + 1);
 }

 FUNC_0(VAR_6.commit_encoding);
 FUNC_4(VAR_1, VAR_2, VAR_6.message);
}

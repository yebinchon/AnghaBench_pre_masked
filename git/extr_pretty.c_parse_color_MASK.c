
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct format_commit_context {TYPE_1__* pretty_ctx; } ;
struct TYPE_2__ {int color; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,int,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 char* FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static size_t FUNC_7(struct strbuf *VAR_5,
     const char *VAR_6,
     struct format_commit_context *VAR_7)
{
 const char *VAR_8 = VAR_6;
 const char *VAR_9 = ((void*)0);

 if (VAR_6[1] == '(') {
  const char *VAR_10 = VAR_6 + 2;
  const char *VAR_11 = FUNC_5(VAR_10, ')');
  char VAR_12[VAR_0];

  if (!VAR_11)
   return 0;

  if (FUNC_3(VAR_10, "auto,", &VAR_10)) {
   if (!FUNC_6(VAR_7->pretty_ctx->color))
    return VAR_11 - VAR_6 + 1;
  } else if (FUNC_3(VAR_10, "always,", &VAR_10)) {

  } else {

   if (!FUNC_6(VAR_7->pretty_ctx->color))
    return VAR_11 - VAR_6 + 1;
  }

  if (FUNC_1(VAR_10, VAR_11 - VAR_10, VAR_12) < 0)
   FUNC_2(FUNC_0("unable to parse --pretty format"));
  FUNC_4(VAR_5, VAR_12);
  return VAR_11 - VAR_6 + 1;
 }






 if (FUNC_3(VAR_6 + 1, "red", &VAR_8))
  VAR_9 = VAR_3;
 else if (FUNC_3(VAR_6 + 1, "green", &VAR_8))
  VAR_9 = VAR_2;
 else if (FUNC_3(VAR_6 + 1, "blue", &VAR_8))
  VAR_9 = VAR_1;
 else if (FUNC_3(VAR_6 + 1, "reset", &VAR_8))
  VAR_9 = VAR_4;

 if (VAR_9 && FUNC_6(VAR_7->pretty_ctx->color))
  FUNC_4(VAR_5, VAR_9);

 return VAR_8 - VAR_6;
}

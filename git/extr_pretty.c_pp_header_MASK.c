
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct pretty_print_context {scalar_t__ fmt; } ;
struct commit {int parents; } ;
struct TYPE_2__ {int hexsz; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pretty_print_context*,struct strbuf*,struct commit const*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct pretty_print_context*,char*,struct strbuf*,char const*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char*,char const**) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (struct strbuf*,char const*,int) ;
 int FUNC_8 (struct strbuf*,int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_9(struct pretty_print_context *VAR_5,
        const char *VAR_6,
        const struct commit *VAR_7,
        const char **VAR_8,
        struct strbuf *VAR_9)
{
 int VAR_10 = 0;

 for (;;) {
  const char *VAR_11, *VAR_12 = *VAR_8;
  int VAR_13 = FUNC_3(*VAR_8);

  if (!VAR_13)
   return;
  *VAR_8 += VAR_13;

  if (VAR_13 == 1)

   return;

  if (VAR_5->fmt == VAR_2) {
   FUNC_7(VAR_9, VAR_12, VAR_13);
   continue;
  }

  if (FUNC_6(VAR_12, "parent ")) {
   if (VAR_13 != VAR_4->hexsz + 8)
    FUNC_2("bad parent line in commit");
   continue;
  }

  if (!VAR_10) {
   unsigned VAR_14 = FUNC_1(VAR_7->parents);

   FUNC_8(VAR_9, VAR_14 * (VAR_3 + 10) + 20);
   FUNC_0(VAR_5, VAR_9, VAR_7);
   VAR_10 = 1;
  }






  if (FUNC_5(VAR_12, "author ", &VAR_11)) {
   FUNC_8(VAR_9, VAR_13 + 80);
   FUNC_4(VAR_5, "Author", VAR_9, VAR_11, VAR_6);
  }
  if (FUNC_5(VAR_12, "committer ", &VAR_11) &&
      (VAR_5->fmt == VAR_0 || VAR_5->fmt == VAR_1)) {
   FUNC_8(VAR_9, VAR_13 + 80);
   FUNC_4(VAR_5, "Commit", VAR_9, VAR_11, VAR_6);
  }
 }
}

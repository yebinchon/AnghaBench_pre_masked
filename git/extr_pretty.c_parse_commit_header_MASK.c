
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int off; int len; } ;
struct TYPE_3__ {int off; int len; } ;
struct format_commit_context {char* message; int message_off; int commit_header_parsed; TYPE_2__ committer; TYPE_1__ author; } ;


 scalar_t__ FUNC_0 (char const*,char*,char const**) ;

__attribute__((used)) static void FUNC_1(struct format_commit_context *VAR_0)
{
 const char *VAR_1 = VAR_0->message;
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
  const char *VAR_3;
  int VAR_4;
  for (VAR_4 = VAR_2; VAR_1[VAR_4] && VAR_1[VAR_4] != '\n'; VAR_4++)
   ;

  if (VAR_2 == VAR_4) {
   break;
  } else if (FUNC_0(VAR_1 + VAR_2, "author ", &VAR_3)) {
   VAR_0->author.off = VAR_3 - VAR_1;
   VAR_0->author.len = VAR_1 + VAR_4 - VAR_3;
  } else if (FUNC_0(VAR_1 + VAR_2, "committer ", &VAR_3)) {
   VAR_0->committer.off = VAR_3 - VAR_1;
   VAR_0->committer.len = VAR_1 + VAR_4 - VAR_3;
  }
  VAR_2 = VAR_4;
 }
 VAR_0->message_off = VAR_2;
 VAR_0->commit_header_parsed = 1;
}

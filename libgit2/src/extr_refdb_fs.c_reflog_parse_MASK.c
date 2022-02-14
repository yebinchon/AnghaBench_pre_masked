
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {struct TYPE_17__* msg; struct TYPE_17__* committer; int oid_cur; int oid_old; } ;
typedef TYPE_1__ git_reflog_entry ;
struct TYPE_18__ {int entries; } ;
typedef TYPE_2__ git_reflog ;
struct TYPE_19__ {char* line; size_t line_len; scalar_t__ remain_len; } ;
typedef TYPE_3__ git_parse_ctx ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_3__ VAR_0 ;
 void* FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (char*,size_t) ;
 int FUNC_3 (TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,char const*,size_t) ;
 scalar_t__ FUNC_8 (char*,TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,char const**,char*,int *,int ) ;
 scalar_t__ FUNC_11 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(git_reflog *VAR_1, const char *VAR_2, size_t VAR_3)
{
 git_parse_ctx VAR_4 = VAR_0;

 if ((FUNC_7(&VAR_4, VAR_2, VAR_3)) < 0)
  return -1;

 for (; VAR_4.remain_len; FUNC_5(&VAR_4)) {
  git_reflog_entry *VAR_5;
  const char *VAR_6;
  char VAR_7;

  VAR_5 = FUNC_1(1, sizeof(*VAR_5));
  FUNC_0(VAR_5);
  VAR_5->committer = FUNC_1(1, sizeof(*VAR_5->committer));
  FUNC_0(VAR_5->committer);

  if (FUNC_6(&VAR_5->oid_old, &VAR_4) < 0 ||
      FUNC_4(&VAR_4, " ", 1) < 0 ||
      FUNC_6(&VAR_5->oid_cur, &VAR_4) < 0)
   goto next;

  VAR_6 = VAR_4.line;
  while (FUNC_8(&VAR_7, &VAR_4, 0) == 0 && VAR_7 != '\t' && VAR_7 != '\n')
   FUNC_3(&VAR_4, 1);

  if (FUNC_10(VAR_5->committer, &VAR_6, VAR_4.line, ((void*)0), 0) < 0)
   goto next;

  if (VAR_7 == '\t') {
   size_t VAR_8;
   FUNC_3(&VAR_4, 1);

   VAR_8 = VAR_4.line_len;
   if (VAR_4.line[VAR_8 - 1] == '\n')
    VAR_8--;

   VAR_5->msg = FUNC_2(VAR_4.line, VAR_8);
   FUNC_0(VAR_5->msg);
  }

  if ((FUNC_11(&VAR_1->entries, VAR_5)) < 0) {
   FUNC_9(VAR_5);
   return -1;
  }

  continue;

next:
  FUNC_9(VAR_5);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct commit_name {int prio; char* path; int name_checked; TYPE_1__* tag; int oid; } ;
struct TYPE_3__ {char* tag; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct strbuf*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_7(struct commit_name *VAR_2, struct strbuf *VAR_3)
{
 if (VAR_2->prio == 2 && !VAR_2->tag) {
  VAR_2->tag = FUNC_2(VAR_1, &VAR_2->oid);
  if (!VAR_2->tag || FUNC_3(VAR_2->tag))
   FUNC_1(FUNC_0("annotated tag %s not available"), VAR_2->path);
 }
 if (VAR_2->tag && !VAR_2->name_checked) {
  if (!VAR_2->tag->tag)
   FUNC_1(FUNC_0("annotated tag %s has no embedded name"), VAR_2->path);
  if (FUNC_5(VAR_2->tag->tag, VAR_0 ? VAR_2->path + 5 : VAR_2->path))
   FUNC_6(FUNC_0("tag '%s' is really '%s' here"), VAR_2->tag->tag, VAR_2->path);
  VAR_2->name_checked = 1;
 }

 if (VAR_2->tag) {
  if (VAR_0)
   FUNC_4(VAR_3, "tags/");
  FUNC_4(VAR_3, VAR_2->tag->tag);
 } else {
  FUNC_4(VAR_3, VAR_2->path);
 }
}

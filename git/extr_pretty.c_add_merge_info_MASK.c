
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct pretty_print_context {scalar_t__ fmt; int abbrev; } ;
struct object_id {int dummy; } ;
struct commit_list {struct commit_list* next; TYPE_2__* item; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_3__ {struct object_id oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (struct object_id*) ;
 int FUNC_2 (struct strbuf*,struct object_id*,int ) ;
 int FUNC_3 (struct strbuf*,char) ;
 int FUNC_4 (struct strbuf*,char*) ;

__attribute__((used)) static void FUNC_5(const struct pretty_print_context *VAR_1,
      struct strbuf *VAR_2, const struct commit *VAR_3)
{
 struct commit_list *VAR_4 = VAR_3->parents;

 if ((VAR_1->fmt == VAR_0) || (FUNC_0(VAR_1->fmt)) ||
     !VAR_4 || !VAR_4->next)
  return;

 FUNC_4(VAR_2, "Merge:");

 while (VAR_4) {
  struct object_id *VAR_5 = &VAR_4->item->object.oid;
  FUNC_3(VAR_2, ' ');
  if (VAR_1->abbrev)
   FUNC_2(VAR_2, VAR_5, VAR_1->abbrev);
  else
   FUNC_4(VAR_2, FUNC_1(VAR_5));
  VAR_4 = VAR_4->next;
 }
 FUNC_3(VAR_2, '\n');
}

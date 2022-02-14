
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_desc {scalar_t__ size; int entry; } ;
struct strbuf {int dummy; } ;
struct diff_options {int pathspec; TYPE_1__* repo; } ;
typedef enum interesting { ____Placeholder_interesting } interesting ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct strbuf*,int ,int *) ;
 int FUNC_1 (struct tree_desc*) ;

__attribute__((used)) static void FUNC_2(struct tree_desc *VAR_1, struct strbuf *VAR_2,
          struct diff_options *VAR_3)
{
 enum interesting VAR_4;

 while (VAR_1->size) {
  VAR_4 = FUNC_0(VAR_3->repo->index, &VAR_1->entry,
            VAR_2, 0, &VAR_3->pathspec);
  if (VAR_4) {
   if (VAR_4 == VAR_0)
    VAR_1->size = 0;
   break;
  }
  FUNC_1(VAR_1);
 }
}

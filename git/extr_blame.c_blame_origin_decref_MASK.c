
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct blame_origin* ptr; } ;
struct blame_origin {scalar_t__ refcnt; struct blame_origin* next; int commit; TYPE_1__ file; struct blame_origin* previous; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct blame_origin*) ;
 struct blame_origin* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct blame_origin*) ;

void FUNC_4(struct blame_origin *VAR_0)
{
 if (VAR_0 && --VAR_0->refcnt <= 0) {
  struct blame_origin *VAR_1, *VAR_2 = ((void*)0);
  if (VAR_0->previous)
   FUNC_4(VAR_0->previous);
  FUNC_1(VAR_0->file.ptr);

  for (VAR_1 = FUNC_2(VAR_0->commit); VAR_1; VAR_2 = VAR_1, VAR_1 = VAR_1->next) {
   if (VAR_1 == VAR_0) {
    if (VAR_2)
     VAR_2->next = VAR_1->next;
    else
     FUNC_3(VAR_0->commit, VAR_1->next);
    FUNC_1(VAR_0);
    return;
   }
  }
  FUNC_0("internal error in blame_origin_decref");
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct search_state {struct search_state* next; struct search_state* head; int refcount; } ;
struct search_domain {struct search_domain* next; struct search_domain* head; int refcount; } ;


 int FUNC_0 (struct search_state* const) ;

__attribute__((used)) static void
FUNC_1(struct search_state *const VAR_0) {
 if (!VAR_0) return;
 VAR_0->refcount--;
 if (!VAR_0->refcount) {
  struct search_domain *VAR_1, *VAR_2;
  for (VAR_2 = VAR_0->head; VAR_2; VAR_2 = VAR_1) {
   VAR_1 = VAR_2->next;
   FUNC_0(VAR_2);
  }
  FUNC_0(VAR_0);
 }
}

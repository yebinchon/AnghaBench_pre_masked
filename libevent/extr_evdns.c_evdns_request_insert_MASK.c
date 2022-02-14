
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct request* prev; struct request* next; int base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;

__attribute__((used)) static void
FUNC_2(struct request *VAR_0, struct request **VAR_1) {
 FUNC_0(VAR_0->base);
 FUNC_1(VAR_0);
 if (!*VAR_1) {
  *VAR_1 = VAR_0;
  VAR_0->next = VAR_0->prev = VAR_0;
  return;
 }

 VAR_0->prev = (*VAR_1)->prev;
 VAR_0->prev->next = VAR_0;
 VAR_0->next = *VAR_1;
 (*VAR_1)->prev = VAR_0;
}

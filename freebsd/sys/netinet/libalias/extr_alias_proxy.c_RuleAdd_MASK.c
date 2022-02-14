
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy_entry {int rule_index; struct proxy_entry* next; struct proxy_entry* last; struct libalias* la; } ;
struct libalias {struct proxy_entry* proxyList; } ;


 int FUNC_0 (struct libalias*) ;

void
FUNC_1(struct libalias *VAR_0, struct proxy_entry *VAR_1)
{
 int VAR_2;
 struct proxy_entry *VAR_3;
 struct proxy_entry *VAR_4;

 FUNC_0(VAR_0);

 VAR_1->la = VAR_0;
 if (VAR_0->proxyList == ((void*)0)) {
  VAR_0->proxyList = VAR_1;
  VAR_1->last = ((void*)0);
  VAR_1->next = ((void*)0);
  return;
 }

 VAR_2 = VAR_1->rule_index;
 VAR_3 = VAR_0->proxyList;
 VAR_4 = ((void*)0);
 while (VAR_3 != ((void*)0)) {
  if (VAR_3->rule_index >= VAR_2) {
   if (VAR_4 == ((void*)0)) {
    VAR_1->next = VAR_0->proxyList;
    VAR_1->last = ((void*)0);
    VAR_0->proxyList->last = VAR_1;
    VAR_0->proxyList = VAR_1;
    return;
   }
   VAR_4->next = VAR_1;
   VAR_3->last = VAR_1;
   VAR_1->last = VAR_3->last;
   VAR_1->next = VAR_3;
   return;
  }
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
 }

 VAR_4->next = VAR_1;
 VAR_1->last = VAR_4;
 VAR_1->next = ((void*)0);
}

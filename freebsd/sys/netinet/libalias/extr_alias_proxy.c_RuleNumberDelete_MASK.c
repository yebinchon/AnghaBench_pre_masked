
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proxy_entry {int rule_index; struct proxy_entry* next; } ;
struct libalias {struct proxy_entry* proxyList; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct proxy_entry*) ;

__attribute__((used)) static int
FUNC_2(struct libalias *VAR_0, int VAR_1)
{
 int VAR_2;
 struct proxy_entry *VAR_3;

 FUNC_0(VAR_0);
 VAR_2 = -1;
 VAR_3 = VAR_0->proxyList;
 while (VAR_3 != ((void*)0)) {
  struct proxy_entry *VAR_4;

  VAR_4 = VAR_3->next;
  if (VAR_3->rule_index == VAR_1) {
   VAR_2 = 0;
   FUNC_1(VAR_3);
  }
  VAR_3 = VAR_4;
 }

 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proxy_entry {TYPE_1__* last; TYPE_2__* next; struct libalias* la; } ;
struct libalias {TYPE_2__* proxyList; } ;
struct TYPE_4__ {TYPE_1__* last; } ;
struct TYPE_3__ {TYPE_2__* next; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct proxy_entry*) ;

__attribute__((used)) static void
FUNC_2(struct proxy_entry *VAR_0)
{
 struct libalias *VAR_1;

 VAR_1 = VAR_0->la;
 FUNC_0(VAR_1);
 if (VAR_0->last != ((void*)0))
  VAR_0->last->next = VAR_0->next;
 else
  VAR_1->proxyList = VAR_0->next;

 if (VAR_0->next != ((void*)0))
  VAR_0->next->last = VAR_0->last;

 FUNC_1(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_list {struct object_list* next; struct object* item; } ;
struct TYPE_2__ {int hash; } ;
struct object {TYPE_1__ oid; } ;
struct bitmap_index {int pack; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bitmap_index *VAR_0,
        struct object_list *VAR_1)
{
 while (VAR_1) {
  struct object *VAR_2 = VAR_1->item;
  VAR_1 = VAR_1->next;

  if (FUNC_0(VAR_2->oid.hash, VAR_0->pack) > 0)
   return 1;
 }

 return 0;
}

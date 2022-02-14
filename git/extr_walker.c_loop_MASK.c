
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walker {scalar_t__ (* fetch ) (struct walker*,int ) ;} ;
struct object_list {struct object_list* next; struct object* item; } ;
struct TYPE_2__ {int hash; } ;
struct object {int flags; TYPE_1__ oid; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct object_list*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct walker*,struct object*) ;
 struct object_list* VAR_1 ;
 struct object_list** VAR_2 ;
 int FUNC_3 (struct object*) ;
 scalar_t__ FUNC_4 (struct walker*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct walker *VAR_4)
{
 struct object_list *VAR_5;

 while (VAR_1) {
  struct object *VAR_6 = VAR_1->item;
  VAR_5 = VAR_1;
  VAR_1 = VAR_5->next;
  FUNC_0(VAR_5);
  if (!VAR_1)
   VAR_2 = &VAR_1;




  if (! (VAR_6->flags & VAR_0)) {
   if (VAR_4->fetch(VAR_4, VAR_6->oid.hash)) {
    FUNC_3(VAR_6);
    return -1;
   }
  }
  if (!VAR_6->type)
   FUNC_1(VAR_3, &VAR_6->oid);
  if (FUNC_2(VAR_4, VAR_6))
   return -1;
 }
 return 0;
}

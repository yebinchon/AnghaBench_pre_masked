
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct object {unsigned int flags; int oid; } ;
struct commit_list {struct commit_list* next; TYPE_1__* item; } ;
struct TYPE_2__ {struct object object; } ;


 int FUNC_0 (struct rev_info*,struct object*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rev_info *VAR_0,
        struct commit_list *VAR_1,
        unsigned int VAR_2)
{
 while (VAR_1) {
  struct object *VAR_3 = &VAR_1->item->object;
  VAR_3->flags |= VAR_2;
  FUNC_0(VAR_0, VAR_3, FUNC_1(&VAR_3->oid));
  VAR_1 = VAR_1->next;
 }
}

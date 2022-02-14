
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int dummy; } ;
struct object {int oid; } ;
struct commit_list {struct commit_list* next; TYPE_1__* item; } ;
struct TYPE_2__ {struct object object; } ;


 int FUNC_0 (struct rev_info*,struct object*,int ,int,unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rev_info *VAR_0,
     struct commit_list *VAR_1,
     int VAR_2,
     unsigned VAR_3)
{
 while (VAR_1) {
  struct object *VAR_4 = &VAR_1->item->object;
  FUNC_0(VAR_0, VAR_4, FUNC_1(&VAR_4->oid),
    VAR_2, VAR_3);
  VAR_1 = VAR_1->next;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_list {struct object_list* next; struct object* item; } ;
struct object {int dummy; } ;


 struct object_list* FUNC_0 (int) ;

__attribute__((used)) static struct object_list **FUNC_1(struct object *VAR_0, struct object_list **VAR_1)
{
 struct object_list *VAR_2 = FUNC_0(sizeof(struct object_list));
 VAR_2->item = VAR_0;
 VAR_2->next = *VAR_1;
 *VAR_1 = VAR_2;
 return &VAR_2->next;
}

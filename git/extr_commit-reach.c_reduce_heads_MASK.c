
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_3__ {int flags; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_4__ {struct commit_list* next; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct commit**) ;
 int FUNC_2 (int ,struct commit**,int) ;
 int VAR_1 ;
 struct commit** FUNC_3 (int,int) ;

struct commit_list *FUNC_4(struct commit_list *VAR_2)
{
 struct commit_list *VAR_3;
 struct commit_list *VAR_4 = ((void*)0), **VAR_5 = &VAR_4;
 struct commit **VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_2)
  return ((void*)0);


 for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->next)
  VAR_3->item->object.flags &= ~VAR_0;
 for (VAR_3 = VAR_2, VAR_7 = 0; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->item->object.flags & VAR_0)
   continue;
  VAR_3->item->object.flags |= VAR_0;
  VAR_7++;
 }
 VAR_6 = FUNC_3(VAR_7, sizeof(*VAR_6));
 for (VAR_3 = VAR_2, VAR_8 = 0; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->item->object.flags & VAR_0) {
   VAR_6[VAR_8++] = VAR_3->item;
   VAR_3->item->object.flags &= ~VAR_0;
  }
 }
 VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_5 = &FUNC_0(VAR_6[VAR_8], VAR_5)->next;
 FUNC_1(VAR_6);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct refspec_item {int src; } ;
struct ref {void* fetch_head_status; struct ref* next; int name; } ;
struct branch {int merge_nr; TYPE_1__** merge; } ;
typedef int refspec ;
struct TYPE_2__ {int src; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (struct branch*,int,int ) ;
 int FUNC_1 (struct ref const*,struct refspec_item*,struct ref***,int) ;
 int FUNC_2 (struct refspec_item*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ref **VAR_1,
      const struct ref *VAR_2,
             struct branch *VAR_3,
             struct ref ***VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->merge_nr; VAR_5++) {
  struct ref *VAR_6, **VAR_7 = *VAR_4;
  struct refspec_item VAR_8;

  for (VAR_6 = *VAR_1; VAR_6; VAR_6 = VAR_6->next) {
   if (FUNC_0(VAR_3, VAR_5, VAR_6->name)) {
    VAR_6->fetch_head_status = VAR_0;
    break;
   }
  }
  if (VAR_6)
   continue;
  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.src = VAR_3->merge[VAR_5]->src;
  FUNC_1(VAR_2, &VAR_8, VAR_4, 1);
  for (VAR_6 = *VAR_7; VAR_6; VAR_6 = VAR_6->next)
   VAR_6->fetch_head_status = VAR_0;
 }
}

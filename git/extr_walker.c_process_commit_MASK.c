
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct walker {int dummy; } ;
struct commit_list {TYPE_3__* item; struct commit_list* next; } ;
struct TYPE_8__ {int flags; int oid; } ;
struct commit {scalar_t__ date; struct commit_list* parents; TYPE_2__ object; } ;
struct TYPE_11__ {int object; } ;
struct TYPE_10__ {TYPE_1__* item; } ;
struct TYPE_9__ {int object; } ;
struct TYPE_7__ {scalar_t__ date; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (struct commit*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct commit*) ;
 int FUNC_4 (TYPE_4__**,int) ;
 scalar_t__ FUNC_5 (struct walker*,int *) ;
 int FUNC_6 (struct walker*,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct walker *VAR_3, struct commit *VAR_4)
{
 struct commit_list *VAR_5;

 if (FUNC_3(VAR_4))
  return -1;

 while (VAR_1 && VAR_1->item->date >= VAR_4->date) {
  FUNC_4(&VAR_1, VAR_0);
 }

 if (VAR_4->object.flags & VAR_0)
  return 0;

 FUNC_2(&VAR_2, &VAR_4->object.oid);

 FUNC_6(VAR_3, "walk %s\n", FUNC_1(&VAR_4->object.oid));

 if (FUNC_5(VAR_3, &FUNC_0(VAR_4)->object))
  return -1;

 for (VAR_5 = VAR_4->parents; VAR_5; VAR_5 = VAR_5->next) {
  if (FUNC_5(VAR_3, &VAR_5->item->object))
   return -1;
 }

 return 0;
}

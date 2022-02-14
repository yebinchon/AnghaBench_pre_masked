
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int study ;
struct object_array {int nr; TYPE_2__* objects; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_6__ {int flags; int oid; int parsed; } ;
struct commit {TYPE_3__ object; struct commit_list* parents; } ;
typedef int found ;
struct TYPE_5__ {TYPE_1__* item; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int *,struct object_array*) ;
 int FUNC_1 (struct commit*) ;
 int FUNC_2 (struct object_array*,int ,int) ;
 int FUNC_3 (struct object_array*) ;
 scalar_t__ FUNC_4 (struct object_array*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct commit *VAR_4)
{
 struct object_array VAR_5;
 struct object_array VAR_6;
 int VAR_7 = 0;
 int VAR_8;


 if (VAR_4->object.flags & VAR_1)
  return 1;
 if (VAR_4->object.flags & VAR_0)
  return 0;







 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 FUNC_0(&VAR_4->object, ((void*)0), &VAR_5);
 FUNC_0(&VAR_4->object, ((void*)0), &VAR_6);
 VAR_4->object.flags |= VAR_2;
 while (VAR_5.nr) {
  struct commit *VAR_9;
  struct commit_list *VAR_10;

  VAR_9 = (struct commit *)FUNC_4(&VAR_5);
  if (!VAR_9->object.parsed && !FUNC_5(VAR_3, &VAR_9->object.oid))
   VAR_9->object.flags |= VAR_0;

  if (VAR_9->object.flags & VAR_0) {
   VAR_7 = 1;
   break;
  }
  else if (VAR_9->object.flags & VAR_1)
   continue;
  for (VAR_10 = VAR_9->parents; VAR_10; VAR_10 = VAR_10->next) {
   struct commit *VAR_11 = VAR_10->item;
   if (VAR_11->object.flags & VAR_2)
    continue;
   VAR_11->object.flags |= VAR_2;
   FUNC_0(&VAR_11->object, ((void*)0), &VAR_5);
   FUNC_0(&VAR_11->object, ((void*)0), &VAR_6);
  }
 }
 if (!VAR_7) {




  for (VAR_8 = 0; VAR_8 < VAR_6.nr; VAR_8++) {
   struct commit *VAR_12 =
    (struct commit *)VAR_6.objects[VAR_8].item;
   if (!FUNC_6(FUNC_1(VAR_12))) {
    VAR_7 = 1;
    VAR_12->object.flags |= VAR_0;
   }
  }
  if (!VAR_7) {

   for (VAR_8 = 0; VAR_8 < VAR_6.nr; VAR_8++)
    VAR_6.objects[VAR_8].item->flags |= VAR_1;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_6.nr; VAR_8++)
  VAR_6.objects[VAR_8].item->flags &= ~VAR_2;
 if (VAR_7)
  VAR_4->object.flags |= VAR_0;
 else {
  for (VAR_8 = 0; VAR_8 < VAR_6.nr; VAR_8++)
   VAR_6.objects[VAR_8].item->flags |= VAR_1;
 }

 FUNC_3(&VAR_5);
 FUNC_3(&VAR_6);
 return !VAR_7;
}

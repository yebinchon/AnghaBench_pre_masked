
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packet_writer {int dummy; } ;
struct object_array {int nr; TYPE_1__* objects; } ;
struct object {int flags; int oid; scalar_t__ parsed; } ;
struct commit_list {struct commit_list* next; TYPE_2__* item; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_4__ {struct object object; } ;
struct TYPE_3__ {struct object* item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct object*,int *,struct object_array*) ;
 struct object_array VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct packet_writer*,char*,int ) ;
 int FUNC_3 (struct commit*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct packet_writer *VAR_4,
      const struct object_array *VAR_5,
      struct object_array *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->nr; VAR_7++) {
  struct object *VAR_8 = VAR_5->objects[VAR_7].item;
  if (VAR_8->flags & VAR_1) {
   struct commit_list *VAR_9;
   FUNC_2(VAR_4, "unshallow %s",
         FUNC_1(&VAR_8->oid));
   VAR_8->flags &= ~VAR_0;







   FUNC_5(&VAR_8->oid);
   VAR_8->parsed = 0;
   FUNC_3((struct commit *)VAR_8);
   VAR_9 = ((struct commit *)VAR_8)->parents;
   while (VAR_9) {
    FUNC_0(&VAR_9->item->object,
       ((void*)0), VAR_6);
    VAR_9 = VAR_9->next;
   }
   FUNC_0(VAR_8, ((void*)0), &VAR_2);
  }

  FUNC_4(VAR_3, &VAR_8->oid);
 }
}

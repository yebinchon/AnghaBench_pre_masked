
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int kobj; struct elevator_queue* elevator; } ;
struct TYPE_4__ {scalar_t__ name; } ;
struct elv_fs_entry {TYPE_2__ attr; } ;
struct elevator_queue {int registered; int kobj; TYPE_1__* type; } ;
struct TYPE_3__ {struct elv_fs_entry* elevator_attrs; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;

int FUNC_3(struct request_queue *VAR_1, bool VAR_2)
{
 struct elevator_queue *VAR_3 = VAR_1->elevator;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->kobj, &VAR_1->kobj, "%s", "iosched");
 if (!VAR_4) {
  struct elv_fs_entry *VAR_5 = VAR_3->type->elevator_attrs;
  if (VAR_5) {
   while (VAR_5->attr.name) {
    if (FUNC_2(&VAR_3->kobj, &VAR_5->attr))
     break;
    VAR_5++;
   }
  }
  if (VAR_2)
   FUNC_1(&VAR_3->kobj, VAR_0);

  VAR_3->registered = 1;
 }
 return VAR_4;
}

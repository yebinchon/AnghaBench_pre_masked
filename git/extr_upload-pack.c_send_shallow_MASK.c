
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct packet_writer {int dummy; } ;
struct object {int flags; int oid; } ;
struct commit_list {struct commit_list* next; TYPE_1__* item; } ;
struct TYPE_2__ {struct object object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct packet_writer*,char*,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct packet_writer *VAR_4,
    struct commit_list *VAR_5)
{
 while (VAR_5) {
  struct object *VAR_6 = &VAR_5->item->object;
  if (!(VAR_6->flags & (VAR_0|VAR_1))) {
   FUNC_1(VAR_4, "shallow %s",
         FUNC_0(&VAR_6->oid));
   FUNC_2(VAR_3, &VAR_6->oid);
   VAR_2++;
  }
  VAR_5 = VAR_5->next;
 }
}

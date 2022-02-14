
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct list_head {int dummy; } ;
struct char_queue {int list; int msg; } ;
struct TYPE_4__ {int async_queue; int wait; int lock; TYPE_1__* cl; int opened; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 struct char_queue* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(u32 VAR_4, struct list_head *VAR_5)
{
 struct char_queue *VAR_6;

 FUNC_4(&VAR_3.lock);

 if (!VAR_3.opened) {
  FUNC_5(&VAR_3.lock);
  goto out;
 }

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (!VAR_6) {
  FUNC_0(&VAR_3.cl->device,
   "Can't allocate new entry for the queue.\n");
  FUNC_5(&VAR_3.lock);
  goto out;
 }

 VAR_6->msg = VAR_4;
 FUNC_3(&VAR_6->list, VAR_5);

 FUNC_5(&VAR_3.lock);

 FUNC_6(&VAR_3.wait);
 FUNC_1(&VAR_3.async_queue, VAR_2, VAR_1);

out:
 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct drbd_thread {int t_state; int reset_cpu_mask; int t_lock; int * name; struct task_struct* task; TYPE_1__* connection; struct drbd_resource* resource; int stop; } ;
struct drbd_resource {int kref; int name; } ;
struct TYPE_5__ {int pid; int comm; } ;
struct TYPE_4__ {int kref; } ;



 int FUNC_0 (struct task_struct*) ;



 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drbd_resource*,char*) ;
 int FUNC_2 (struct drbd_resource*,char*,int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 struct task_struct* FUNC_7 (int ,void*,char*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct task_struct*) ;

int FUNC_13(struct drbd_thread *VAR_5)
{
 struct drbd_resource *VAR_6 = VAR_5->resource;
 struct task_struct *VAR_7;
 unsigned long VAR_8;



 FUNC_9(&VAR_5->t_lock, VAR_8);

 switch (VAR_5->t_state) {
 case 130:
  FUNC_2(VAR_6, "Starting %s thread (from %s [%d])\n",
    VAR_5->name, VAR_1->comm, VAR_1->pid);


  if (!FUNC_11(VAR_0)) {
   FUNC_1(VAR_6, "Failed to get module reference in drbd_thread_start\n");
   FUNC_10(&VAR_5->t_lock, VAR_8);
   return 0;
  }

  FUNC_5(&VAR_6->kref);
  if (VAR_5->connection)
   FUNC_5(&VAR_5->connection->kref);

  FUNC_4(&VAR_5->stop);
  VAR_5->reset_cpu_mask = 1;
  VAR_5->t_state = 128;
  FUNC_10(&VAR_5->t_lock, VAR_8);
  FUNC_3(VAR_1);

  VAR_7 = FUNC_7(VAR_4, (void *) VAR_5,
        "drbd_%c_%s", VAR_5->name[0], VAR_5->resource->name);

  if (FUNC_0(VAR_7)) {
   FUNC_1(VAR_6, "Couldn't start thread\n");

   if (VAR_5->connection)
    FUNC_6(&VAR_5->connection->kref, VAR_2);
   FUNC_6(&VAR_6->kref, VAR_3);
   FUNC_8(VAR_0);
   return 0;
  }
  FUNC_9(&VAR_5->t_lock, VAR_8);
  VAR_5->task = VAR_7;
  VAR_5->t_state = 128;
  FUNC_10(&VAR_5->t_lock, VAR_8);
  FUNC_12(VAR_7);
  break;
 case 131:
  VAR_5->t_state = 129;
  FUNC_2(VAR_6, "Restarting %s thread (from %s [%d])\n",
    VAR_5->name, VAR_1->comm, VAR_1->pid);

 case 128:
 case 129:
 default:
  FUNC_10(&VAR_5->t_lock, VAR_8);
  break;
 }

 return 1;
}

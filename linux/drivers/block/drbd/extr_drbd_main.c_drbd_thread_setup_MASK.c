
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drbd_thread {int* name; int (* function ) (struct drbd_thread*) ;scalar_t__ t_state; TYPE_1__* connection; int t_lock; int stop; int * task; struct drbd_resource* resource; } ;
struct drbd_resource {char* name; int kref; } ;
struct TYPE_4__ {int* comm; } ;
struct TYPE_3__ {int kref; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct drbd_resource*,char*,int*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int*,int,char*,int,char*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct drbd_thread*) ;

__attribute__((used)) static int FUNC_10(void *VAR_9)
{
 struct drbd_thread *VAR_10 = (struct drbd_thread *) VAR_9;
 struct drbd_resource *VAR_11 = VAR_10->resource;
 unsigned long VAR_12;
 int VAR_13;

 FUNC_6(VAR_6->comm, sizeof(VAR_6->comm), "drbd_%c_%s",
   VAR_10->name[0],
   VAR_11->name);

 FUNC_0(VAR_0);
 FUNC_0(VAR_4);
restart:
 VAR_13 = VAR_10->function(VAR_10);

 FUNC_7(&VAR_10->t_lock, VAR_12);
 if (VAR_10->t_state == VAR_2) {
  FUNC_2(VAR_11, "Restarting %s thread\n", VAR_10->name);
  VAR_10->t_state = VAR_3;
  FUNC_8(&VAR_10->t_lock, VAR_12);
  goto restart;
 }

 VAR_10->task = ((void*)0);
 VAR_10->t_state = VAR_1;
 FUNC_5();
 FUNC_1(&VAR_10->stop);
 FUNC_8(&VAR_10->t_lock, VAR_12);

 FUNC_2(VAR_11, "Terminating %s\n", VAR_6->comm);



 if (VAR_10->connection)
  FUNC_3(&VAR_10->connection->kref, VAR_7);
 FUNC_3(&VAR_11->kref, VAR_8);
 FUNC_4(VAR_5);
 return VAR_13;
}

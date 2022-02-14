
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {int flags; int* cmds_to_issue; int svc_wait; } ;
struct driver_data {int slot_groups; int dd_flag; int queue; struct mtip_port* port; int tags; TYPE_1__* pdev; int irq_workers_active; } ;
struct TYPE_2__ {int dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,struct driver_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long,int*) ;
 int FUNC_5 (int *,char*) ;
 unsigned long FUNC_6 (int*,unsigned int,unsigned long) ;
 unsigned long VAR_8 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;
 unsigned long FUNC_9 (int) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (struct driver_data*) ;
 scalar_t__ FUNC_11 (struct driver_data*) ;
 int FUNC_12 (struct driver_data*) ;
 int FUNC_13 (struct mtip_port*,unsigned long) ;
 int VAR_10 ;
 int FUNC_14 (unsigned long,int*) ;
 int FUNC_15 (unsigned long,int*) ;
 scalar_t__ FUNC_16 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int ,int) ;

__attribute__((used)) static int FUNC_19(void *VAR_11)
{
 struct driver_data *VAR_12 = (struct driver_data *)VAR_11;
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17 = VAR_12->slot_groups * 32;
 struct mtip_port *VAR_18 = VAR_12->port;

 while (1) {
  if (FUNC_7() ||
   FUNC_15(VAR_5, &VAR_18->flags))
   goto st_out;
  FUNC_4(VAR_4, &VAR_18->flags);





  FUNC_18(VAR_18->svc_wait, (VAR_18->flags) &&
   (VAR_18->flags & VAR_6));

  if (FUNC_7() ||
   FUNC_15(VAR_5, &VAR_18->flags))
   goto st_out;

  if (FUNC_17(FUNC_15(VAR_0,
    &VAR_12->dd_flag)))
   goto st_out;

  FUNC_14(VAR_4, &VAR_18->flags);

restart_eh:

  if (FUNC_15(VAR_1, &VAR_18->flags)) {
   FUNC_12(VAR_12);
   FUNC_4(VAR_1, &VAR_18->flags);
  }

  if (FUNC_15(VAR_1, &VAR_18->flags))
   goto restart_eh;

  if (FUNC_15(VAR_7, &VAR_18->flags)) {
   VAR_16 = VAR_8 + FUNC_9(5000);

   do {
    FUNC_8(100);
   } while (FUNC_0(&VAR_12->irq_workers_active) != 0 &&
    FUNC_16(VAR_8, VAR_16));

   if (FUNC_0(&VAR_12->irq_workers_active) != 0)
    FUNC_5(&VAR_12->pdev->dev,
     "Completion workers still active!");

   FUNC_1(VAR_12->queue);

   FUNC_2(&VAR_12->tags, VAR_10, VAR_12);

   FUNC_14(VAR_2, &VAR_12->port->flags);

   if (FUNC_10(VAR_12))
    FUNC_2(&VAR_12->tags,
       VAR_9, VAR_12);

   FUNC_4(VAR_7, &VAR_12->port->flags);

   FUNC_3(VAR_12->queue);
  }

  if (FUNC_15(VAR_2, &VAR_18->flags)) {
   VAR_13 = 1;

   VAR_14 = VAR_17;
   VAR_15 = 0;
   while (1) {
    VAR_13 = FUNC_6(VAR_18->cmds_to_issue,
      VAR_17, VAR_13);
    if (VAR_15 == 1) {
     if ((VAR_14 >= VAR_13) ||
      (VAR_13 >= VAR_17))
      break;
    }
    if (FUNC_17(VAR_14 == VAR_17))
     VAR_14 = VAR_13;

    if (FUNC_17(VAR_13 == VAR_17)) {
     VAR_13 = 1;
     VAR_15 = 1;
     continue;
    }


    FUNC_13(VAR_18, VAR_13);

    FUNC_4(VAR_13, VAR_18->cmds_to_issue);
   }

   FUNC_4(VAR_2, &VAR_18->flags);
  }

  if (FUNC_15(VAR_3, &VAR_18->flags)) {
   if (FUNC_11(VAR_12) == 0)
    FUNC_4(VAR_3, &VAR_18->flags);
  }
 }

st_out:
 return 0;
}

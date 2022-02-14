
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priority_group {int bypassed; struct multipath* m; } ;
struct pgpath {struct priority_group* pg; } ;
struct multipath {int lock; int pg_init_wait; int flags; int pg_init_in_progress; int * current_pg; struct pgpath* current_pgpath; int hw_handler_name; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 scalar_t__ FUNC_1 (struct multipath*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct multipath*,struct priority_group*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct pgpath*) ;
 int FUNC_6 (struct multipath*,struct pgpath*) ;
 int FUNC_7 (struct multipath*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(void *VAR_3, int VAR_4)
{
 struct pgpath *VAR_5 = VAR_3;
 struct priority_group *VAR_6 = VAR_5->pg;
 struct multipath *VAR_7 = VAR_6->m;
 unsigned long VAR_8;
 bool VAR_9 = 0;


 switch (VAR_4) {
 case 130:
  break;
 case 131:
  if (!VAR_7->hw_handler_name) {
   VAR_4 = 0;
   break;
  }
  FUNC_0("Could not failover the device: Handler scsi_dh_%s "
        "Error %d.", VAR_7->hw_handler_name, VAR_4);



  FUNC_5(VAR_5);
  break;
 case 133:




  FUNC_3(VAR_7, VAR_6, 1);
  break;
 case 128:

  VAR_9 = 1;

 case 132:
 case 129:
  if (FUNC_6(VAR_7, VAR_5))
   FUNC_5(VAR_5);
  VAR_4 = 0;
  break;
 case 134:
 default:





  FUNC_5(VAR_5);
 }

 FUNC_9(&VAR_7->lock, VAR_8);
 if (VAR_4) {
  if (VAR_5 == VAR_7->current_pgpath) {
   FUNC_0("Could not failover device. Error %d.", VAR_4);
   VAR_7->current_pgpath = ((void*)0);
   VAR_7->current_pg = ((void*)0);
  }
 } else if (!FUNC_11(VAR_1, &VAR_7->flags))
  VAR_6->bypassed = 0;

 if (FUNC_2(&VAR_7->pg_init_in_progress) > 0)

  goto out;

 if (FUNC_11(VAR_1, &VAR_7->flags)) {
  if (VAR_9)
   FUNC_8(VAR_0, &VAR_7->flags);
  else
   FUNC_4(VAR_0, &VAR_7->flags);

  if (FUNC_1(VAR_7))
   goto out;
 }
 FUNC_4(VAR_2, &VAR_7->flags);

 FUNC_7(VAR_7);




 FUNC_12(&VAR_7->pg_init_wait);

out:
 FUNC_10(&VAR_7->lock, VAR_8);
}

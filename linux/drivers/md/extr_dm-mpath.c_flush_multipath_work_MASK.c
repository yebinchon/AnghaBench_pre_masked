
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {scalar_t__ queue_mode; int trigger_event; int process_queued_bios; int flags; int pg_init_in_progress; scalar_t__ hw_handler_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct multipath*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct multipath *VAR_3)
{
 if (VAR_3->hw_handler_name) {
  FUNC_5(VAR_1, &VAR_3->flags);
  FUNC_6();

  if (FUNC_0(&VAR_3->pg_init_in_progress))
   FUNC_3(VAR_2);
  FUNC_4(VAR_3);

  FUNC_1(VAR_1, &VAR_3->flags);
  FUNC_6();
 }

 if (VAR_3->queue_mode == VAR_0)
  FUNC_2(&VAR_3->process_queued_bios);
 FUNC_2(&VAR_3->trigger_event);
}

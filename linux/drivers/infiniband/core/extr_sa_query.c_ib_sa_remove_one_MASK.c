
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_sa_device {int end_port; int start_port; TYPE_2__* port; int event_handler; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sm_ah; int agent; int ib_cpi_work; } ;
struct TYPE_3__ {int ref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct ib_sa_device*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct ib_device*,int) ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_2, void *VAR_3)
{
 struct ib_sa_device *VAR_4 = VAR_3;
 int VAR_5;

 if (!VAR_4)
  return;

 FUNC_2(&VAR_4->event_handler);
 FUNC_1(VAR_1);

 for (VAR_5 = 0; VAR_5 <= VAR_4->end_port - VAR_4->start_port; ++VAR_5) {
  if (FUNC_6(VAR_2, VAR_5 + 1)) {
   FUNC_0(&VAR_4->port[VAR_5].ib_cpi_work);
   FUNC_3(VAR_4->port[VAR_5].agent);
   if (VAR_4->port[VAR_5].sm_ah)
    FUNC_5(&VAR_4->port[VAR_5].sm_ah->ref, VAR_0);
  }

 }

 FUNC_4(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_sa_device {int start_port; int end_port; TYPE_2__* port; int event_handler; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int valid; } ;
struct TYPE_4__ {int port_num; int agent; int update_task; int ib_cpi_work; TYPE_1__ classport_info; int classport_lock; int * sm_ah; int ah_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct ib_device*,int ) ;
 int FUNC_2 (int *,int (*) (int *)) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ib_device*,int,int ,int *,int ,int ,int ,struct ib_sa_device*,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct ib_device*,int *,struct ib_sa_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ib_sa_device*) ;
 struct ib_sa_device* FUNC_9 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (struct ib_device*,int) ;
 int FUNC_11 (struct ib_device*) ;
 int FUNC_12 (struct ib_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ib_sa_device*,int ,int) ;
 int VAR_7 ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct ib_device *VAR_8)
{
 struct ib_sa_device *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0;

 VAR_10 = FUNC_12(VAR_8);
 VAR_11 = FUNC_11(VAR_8);

 VAR_9 = FUNC_9(FUNC_14(VAR_9, VAR_3, VAR_11 - VAR_10 + 1), VAR_0);
 if (!VAR_9)
  return;

 VAR_9->start_port = VAR_10;
 VAR_9->end_port = VAR_11;

 for (VAR_12 = 0; VAR_12 <= VAR_11 - VAR_10; ++VAR_12) {
  FUNC_13(&VAR_9->port[VAR_12].ah_lock);
  if (!FUNC_10(VAR_8, VAR_12 + 1))
   continue;

  VAR_9->port[VAR_12].sm_ah = ((void*)0);
  VAR_9->port[VAR_12].port_num = VAR_12 + VAR_10;

  FUNC_13(&VAR_9->port[VAR_12].classport_lock);
  VAR_9->port[VAR_12].classport_info.valid = 0;

  VAR_9->port[VAR_12].agent =
   FUNC_5(VAR_8, VAR_12 + VAR_10, VAR_1,
           ((void*)0), 0, VAR_6,
           VAR_4, VAR_9, 0);
  if (FUNC_3(VAR_9->port[VAR_12].agent))
   goto err;

  FUNC_2(&VAR_9->port[VAR_12].update_task, FUNC_15);
  FUNC_0(&VAR_9->port[VAR_12].ib_cpi_work,
      VAR_7);

  VAR_13++;
 }

 if (!VAR_13)
  goto free;

 FUNC_6(VAR_8, &VAR_5, VAR_9);
 FUNC_1(&VAR_9->event_handler, VAR_8, VAR_2);
 FUNC_4(&VAR_9->event_handler);

 for (VAR_12 = 0; VAR_12 <= VAR_11 - VAR_10; ++VAR_12) {
  if (FUNC_10(VAR_8, VAR_12 + 1))
   FUNC_15(&VAR_9->port[VAR_12].update_task);
 }

 return;

err:
 while (--VAR_12 >= 0) {
  if (FUNC_10(VAR_8, VAR_12 + 1))
   FUNC_7(VAR_9->port[VAR_12].agent);
 }
free:
 FUNC_8(VAR_9);
 return;
}

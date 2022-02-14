
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_sa_port {int dummy; } ;
struct ib_sa_device {int start_port; int end_port; TYPE_2__* port; int event_handler; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int valid; } ;
struct TYPE_4__ {int port_num; int agent; int update_task; TYPE_1__ classport_info; int classport_lock; int * sm_ah; int ah_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ib_device*,int ) ;
 int FUNC_1 (int *,int (*) (int *)) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct ib_device*,int,int ,int *,int ,int ,int ,struct ib_sa_device*,int ) ;
 int VAR_2 ;
 int FUNC_5 (struct ib_device*,int *,struct ib_sa_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ib_sa_device*) ;
 struct ib_sa_device* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (struct ib_device*,int) ;
 int FUNC_10 (struct ib_device*) ;
 int FUNC_11 (struct ib_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct ib_device *VAR_6)
{
 struct ib_sa_device *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_11(VAR_6);
 VAR_9 = FUNC_10(VAR_6);

 VAR_7 = FUNC_8(sizeof *VAR_7 +
    (VAR_9 - VAR_8 + 1) * sizeof (struct ib_sa_port),
    VAR_0);
 if (!VAR_7)
  return;

 VAR_7->start_port = VAR_8;
 VAR_7->end_port = VAR_9;

 for (VAR_10 = 0; VAR_10 <= VAR_9 - VAR_8; ++VAR_10) {
  FUNC_12(&VAR_7->port[VAR_10].ah_lock);
  if (!FUNC_9(VAR_6, VAR_10 + 1))
   continue;

  VAR_7->port[VAR_10].sm_ah = ((void*)0);
  VAR_7->port[VAR_10].port_num = VAR_10 + VAR_8;

  FUNC_12(&VAR_7->port[VAR_10].classport_lock);
  VAR_7->port[VAR_10].classport_info.valid = 0;

  VAR_7->port[VAR_10].agent =
   FUNC_4(VAR_6, VAR_10 + VAR_8, VAR_1,
           ((void*)0), 0, VAR_5,
           VAR_3, VAR_7, 0);
  if (FUNC_2(VAR_7->port[VAR_10].agent))
   goto err;

  FUNC_1(&VAR_7->port[VAR_10].update_task, FUNC_13);

  VAR_11++;
 }

 if (!VAR_11)
  goto free;

 FUNC_5(VAR_6, &VAR_4, VAR_7);
 FUNC_0(&VAR_7->event_handler, VAR_6, VAR_2);
 if (FUNC_3(&VAR_7->event_handler))
  goto err;

 for (VAR_10 = 0; VAR_10 <= VAR_9 - VAR_8; ++VAR_10) {
  if (FUNC_9(VAR_6, VAR_10 + 1))
   FUNC_13(&VAR_7->port[VAR_10].update_task);
 }

 return;

err:
 while (--VAR_10 >= 0) {
  if (FUNC_9(VAR_6, VAR_10 + 1))
   FUNC_6(VAR_7->port[VAR_10].agent);
 }
free:
 FUNC_7(VAR_7);
 return;
}

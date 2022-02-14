
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct request {int dummy; } ;
struct ide_pm_state {scalar_t__ pm_state; int pm_step; } ;
struct device {int dummy; } ;
typedef int rqpm ;
struct TYPE_9__ {scalar_t__ event; } ;
typedef TYPE_1__ pm_message_t ;
typedef int ide_hwif_t ;
struct TYPE_10__ {int dn; int queue; int * hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_12__ {struct ide_pm_state* special; int type; } ;
struct TYPE_11__ {scalar_t__ result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,struct request*,int ) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_5__* FUNC_7 (struct request*) ;
 int FUNC_8 (struct ide_pm_state*,int ,int) ;
 TYPE_4__* FUNC_9 (struct request*) ;
 TYPE_2__* FUNC_10 (struct device*) ;

int FUNC_11(struct device *VAR_6, pm_message_t VAR_7)
{
 ide_drive_t *VAR_8 = FUNC_10(VAR_6);
 ide_drive_t *VAR_9 = FUNC_5(VAR_8);
 ide_hwif_t *VAR_10 = VAR_8->hwif;
 struct request *VAR_11;
 struct ide_pm_state VAR_12;
 int VAR_13;

 if (FUNC_6(VAR_10)) {

  if ((VAR_8->dn & 1) == 0 || VAR_9 == ((void*)0))
   FUNC_3(VAR_10);
 }

 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 VAR_11 = FUNC_1(VAR_8->queue, VAR_5, 0);
 FUNC_7(VAR_11)->type = VAR_0;
 FUNC_7(VAR_11)->special = &VAR_12;
 VAR_12.pm_step = VAR_2;
 if (VAR_7.event == VAR_4)
  VAR_7.event = VAR_3;
 VAR_12.pm_state = VAR_7.event;

 FUNC_0(VAR_8->queue, ((void*)0), VAR_11, 0);
 VAR_13 = FUNC_9(VAR_11)->result ? -VAR_1 : 0;
 FUNC_2(VAR_11);

 if (VAR_13 == 0 && FUNC_6(VAR_10)) {

  if ((VAR_8->dn & 1) || VAR_9 == ((void*)0))
   FUNC_4(VAR_10, 0);
 }

 return VAR_13;
}

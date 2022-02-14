
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct request {int dummy; } ;
struct ide_pm_state {int pm_state; int pm_step; } ;
struct ide_driver {int (* resume ) (TYPE_1__*) ;} ;
struct device {scalar_t__ driver; } ;
typedef int rqpm ;
typedef int ide_hwif_t ;
struct TYPE_8__ {int dn; int queue; int * hwif; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_9__ {struct ide_pm_state* special; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct request* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct request*) ;
 scalar_t__ FUNC_8 (int *) ;
 TYPE_4__* FUNC_9 (struct request*) ;
 int FUNC_10 (struct ide_pm_state*,int ,int) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_1__* FUNC_12 (struct device*) ;
 struct ide_driver* FUNC_13 (scalar_t__) ;

int FUNC_14(struct device *VAR_5)
{
 ide_drive_t *VAR_6 = FUNC_12(VAR_5);
 ide_drive_t *VAR_7 = FUNC_6(VAR_6);
 ide_hwif_t *VAR_8 = VAR_6->hwif;
 struct request *VAR_9;
 struct ide_pm_state VAR_10;
 int VAR_11;

 FUNC_1(VAR_6->queue, 1);

 if (FUNC_8(VAR_8)) {

  if ((VAR_6->dn & 1) == 0 || VAR_7 == ((void*)0)) {
   FUNC_5(VAR_8, 1);
   FUNC_4(VAR_8);
  }

  FUNC_3(VAR_6);
 }

 FUNC_10(&VAR_10, 0, sizeof(VAR_10));
 VAR_9 = FUNC_0(VAR_6->queue, VAR_4, VAR_1);
 FUNC_9(VAR_9)->type = VAR_0;
 FUNC_9(VAR_9)->special = &VAR_10;
 VAR_10.pm_step = VAR_2;
 VAR_10.pm_state = VAR_3;

 VAR_11 = FUNC_7(VAR_9);
 FUNC_2(VAR_9);

 if (VAR_11 == 0 && VAR_5->driver) {
  struct ide_driver *VAR_12 = FUNC_13(VAR_5->driver);

  if (VAR_12->resume)
   VAR_12->resume(VAR_6);
 }

 return VAR_11;
}

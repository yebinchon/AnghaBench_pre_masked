
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_11__ {scalar_t__ val; } ;
struct TYPE_14__ {scalar_t__ smbus_alert; TYPE_2__ init; } ;
struct TYPE_13__ {scalar_t__ irq; } ;
struct TYPE_10__ {int * parent; } ;
struct TYPE_12__ {TYPE_1__ dev; } ;


 TYPE_9__* VAR_0 ;
 TYPE_6__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_6__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 (int) ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 size_t VAR_6 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 int VAR_8;


 FUNC_7(((void*)0), 1);
 FUNC_6(((void*)0), 1);

 if (VAR_0[VAR_6].init.val) {
  FUNC_4(1, &VAR_0[VAR_6].init);

  FUNC_5(100);
 }

 VAR_4.dev.parent = &VAR_7->dev;
 VAR_8 = FUNC_2(&VAR_4);
 if (VAR_8) {
  FUNC_0(&VAR_7->dev, "Unable to register with I2C\n");
  return VAR_8;
 }


 if (VAR_0[VAR_6].smbus_alert && VAR_3) {
  VAR_1.irq = VAR_3;
  VAR_2 = FUNC_3(&VAR_4, &VAR_1);
  if (VAR_2)
   FUNC_4(1, &VAR_5);
  else
   FUNC_1(&VAR_7->dev, "Failed to register ARA client\n");
 }

 return 0;
}

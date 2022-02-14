
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct parport {int number; int name; TYPE_3__* physport; } ;
struct pardev_cb {struct i2c_par* private; int irq_func; int flags; } ;
struct TYPE_16__ {int parent; } ;
struct TYPE_13__ {TYPE_2__ dev; TYPE_8__* algo_data; int name; int class; int owner; } ;
struct TYPE_19__ {int udelay; struct parport* data; int * getscl; } ;
struct i2c_par {TYPE_4__* pdev; int node; scalar_t__ ara; int alert_data; TYPE_10__ adapter; TYPE_8__ algo_data; } ;
typedef int i2c_parport_cb ;
struct TYPE_20__ {scalar_t__ val; } ;
struct TYPE_18__ {int dev; } ;
struct TYPE_17__ {int dev; } ;
struct TYPE_15__ {int val; } ;
struct TYPE_14__ {scalar_t__ smbus_alert; TYPE_9__ init; TYPE_1__ getscl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_12__* VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (TYPE_10__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_10__*,int *) ;
 int FUNC_4 (struct i2c_par*) ;
 struct i2c_par* FUNC_5 (int,int ) ;
 int FUNC_6 (struct parport*,int,TYPE_9__*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct pardev_cb*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int* VAR_9 ;
 TYPE_8__ VAR_10 ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (struct parport*) ;
 int FUNC_14 (struct parport*) ;
 TYPE_4__* FUNC_15 (struct parport*,char*,struct pardev_cb*,int) ;
 int FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (struct parport*,int) ;
 int FUNC_18 (struct parport*,int) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (char*,int) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int ,char*,int) ;
 size_t VAR_11 ;

__attribute__((used)) static void FUNC_23(struct parport *VAR_12)
{
 struct i2c_par *VAR_13;
 int VAR_14;
 struct pardev_cb VAR_15;

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  if (VAR_9[VAR_14] == -1)
   continue;
  if (VAR_12->number == VAR_9[VAR_14])
   break;
 }
 if (VAR_14 == VAR_2) {
  FUNC_20("Not using parport%d.\n", VAR_12->number);
  return;
 }

 VAR_13 = FUNC_5(sizeof(struct i2c_par), VAR_0);
 if (!VAR_13)
  return;
 FUNC_8(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.flags = VAR_3;
 VAR_15.irq_func = VAR_8;
 VAR_15.private = VAR_13;

 FUNC_20("attaching to %s\n", VAR_12->name);
 FUNC_13(VAR_12);
 VAR_13->pdev = FUNC_15(VAR_12, "i2c-parport",
         &VAR_15, VAR_14);
 if (!VAR_13->pdev) {
  FUNC_21("Unable to register with parport\n");
  goto err_free;
 }


 VAR_13->adapter.owner = VAR_4;
 VAR_13->adapter.class = VAR_1;
 FUNC_22(VAR_13->adapter.name, "Parallel port adapter",
  sizeof(VAR_13->adapter.name));
 VAR_13->algo_data = VAR_10;

 if (!VAR_7[VAR_11].getscl.val) {
  VAR_13->algo_data.getscl = ((void*)0);
  VAR_13->algo_data.udelay = 50;
 }
 VAR_13->algo_data.data = VAR_12;
 VAR_13->adapter.algo_data = &VAR_13->algo_data;
 VAR_13->adapter.dev.parent = VAR_12->physport->dev;

 if (FUNC_12(VAR_13->pdev) < 0) {
  FUNC_0(&VAR_13->pdev->dev,
   "Could not claim parallel port\n");
  goto err_unregister;
 }


 FUNC_18(VAR_12, 1);
 FUNC_17(VAR_12, 1);

 if (VAR_7[VAR_11].init.val) {
  FUNC_6(VAR_12, 1, &VAR_7[VAR_11].init);

  FUNC_9(100);
 }

 if (FUNC_2(&VAR_13->adapter) < 0) {
  FUNC_0(&VAR_13->pdev->dev, "Unable to register with I2C\n");
  goto err_unregister;
 }


 if (VAR_7[VAR_11].smbus_alert) {
  VAR_13->ara = FUNC_3(&VAR_13->adapter,
           &VAR_13->alert_data);
  if (VAR_13->ara)
   FUNC_14(VAR_12);
  else
   FUNC_1(&VAR_13->pdev->dev,
     "Failed to register ARA client\n");
 }


 FUNC_10(&VAR_6);
 FUNC_7(&VAR_13->node, &VAR_5);
 FUNC_11(&VAR_6);
 return;

 err_unregister:
 FUNC_16(VAR_13->pdev);
 FUNC_19(VAR_13->pdev);
 err_free:
 FUNC_4(VAR_13);
}

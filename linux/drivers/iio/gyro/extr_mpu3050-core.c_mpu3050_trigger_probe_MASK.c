
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mpu3050 {int irq_opendrain; int irq_actl; int irq_latch; int irq; TYPE_2__* trig; TYPE_7__* dev; } ;
struct iio_dev {int trig; int dev; int id; int name; } ;
struct TYPE_10__ {int of_node; } ;
struct TYPE_8__ {TYPE_7__* parent; } ;
struct TYPE_9__ {int * ops; TYPE_1__ dev; int name; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;




 int FUNC_0 (TYPE_7__*,char*,int,...) ;
 int FUNC_1 (int *,char*) ;
 TYPE_2__* FUNC_2 (int *,char*,int ,int ) ;
 struct mpu3050* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_7 (int) ;
 unsigned long FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (int ,char*) ;
 int FUNC_10 (int,int ,int ,unsigned long,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_11(struct iio_dev *VAR_6, int VAR_7)
{
 struct mpu3050 *VAR_8 = FUNC_3(VAR_6);
 unsigned long VAR_9;
 int VAR_10;

 VAR_8->trig = FUNC_2(&VAR_6->dev,
            "%s-dev%d",
            VAR_6->name,
            VAR_6->id);
 if (!VAR_8->trig)
  return -VAR_0;


 if (FUNC_9(VAR_8->dev->of_node, "drive-open-drain"))
  VAR_8->irq_opendrain = 1;

 VAR_9 = FUNC_8(FUNC_7(VAR_7));





 switch (VAR_9) {
 case 128:
  FUNC_1(&VAR_6->dev,
    "pulse interrupts on the rising edge\n");
  break;
 case 131:
  VAR_8->irq_actl = 1;
  FUNC_1(&VAR_6->dev,
    "pulse interrupts on the falling edge\n");
  break;
 case 130:
  VAR_8->irq_latch = 1;
  FUNC_1(&VAR_6->dev,
    "interrupts active high level\n");





  VAR_9 |= VAR_1;
  break;
 case 129:
  VAR_8->irq_latch = 1;
  VAR_8->irq_actl = 1;
  VAR_9 |= VAR_1;
  FUNC_1(&VAR_6->dev,
    "interrupts active low level\n");
  break;
 default:

  FUNC_0(&VAR_6->dev,
   "unsupported IRQ trigger specified (%lx), enforce "
   "rising edge\n", VAR_9);
  VAR_9 = 128;
  break;
 }


 if (VAR_8->irq_opendrain)
  VAR_9 |= VAR_2;

 VAR_10 = FUNC_10(VAR_7,
       VAR_3,
       VAR_4,
       VAR_9,
       VAR_8->trig->name,
       VAR_8->trig);
 if (VAR_10) {
  FUNC_0(VAR_8->dev,
   "can't get IRQ %d, error %d\n", VAR_7, VAR_10);
  return VAR_10;
 }

 VAR_8->irq = VAR_7;
 VAR_8->trig->dev.parent = VAR_8->dev;
 VAR_8->trig->ops = &VAR_5;
 FUNC_6(VAR_8->trig, VAR_6);

 VAR_10 = FUNC_5(VAR_8->trig);
 if (VAR_10)
  return VAR_10;

 VAR_6->trig = FUNC_4(VAR_8->trig);

 return 0;
}

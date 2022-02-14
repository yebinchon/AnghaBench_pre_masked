
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct tps65086_gpio {TYPE_1__ chip; TYPE_4__* tps; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 TYPE_4__* FUNC_1 (int ) ;
 struct tps65086_gpio* FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,struct tps65086_gpio*) ;
 int FUNC_4 (struct platform_device*,struct tps65086_gpio*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_3)
{
 struct tps65086_gpio *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_4(VAR_3, VAR_4);

 VAR_4->tps = FUNC_1(VAR_3->dev.parent);
 VAR_4->chip = VAR_2;
 VAR_4->chip.parent = VAR_4->tps->dev;

 VAR_5 = FUNC_3(&VAR_4->chip, VAR_4);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_3->dev, "Could not register gpiochip, %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}

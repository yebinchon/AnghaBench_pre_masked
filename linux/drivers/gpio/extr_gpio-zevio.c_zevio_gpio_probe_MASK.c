
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ngpio; TYPE_3__* parent; } ;
struct TYPE_7__ {TYPE_1__ gc; } ;
struct zevio_gpio {TYPE_2__ chip; int lock; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 struct zevio_gpio* FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (int ,TYPE_2__*,struct zevio_gpio*) ;
 int FUNC_4 (struct platform_device*,struct zevio_gpio*) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (struct zevio_gpio*,int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct zevio_gpio *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_2(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(VAR_4, VAR_5);


 VAR_5->chip.gc = VAR_3;
 VAR_5->chip.gc.parent = &VAR_4->dev;

 VAR_6 = FUNC_3(VAR_4->dev.of_node,
      &(VAR_5->chip),
      VAR_5);
 if (VAR_6) {
  FUNC_1(&VAR_4->dev, "failed to add gpiochip: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_5(&VAR_5->lock);


 for (VAR_7 = 0; VAR_7 < VAR_5->chip.gc.ngpio; VAR_7 += 8)
  FUNC_6(VAR_5, VAR_7, VAR_2, 0xFF);

 FUNC_0(VAR_5->chip.gc.parent, "ZEVIO GPIO controller set up!\n");

 return 0;
}

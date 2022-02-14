
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ngpio; int * parent; int label; } ;
struct sch_gpio {int resume_base; TYPE_1__ chip; int iobase; int lock; } ;
struct resource {int start; } ;
struct platform_device {int id; int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,struct sch_gpio*) ;
 struct sch_gpio* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct platform_device*,struct sch_gpio*) ;
 int FUNC_6 (struct resource*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_7 (struct sch_gpio*,int,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct sch_gpio *VAR_8;
 struct resource *VAR_9;

 VAR_8 = FUNC_2(&VAR_7->dev, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_4(VAR_7, VAR_5, 0);
 if (!VAR_9)
  return -VAR_0;

 if (!FUNC_3(&VAR_7->dev, VAR_9->start, FUNC_6(VAR_9),
     VAR_7->name))
  return -VAR_0;

 FUNC_8(&VAR_8->lock);
 VAR_8->iobase = VAR_9->start;
 VAR_8->chip = VAR_6;
 VAR_8->chip.label = FUNC_0(&VAR_7->dev);
 VAR_8->chip.parent = &VAR_7->dev;

 switch (VAR_7->id) {
 case 128:
  VAR_8->resume_base = 10;
  VAR_8->chip.ngpio = 14;






  FUNC_7(VAR_8, 8, VAR_3, 1);
  FUNC_7(VAR_8, 9, VAR_3, 1);




  FUNC_7(VAR_8, 13, VAR_3, 1);
  break;

 case 130:
  VAR_8->resume_base = 5;
  VAR_8->chip.ngpio = 14;
  break;

 case 131:
  VAR_8->resume_base = 21;
  VAR_8->chip.ngpio = 30;
  break;

 case 129:
  VAR_8->resume_base = 2;
  VAR_8->chip.ngpio = 8;
  break;

 default:
  return -VAR_1;
 }

 FUNC_5(VAR_7, VAR_8);

 return FUNC_1(&VAR_7->dev, &VAR_8->chip, VAR_8);
}

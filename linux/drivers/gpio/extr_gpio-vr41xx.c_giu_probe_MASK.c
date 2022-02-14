
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int id; int dev; } ;
struct irq_chip {int dummy; } ;
struct TYPE_3__ {int ngpio; int * parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct irq_chip VAR_14 ;
 struct irq_chip VAR_15 ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (unsigned int,struct irq_chip*,int ) ;
 int VAR_18 ;
 int FUNC_10 (struct platform_device*,int ) ;
 TYPE_1__ VAR_19 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_20)
{
 unsigned int VAR_21, VAR_22, VAR_23;
 struct irq_chip *VAR_24;
 int VAR_25;

 switch (VAR_20->id) {
 case 128:
  VAR_12 = VAR_10;
  VAR_19.ngpio = 50;
  break;
 case 130:
  VAR_19.ngpio = 36;
  break;
 case 129:
  VAR_12 = VAR_9;
  VAR_19.ngpio = 48;
  break;
 default:
  FUNC_4(&VAR_20->dev, "GIU: unknown ID %d\n", VAR_20->id);
  return -VAR_1;
 }

 VAR_11 = FUNC_5(VAR_20, 0);
 if (FUNC_1(VAR_11))
  return FUNC_2(VAR_11);

 VAR_19.parent = &VAR_20->dev;

 if (FUNC_8(&VAR_19, ((void*)0)))
  return -VAR_1;

 FUNC_7(VAR_3, 0);
 FUNC_7(VAR_2, 0);

 VAR_21 = FUNC_6(VAR_4) << 16;
 VAR_21 |= FUNC_6(VAR_5);
 for (VAR_22 = VAR_7; VAR_22 <= VAR_8; VAR_22++) {
  VAR_23 = FUNC_0(VAR_22);
  if (VAR_23 < VAR_6)
   VAR_24 = &VAR_15;
  else
   VAR_24 = &VAR_14;

  if (VAR_21 & (1 << VAR_23))
   FUNC_9(VAR_22, VAR_24, VAR_16);
  else
   FUNC_9(VAR_22, VAR_24, VAR_17);

 }

 VAR_25 = FUNC_10(VAR_20, 0);
 if (VAR_25 < 0 || VAR_25 >= VAR_18)
  return -VAR_0;

 return FUNC_3(VAR_25, VAR_13);
}

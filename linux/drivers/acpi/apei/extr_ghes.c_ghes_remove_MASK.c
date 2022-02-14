
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct ghes {int list; int irq; int timer; int flags; struct acpi_hest_generic* generic; } ;
struct TYPE_2__ {int type; } ;
struct acpi_hest_generic {TYPE_1__ notify; } ;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ghes*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct ghes*) ;
 int FUNC_4 (struct ghes*) ;
 int FUNC_5 (struct ghes*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct ghes*) ;
 int VAR_3 ;
 int FUNC_7 (struct ghes*) ;
 int FUNC_8 (struct ghes*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct ghes* FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct platform_device*,int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_4)
{
 int VAR_5;
 struct ghes *VAR_6;
 struct acpi_hest_generic *VAR_7;

 VAR_6 = FUNC_13(VAR_4);
 VAR_7 = VAR_6->generic;

 VAR_6->flags |= VAR_0;
 switch (VAR_7->notify.type) {
 case 131:
  FUNC_2(&VAR_6->timer);
  break;
 case 135:
  FUNC_3(VAR_6->irq, VAR_6);
  break;

 case 130:
 case 133:
 case 134:
  FUNC_11(&VAR_2);
  FUNC_9(&VAR_6->list);
  if (FUNC_10(&VAR_1))
   FUNC_16(&VAR_3);
  FUNC_12(&VAR_2);
  FUNC_15();
  break;

 case 129:
  FUNC_7(VAR_6);
  break;
 case 132:
  FUNC_6(VAR_6);
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_6);
  if (VAR_5)
   return VAR_5;
  break;
 default:
  FUNC_0();
  break;
 }

 FUNC_5(VAR_6);

 FUNC_4(VAR_6);

 FUNC_8(VAR_6);

 FUNC_14(VAR_4, ((void*)0));

 return 0;
}

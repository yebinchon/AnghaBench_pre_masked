
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct TYPE_6__ {int default_trigger; int brightness_get; int brightness_set; int name; } ;
struct dbg_led {TYPE_1__ cdev; int mask; } ;
struct TYPE_8__ {int trigger; int name; } ;
struct TYPE_7__ {int leds; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_2__* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct dbg_led*) ;
 struct dbg_led* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct resource*) ;
 int FUNC_8 (int,int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct resource *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(VAR_7, VAR_2, 0);
 if (!VAR_8)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_8->start, FUNC_7(VAR_8));
 FUNC_8(0xff, &VAR_6->leds);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
  struct dbg_led *VAR_10;

  VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
  if (!VAR_10)
   break;

  VAR_10->cdev.name = VAR_5[VAR_9].name;
  VAR_10->cdev.brightness_set = VAR_4;
  VAR_10->cdev.brightness_get = VAR_3;
  VAR_10->cdev.default_trigger = VAR_5[VAR_9].trigger;
  VAR_10->mask = FUNC_1(VAR_9);

  if (FUNC_5(((void*)0), &VAR_10->cdev) < 0) {
   FUNC_3(VAR_10);
   break;
  }
 }

 return 0;
}

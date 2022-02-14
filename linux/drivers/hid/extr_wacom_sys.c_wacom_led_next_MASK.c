
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * trigger; } ;
struct wacom_led {int group; int id; int trigger; TYPE_1__ cdev; } ;
struct wacom {int dummy; } ;


 struct wacom_led* FUNC_0 (struct wacom*,int,int) ;

struct wacom_led *FUNC_1(struct wacom *VAR_0, struct wacom_led *VAR_1)
{
 struct wacom_led *VAR_2;
 int VAR_3, VAR_4;

 if (!VAR_0 || !VAR_1)
  return ((void*)0);

 VAR_3 = VAR_1->group;
 VAR_4 = VAR_1->id;

 do {
  VAR_2 = FUNC_0(VAR_0, VAR_3, ++VAR_4);
  if (!VAR_2 || VAR_2 == VAR_1)
   return VAR_2;
 } while (VAR_2->cdev.trigger != &VAR_2->trigger);

 return VAR_2;
}

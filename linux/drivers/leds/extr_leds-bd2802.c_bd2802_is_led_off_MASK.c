
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bd2802_led {TYPE_1__* led; } ;
typedef enum led_ids { ____Placeholder_led_ids } led_ids ;
struct TYPE_2__ {scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;



__attribute__((used)) static inline int FUNC_0(struct bd2802_led *VAR_0, enum led_ids VAR_1)
{
 if (VAR_0->led[VAR_1].r || VAR_0->led[VAR_1].g || VAR_0->led[VAR_1].b)
  return 0;

 return 1;
}

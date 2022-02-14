
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hidled_led {TYPE_1__* rgb; } ;
struct TYPE_2__ {struct hidled_led const green; struct hidled_led const red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_0(const struct hidled_led *VAR_3)
{
 if (VAR_3 == &VAR_3->rgb->red)
  return VAR_2;
 else if (VAR_3 == &VAR_3->rgb->green)
  return VAR_1;
 else
  return VAR_0;
}

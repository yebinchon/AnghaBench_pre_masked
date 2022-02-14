
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ar8327_led {scalar_t__ pattern; int led_work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct ar8327_led *VAR_0, u8 VAR_1)
{
 if (VAR_0->pattern == VAR_1)
  return;

 VAR_0->pattern = VAR_1;
 FUNC_0(&VAR_0->led_work);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cy8ctmg110 {scalar_t__ reset_pin; } ;


 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct cy8ctmg110 *VAR_0, bool VAR_1)
{
 if (VAR_0->reset_pin)
  FUNC_0(VAR_0->reset_pin, 1 - VAR_1);
}

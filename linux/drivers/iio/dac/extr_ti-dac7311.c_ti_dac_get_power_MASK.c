
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ti_dac_chip {scalar_t__ powerdown_mode; } ;



__attribute__((used)) static u8 FUNC_0(struct ti_dac_chip *VAR_0, bool VAR_1)
{
 if (VAR_1)
  return VAR_0->powerdown_mode + 1;

 return 0;
}

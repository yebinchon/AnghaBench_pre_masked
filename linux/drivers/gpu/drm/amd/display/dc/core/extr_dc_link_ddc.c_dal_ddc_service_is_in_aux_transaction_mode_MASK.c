
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddc_service {int transaction_type; } ;






bool FUNC_0(struct ddc_service *VAR_0)
{
 switch (VAR_0->transaction_type) {
 case 130:
 case 128:
 case 129:
  return 1;
 default:
  break;
 }
 return 0;
}

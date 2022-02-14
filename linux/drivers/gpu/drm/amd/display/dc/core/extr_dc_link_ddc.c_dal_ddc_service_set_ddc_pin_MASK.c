
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ddc_service {struct ddc* ddc_pin; } ;
struct ddc {int dummy; } ;



void FUNC_0(
 struct ddc_service *VAR_0,
 struct ddc *VAR_1)
{
 VAR_0->ddc_pin = VAR_1;
}

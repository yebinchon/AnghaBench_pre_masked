
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cdmm_device_id {scalar_t__ type; } ;
struct mips_cdmm_device {scalar_t__ type; } ;



__attribute__((used)) static const struct mips_cdmm_device_id *
FUNC_0(const struct mips_cdmm_device_id *VAR_0,
   struct mips_cdmm_device *VAR_1)
{
 int VAR_2 = 0;

 for (; VAR_0->type; ++VAR_0) {
  VAR_2 = (VAR_1->type == VAR_0->type);
  if (VAR_2)
   break;
 }

 return VAR_2 ? VAR_0 : ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int addr; int val; } ;
struct intel_pmic_opregion {TYPE_1__ ctx; int regmap; } ;
typedef int acpi_status ;
typedef int acpi_physical_address ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static acpi_status FUNC_3(u32 VAR_4,
  acpi_physical_address VAR_5, u32 VAR_6, u64 *VAR_7,
  void *VAR_8, void *VAR_9)
{
 struct intel_pmic_opregion *VAR_10 = VAR_9;
 int VAR_11 = 0;

 switch (VAR_5) {
 case 0:
  return VAR_2;
 case 1:
  VAR_10->ctx.addr |= (*VAR_7 & 0xff) << 8;
  return VAR_2;
 case 2:
  VAR_10->ctx.addr |= *VAR_7 & 0xff;
  return VAR_2;
 case 3:
  VAR_10->ctx.val = *VAR_7 & 0xff;
  return VAR_2;
 case 4:
  if (*VAR_7) {
   VAR_11 = FUNC_2(VAR_10->regmap, VAR_10->ctx.addr,
           VAR_10->ctx.val);
  } else {
   VAR_11 = FUNC_1(VAR_10->regmap, VAR_10->ctx.addr,
          &VAR_10->ctx.val);
   if (VAR_11 == 0)
    *VAR_7 = VAR_10->ctx.val;
  }
  FUNC_0(&VAR_10->ctx, 0x00, sizeof(VAR_10->ctx));
 }

 if (VAR_11 < 0) {
  if (VAR_11 == -VAR_3)
   return VAR_0;
  else
   return VAR_1;
 }

 return VAR_2;
}

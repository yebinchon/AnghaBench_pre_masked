
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int uclk; int gfxclk; int socclk; } ;
struct TYPE_4__ {TYPE_1__ boot_values; } ;
struct smu_context {TYPE_2__ smu_table; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;


 int VAR_0 ;





 int FUNC_0 (struct smu_context*,int) ;
 int FUNC_1 (struct smu_context*,int,int*,int*) ;

int FUNC_2(struct smu_context *VAR_1, enum smu_clk_type VAR_2,
      uint32_t *VAR_3, uint32_t *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6 = 0;

 if (!VAR_3 && !VAR_4)
  return -VAR_0;

 if (!FUNC_0(VAR_1, VAR_2)) {
  switch (VAR_2) {
  case 131:
  case 128:
   VAR_5 = VAR_1->smu_table.boot_values.uclk;
   break;
  case 132:
  case 130:
   VAR_5 = VAR_1->smu_table.boot_values.gfxclk;
   break;
  case 129:
   VAR_5 = VAR_1->smu_table.boot_values.socclk;
   break;
  default:
   VAR_5 = 0;
   break;
  }


  if (VAR_3)
   *VAR_3 = VAR_5 / 100;
  if (VAR_4)
   *VAR_4 = VAR_5 / 100;

  return 0;
 }




 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_6;
}

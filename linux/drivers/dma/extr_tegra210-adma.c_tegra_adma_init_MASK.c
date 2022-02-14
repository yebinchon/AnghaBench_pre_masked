
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tegra_adma {TYPE_1__* cdata; scalar_t__ base_addr; } ;
struct TYPE_2__ {scalar_t__ global_reg_offset; scalar_t__ global_int_clear; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int,int,int) ;
 int FUNC_1 (struct tegra_adma*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct tegra_adma *VAR_3)
{
 u32 VAR_4;
 int VAR_5;


 FUNC_1(VAR_3, VAR_3->cdata->global_int_clear, 0x1);


 FUNC_1(VAR_3, VAR_1, 0x1);


 VAR_5 = FUNC_0(VAR_2,
     VAR_3->base_addr +
     VAR_3->cdata->global_reg_offset +
     VAR_1,
     VAR_4, VAR_4 == 0, 20, 10000);
 if (VAR_5)
  return VAR_5;


 FUNC_1(VAR_3, VAR_0, 1);

 return 0;
}

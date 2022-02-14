
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv7xx_power_info {int ref_div; int mem_gddr5; } ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 struct rv7xx_power_info* FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_4)
{
 struct rv7xx_power_info *VAR_5 = FUNC_3(VAR_4);

 if ((VAR_4->family == VAR_0) && !VAR_5->mem_gddr5) {
  FUNC_2(VAR_1,
         (FUNC_0(VAR_2 * VAR_5->ref_div) |
   FUNC_1(VAR_3)));
 }
}

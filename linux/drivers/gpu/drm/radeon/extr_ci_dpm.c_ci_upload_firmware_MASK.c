
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int usec_timeout; } ;
struct ci_power_info {int sram_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 struct ci_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int ) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_3)
{
 struct ci_power_info *VAR_4 = FUNC_2(VAR_3);
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->usec_timeout; VAR_5++) {
  if (FUNC_0(VAR_1) & VAR_0)
   break;
 }
 FUNC_1(VAR_2, 1);

 FUNC_5(VAR_3);
 FUNC_4(VAR_3);

 VAR_6 = FUNC_3(VAR_3, VAR_4->sram_end);

 return VAR_6;

}

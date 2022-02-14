
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv6xx_sclk_stepping {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,int ,struct rv6xx_sclk_stepping*) ;
 int FUNC_1 (struct radeon_device*,int ,struct rv6xx_sclk_stepping*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
           u32 VAR_1, u32 VAR_2)
{
 struct rv6xx_sclk_stepping VAR_3;

 FUNC_0(VAR_0, VAR_1, &VAR_3);
 FUNC_1(VAR_0, VAR_2, &VAR_3);
}

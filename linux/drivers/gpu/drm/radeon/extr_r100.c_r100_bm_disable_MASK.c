
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct radeon_device *VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, (VAR_3 & 0xFFFFFFFF) | 0x00000044);
 FUNC_2(1);
 FUNC_1(VAR_1, (VAR_3 & 0xFFFFFFFF) | 0x00000042);
 FUNC_2(1);
 FUNC_1(VAR_1, (VAR_3 & 0xFFFFFFFF) | 0x00000040);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(1);
 FUNC_3(VAR_2->pdev);
 FUNC_2(1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_1,
       u32 VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6 = (FUNC_1(VAR_3 & 0x3) |
        FUNC_0(VAR_2 & 0x3) |
        FUNC_3(VAR_5 & 0xf) |
        FUNC_2(VAR_4 & 0x7));
 FUNC_4(VAR_0, VAR_6);
}

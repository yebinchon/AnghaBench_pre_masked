
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_6);

 VAR_9 &= ~(VAR_5 | VAR_4 | VAR_7);
 VAR_9 |= FUNC_2(1) | FUNC_1(0) | FUNC_3(1);
 FUNC_5(VAR_6, VAR_9);

 FUNC_4(VAR_2, VAR_3, ~VAR_3);
 FUNC_4(VAR_0, 0, ~VAR_1);

 FUNC_6(VAR_8, 1);
}

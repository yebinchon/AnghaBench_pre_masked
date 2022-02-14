
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_1) & ~VAR_0;
 VAR_8 |= FUNC_0(8);
 FUNC_4(VAR_1, VAR_8);


 VAR_8 = FUNC_1(VAR_2);
 VAR_8 |= VAR_6;
 VAR_8 &= ~VAR_4;
 VAR_8 &= ~VAR_5;
 VAR_8 |= VAR_3;
 FUNC_3(VAR_2, VAR_8);
}

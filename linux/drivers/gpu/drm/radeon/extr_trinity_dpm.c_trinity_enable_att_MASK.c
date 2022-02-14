
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1);

 VAR_3 &= ~VAR_0;
 VAR_3 |= FUNC_1(1);
 FUNC_2(VAR_1, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct radeon_device *VAR_1, bool VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_0);

 VAR_3 &= 0xFFFFFFFE;
 VAR_3 |= (VAR_2 ? 0 : 1);
 FUNC_1(VAR_0, VAR_3);
}

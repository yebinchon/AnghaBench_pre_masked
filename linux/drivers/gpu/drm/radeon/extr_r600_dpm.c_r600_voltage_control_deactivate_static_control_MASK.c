
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct radeon_device *VAR_3,
          u64 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 VAR_5 &= ~VAR_4;
 FUNC_1(VAR_2, VAR_5);

 VAR_5 = FUNC_0(VAR_1);
 VAR_5 &= ~VAR_4;
 FUNC_1(VAR_1, VAR_5);

 VAR_5 = FUNC_0(VAR_0);
 VAR_5 &= ~VAR_4;
 FUNC_1(VAR_0, VAR_5);
}

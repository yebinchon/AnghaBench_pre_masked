
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 VAR_6 |= VAR_4;
 FUNC_1(VAR_1, VAR_6);

 VAR_6 = FUNC_0(VAR_0);
 VAR_6 |= VAR_2;
 FUNC_1(VAR_0, VAR_6);

 VAR_6 = FUNC_0(VAR_0);
 VAR_6 |= VAR_3;
 FUNC_1(VAR_0, VAR_6);

 VAR_6 = FUNC_0(VAR_1);
 VAR_6 &= ~VAR_4;
 FUNC_1(VAR_1, VAR_6);
}

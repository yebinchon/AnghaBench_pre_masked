
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int,int,int*,int*) ;
 int FUNC_4 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_5(struct radeon_device *VAR_3)
{
 u32 VAR_4, VAR_5;
 u32 VAR_6 = FUNC_0(VAR_1);
 u32 VAR_7;
 u32 VAR_8 = FUNC_4(VAR_3);
 u32 VAR_9;

 FUNC_3(400, VAR_8, 16, &VAR_4, &VAR_5);

 VAR_7 = (VAR_4 + VAR_6 - 1) / VAR_6;

 VAR_9 = FUNC_0(VAR_0);
 VAR_9 &= ~VAR_2;
 VAR_9 |= FUNC_1(VAR_7);
 FUNC_2(VAR_0, VAR_9);
}

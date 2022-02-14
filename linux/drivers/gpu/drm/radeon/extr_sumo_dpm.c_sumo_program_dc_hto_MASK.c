
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int,int,int*,int*) ;
 int FUNC_5 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_6(struct radeon_device *VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_0);
 u32 VAR_5, VAR_6;
 u32 VAR_7 = FUNC_5(VAR_3);

 FUNC_4(100000,
          VAR_7, 14, &VAR_5, &VAR_6);

 VAR_4 &= ~(VAR_1 | VAR_2);
 VAR_4 |= FUNC_0(VAR_5) | FUNC_1(VAR_6);

 FUNC_3(VAR_0, VAR_4);
}

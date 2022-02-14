
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3,
            u32 VAR_4, bool VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = VAR_4 * VAR_2;

 VAR_6 = FUNC_0(VAR_0 + VAR_7);
 VAR_6 &= ~VAR_1;
 if (VAR_5)
  VAR_6 |= FUNC_1(1);
 FUNC_2(VAR_0 + VAR_7, VAR_6);
}

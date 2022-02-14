
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
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_4, bool VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = FUNC_0(VAR_3);

 if (VAR_5) {
  FUNC_1(VAR_2, (0 & VAR_0) | (VAR_6 & ~VAR_0) );
  FUNC_1(VAR_3, (0 & VAR_1) | (VAR_7 & ~VAR_1) );
 } else {
  FUNC_1(VAR_2, (0xFFFFFFFF & VAR_0) | (VAR_6 & ~VAR_0) );
  FUNC_1(VAR_3, (0xFFFFCFFF & VAR_1) | (VAR_7 & ~VAR_1) );
 }
}

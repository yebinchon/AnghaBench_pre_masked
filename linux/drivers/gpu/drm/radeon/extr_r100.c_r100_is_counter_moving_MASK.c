
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct radeon_device *VAR_3, int VAR_4)
{
 u32 VAR_5, VAR_6;

 if (VAR_4 == 0) {
  VAR_5 = (FUNC_0(VAR_1) >> 16) & VAR_2;
  VAR_6 = (FUNC_0(VAR_1) >> 16) & VAR_2;
 } else {
  VAR_5 = (FUNC_0(VAR_0) >> 16) & VAR_2;
  VAR_6 = (FUNC_0(VAR_0) >> 16) & VAR_2;
 }
 if (VAR_5 != VAR_6)
  return 1;
 else
  return 0;
}

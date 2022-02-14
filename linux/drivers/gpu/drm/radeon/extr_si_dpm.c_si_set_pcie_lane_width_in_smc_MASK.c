
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_ps {int caps; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,scalar_t__) ;
 int FUNC_2 (struct radeon_device*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_3,
       struct radeon_ps *VAR_4,
       struct radeon_ps *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 =
  ((VAR_4->caps & VAR_0) >> VAR_1) + 1;
 u32 VAR_8 =
  ((VAR_5->caps & VAR_0) >> VAR_1) + 1;

 if (VAR_7 != VAR_8) {
  FUNC_1(VAR_3, VAR_7);
  VAR_6 = FUNC_0(VAR_3);
  FUNC_2(VAR_3, VAR_2, VAR_6);
 }
}

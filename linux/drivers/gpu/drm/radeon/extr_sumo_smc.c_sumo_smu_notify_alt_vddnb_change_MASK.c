
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int ) ;

void FUNC_3(struct radeon_device *VAR_2,
          bool VAR_3, bool VAR_4)
{
 u32 VAR_5 = 0;

 if (!FUNC_1(VAR_2))
  return;

 if (VAR_3)
  VAR_5 |= 1;

 if (VAR_4)
  VAR_5 |= 2;

 FUNC_0(VAR_0, VAR_5);

 FUNC_2(VAR_2, VAR_1);
}

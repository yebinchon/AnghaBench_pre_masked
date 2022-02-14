
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct radeon_device*,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int ,scalar_t__*) ;

int FUNC_3(struct radeon_device *VAR_1,
          u8 VAR_2,
          u16 VAR_3,
          u16 *VAR_4)
{
 u16 VAR_5, VAR_6, VAR_7;

 if (FUNC_0(VAR_1, VAR_2, &VAR_6))
  return -VAR_0;
 if (FUNC_1(VAR_1, VAR_2, &VAR_5))
  return -VAR_0;
 if (FUNC_2(VAR_1, VAR_2, &VAR_7))
  return -VAR_0;

 if (VAR_3 <= VAR_5)
  *VAR_4 = VAR_5;
 else if (VAR_3 >= VAR_6)
  *VAR_4 = VAR_6;
 else
  *VAR_4 = VAR_5 +
   ((VAR_3 - VAR_5) / VAR_7) *
   VAR_7;

 return 0;
}

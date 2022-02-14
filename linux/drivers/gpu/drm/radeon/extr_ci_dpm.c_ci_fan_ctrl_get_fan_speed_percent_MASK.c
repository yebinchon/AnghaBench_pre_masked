
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ no_fan; } ;
struct radeon_device {TYPE_1__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;

int FUNC_2(struct radeon_device *VAR_8,
          u32 *VAR_9)
{
 u32 VAR_10, VAR_11;
 u64 VAR_12;

 if (VAR_8->pm.no_fan)
  return -VAR_3;

 VAR_11 = (FUNC_0(VAR_0) & VAR_6) >> VAR_7;
 VAR_10 = (FUNC_0(VAR_1) & VAR_4) >> VAR_5;

 if (VAR_11 == 0)
  return -VAR_2;

 VAR_12 = (u64)VAR_10 * 100;
 FUNC_1(VAR_12, VAR_11);
 *VAR_9 = (u32)VAR_12;

 if (*VAR_9 > 100)
  *VAR_9 = 100;

 return 0;
}

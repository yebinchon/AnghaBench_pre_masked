
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int min_temp; int max_temp; } ;
struct TYPE_5__ {TYPE_1__ thermal; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_4,
         int VAR_5, int VAR_6)
{
 int VAR_7 = 0 * 1000;
 int VAR_8 = 255 * 1000;
 u32 VAR_9;

 if (VAR_7 < VAR_5)
  VAR_7 = VAR_5;
 if (VAR_8 > VAR_6)
  VAR_8 = VAR_6;
 if (VAR_8 < VAR_7) {
  FUNC_2("invalid thermal range: %d - %d\n", VAR_7, VAR_8);
  return -VAR_3;
 }

 VAR_9 = FUNC_3(VAR_0);
 VAR_9 &= ~(VAR_1 | VAR_2);
 VAR_9 |= (FUNC_0(49 + (VAR_8 / 1000)) |
  FUNC_1(49 + (VAR_7 / 1000)));
 FUNC_4(VAR_0, VAR_9);

 VAR_4->pm.dpm.thermal.min_temp = VAR_7;
 VAR_4->pm.dpm.thermal.max_temp = VAR_8;

 return 0;
}

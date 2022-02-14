
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int min_temp; int max_temp; } ;
struct TYPE_5__ {TYPE_1__ thermal; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (char*,int,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_6,
           int VAR_7, int VAR_8)
{
 int VAR_9 = 0 * 1000;
 int VAR_10 = 255 * 1000;

 if (VAR_9 < VAR_7)
  VAR_9 = VAR_7;
 if (VAR_10 > VAR_8)
  VAR_10 = VAR_8;
 if (VAR_10 < VAR_9) {
  FUNC_3("invalid thermal range: %d - %d\n", VAR_9, VAR_10);
  return -VAR_5;
 }

 FUNC_4(VAR_1, FUNC_1(VAR_10 / 1000), ~VAR_3);
 FUNC_4(VAR_1, FUNC_2(VAR_9 / 1000), ~VAR_4);
 FUNC_4(VAR_0, FUNC_0(VAR_10 / 1000), ~VAR_2);

 VAR_6->pm.dpm.thermal.min_temp = VAR_9;
 VAR_6->pm.dpm.thermal.max_temp = VAR_10;

 return 0;
}

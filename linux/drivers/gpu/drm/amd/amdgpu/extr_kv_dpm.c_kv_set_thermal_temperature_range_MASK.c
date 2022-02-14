
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
struct amdgpu_device {TYPE_3__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_6,
         int VAR_7, int VAR_8)
{
 int VAR_9 = 0 * 1000;
 int VAR_10 = 255 * 1000;
 u32 VAR_11;

 if (VAR_9 < VAR_7)
  VAR_9 = VAR_7;
 if (VAR_10 > VAR_8)
  VAR_10 = VAR_8;
 if (VAR_10 < VAR_9) {
  FUNC_0("invalid thermal range: %d - %d\n", VAR_9, VAR_10);
  return -VAR_4;
 }

 VAR_11 = FUNC_1(VAR_5);
 VAR_11 &= ~(VAR_0 |
  VAR_2);
 VAR_11 |= ((49 + (VAR_10 / 1000)) << VAR_1) |
  ((49 + (VAR_9 / 1000)) << VAR_3);
 FUNC_2(VAR_5, VAR_11);

 VAR_6->pm.dpm.thermal.min_temp = VAR_9;
 VAR_6->pm.dpm.thermal.max_temp = VAR_10;

 return 0;
}

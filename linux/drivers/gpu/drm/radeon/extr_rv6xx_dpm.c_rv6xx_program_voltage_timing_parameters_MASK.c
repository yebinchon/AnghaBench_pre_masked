
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int backbias_response_time; int voltage_response_time; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int) ;
 int FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (struct radeon_device*,int ,int ) ;
 int FUNC_3 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_1)
{
 u32 VAR_2;

 FUNC_1(VAR_1, VAR_0);

 FUNC_0(VAR_1,
       FUNC_2(VAR_1,
         VAR_1->pm.dpm.voltage_response_time,
         VAR_0));

 VAR_2 = FUNC_2(VAR_1,
        VAR_1->pm.dpm.backbias_response_time,
        VAR_0);

 FUNC_3(VAR_1, (VAR_2 + 0x1F) >> 5);
}

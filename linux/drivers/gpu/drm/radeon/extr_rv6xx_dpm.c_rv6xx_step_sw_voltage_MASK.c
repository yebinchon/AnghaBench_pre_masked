
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int voltage_response_time; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int ,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct radeon_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_3,
     u16 VAR_4,
     u16 VAR_5)
{
 u16 VAR_6;
 u16 VAR_7;
 u16 VAR_8;
 int VAR_9;

 if ((FUNC_1(VAR_3, VAR_2,
       &VAR_8)) ||
     (FUNC_2(VAR_3, VAR_2,
            VAR_4, &VAR_6)) ||
     (FUNC_2(VAR_3, VAR_2,
            VAR_5, &VAR_7)))
  return -VAR_0;

 if (VAR_7 < VAR_6)
  VAR_9 = -(int)VAR_8;
 else
  VAR_9 = VAR_8;

 while (VAR_6 != VAR_7) {
  VAR_6 += VAR_9;
  FUNC_3(VAR_3, VAR_1,
           VAR_6);
  FUNC_0((VAR_3->pm.dpm.voltage_response_time + 999) / 1000);
 }

 return 0;
}

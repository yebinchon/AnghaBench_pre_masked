
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ voltage_response_time; } ;
struct TYPE_3__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 u32 VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 FUNC_1(VAR_5, VAR_4, 1);

 VAR_6 = (u32)VAR_5->pm.dpm.voltage_response_time;

 if (VAR_6 == 0)
  VAR_6 = 1000;

 VAR_7 = 15000;
 VAR_8 = 100000;

 VAR_12 = FUNC_0(VAR_5);

 VAR_9 = (VAR_6 * VAR_12) / 100;
 VAR_10 = (VAR_7 * VAR_12) / 100;
 VAR_11 = (VAR_8 * VAR_12) / 100;

 FUNC_1(VAR_5, VAR_1, VAR_9);
 FUNC_1(VAR_5, VAR_0, VAR_10);
 FUNC_1(VAR_5, VAR_3, VAR_11);
 FUNC_1(VAR_5, VAR_2, 0xAA);
}

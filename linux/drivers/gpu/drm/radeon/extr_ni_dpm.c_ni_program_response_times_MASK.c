
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ backbias_response_time; scalar_t__ voltage_response_time; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u32 VAR_17;

 FUNC_1(VAR_7, VAR_6, 1);

 VAR_8 = (u32)VAR_7->pm.dpm.voltage_response_time;
 VAR_9 = (u32)VAR_7->pm.dpm.backbias_response_time;

 if (VAR_8 == 0)
  VAR_8 = 1000;

 if (VAR_9 == 0)
  VAR_9 = 1000;

 VAR_10 = 15000;
 VAR_11 = 100000;

 VAR_17 = FUNC_0(VAR_7);

 VAR_12 = (VAR_8 * VAR_17) / 1600;
 VAR_13 = (VAR_9 * VAR_17) / 1600;
 VAR_14 = (VAR_10 * VAR_17) / 1600;
 VAR_15 = (VAR_11 * VAR_17) / 1600;

 VAR_16 = (460 * VAR_17) / 100;

 FUNC_1(VAR_7, VAR_2, VAR_12);
 FUNC_1(VAR_7, VAR_1, VAR_13);
 FUNC_1(VAR_7, VAR_0, VAR_14);
 FUNC_1(VAR_7, VAR_4, VAR_15);
 FUNC_1(VAR_7, VAR_3, 0xAA);
 FUNC_1(VAR_7, VAR_5, VAR_16);
}

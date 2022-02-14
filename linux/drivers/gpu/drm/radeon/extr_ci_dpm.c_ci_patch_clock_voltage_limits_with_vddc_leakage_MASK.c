
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct radeon_device {int dummy; } ;
struct radeon_clock_and_voltage_limits {int vddci; int vddc; } ;


 int FUNC_0 (struct radeon_device*,int *) ;
 int FUNC_1 (struct radeon_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
           struct radeon_clock_and_voltage_limits *VAR_1)
{
 if (VAR_1) {
  FUNC_0(VAR_0, (u16 *)&VAR_1->vddc);
  FUNC_1(VAR_0, (u16 *)&VAR_1->vddci);
 }
}

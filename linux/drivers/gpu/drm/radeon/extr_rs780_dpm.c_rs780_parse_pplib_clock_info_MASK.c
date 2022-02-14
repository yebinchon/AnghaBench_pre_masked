
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ucLowEngineClockHigh; int ucHighEngineClockHigh; int ulFlags; int usVDDC; int usHighEngineClockLow; int usLowEngineClockLow; } ;
union pplib_clock_info {TYPE_1__ rs780; } ;
typedef int u32 ;
struct radeon_ps {int class; } ;
struct TYPE_4__ {int default_sclk; } ;
struct radeon_device {TYPE_2__ clock; } ;
struct igp_ps {int sclk_low; int sclk_high; void* max_voltage; void* min_voltage; int flags; } ;


 int VAR_0 ;




 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct igp_ps* FUNC_2 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_4,
      struct radeon_ps *VAR_5,
      union pplib_clock_info *VAR_6)
{
 struct igp_ps *VAR_7 = FUNC_2(VAR_5);
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_6->rs780.usLowEngineClockLow);
 VAR_8 |= VAR_6->rs780.ucLowEngineClockHigh << 16;
 VAR_7->sclk_low = VAR_8;
 VAR_8 = FUNC_0(VAR_6->rs780.usHighEngineClockLow);
 VAR_8 |= VAR_6->rs780.ucHighEngineClockHigh << 16;
 VAR_7->sclk_high = VAR_8;
 switch (FUNC_0(VAR_6->rs780.usVDDC)) {
 case 129:
 default:
  VAR_7->min_voltage = VAR_3;
  VAR_7->max_voltage = VAR_3;
  break;
 case 130:
  VAR_7->min_voltage = VAR_2;
  VAR_7->max_voltage = VAR_2;
  break;
 case 131:
  VAR_7->min_voltage = VAR_1;
  VAR_7->max_voltage = VAR_1;
  break;
 case 128:
  VAR_7->min_voltage = VAR_2;
  VAR_7->max_voltage = VAR_1;
  break;
 }
 VAR_7->flags = FUNC_1(VAR_6->rs780.ulFlags);

 if (VAR_5->class & VAR_0) {
  VAR_7->sclk_low = VAR_4->clock.default_sclk;
  VAR_7->sclk_high = VAR_4->clock.default_sclk;
  VAR_7->min_voltage = VAR_1;
  VAR_7->max_voltage = VAR_1;
 }
}

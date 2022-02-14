
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int ucEngineClockHigh; int ucMemoryClockHigh; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
struct TYPE_12__ {int ucEngineClockHigh; int ucMemoryClockHigh; int usVDDCI; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
struct TYPE_18__ {int ucEngineClockHigh; int ucMemoryClockHigh; int usVDDCI; int usVDDC; int usMemoryClockLow; int usEngineClockLow; } ;
struct TYPE_16__ {int ucEngineClockHigh; int ucMemoryClockHigh; int usMemoryClockLow; int usEngineClockLow; } ;
struct TYPE_15__ {int ucLowEngineClockHigh; int usLowEngineClockLow; } ;
struct TYPE_14__ {int ucEngineClockHigh; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_2__ r600; TYPE_1__ evergreen; TYPE_7__ si; TYPE_5__ ci; TYPE_4__ rs780; TYPE_3__ sumo; } ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_20__ {TYPE_8__* power_state; } ;
struct radeon_device {int flags; scalar_t__ family; TYPE_9__ pm; } ;
struct TYPE_19__ {TYPE_10__* clock_info; } ;
struct TYPE_17__ {int voltage; void* type; void* vddci; } ;
struct TYPE_11__ {int sclk; int mclk; TYPE_6__ voltage; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct radeon_device*,int ,int,int*) ;

__attribute__((used)) static bool FUNC_2(struct radeon_device *VAR_8,
         int VAR_9, int VAR_10,
         union pplib_clock_info *VAR_11)
{
 u32 VAR_12, VAR_13;
 u16 VAR_14;

 if (VAR_8->flags & VAR_4) {
  if (VAR_8->family >= VAR_2) {
   VAR_12 = FUNC_0(VAR_11->sumo.usEngineClockLow);
   VAR_12 |= VAR_11->sumo.ucEngineClockHigh << 16;
   VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].sclk = VAR_12;
  } else {
   VAR_12 = FUNC_0(VAR_11->rs780.usLowEngineClockLow);
   VAR_12 |= VAR_11->rs780.ucLowEngineClockHigh << 16;
   VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].sclk = VAR_12;
  }
 } else if (VAR_8->family >= VAR_0) {
  VAR_12 = FUNC_0(VAR_11->ci.usEngineClockLow);
  VAR_12 |= VAR_11->ci.ucEngineClockHigh << 16;
  VAR_13 = FUNC_0(VAR_11->ci.usMemoryClockLow);
  VAR_13 |= VAR_11->ci.ucMemoryClockHigh << 16;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].mclk = VAR_13;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].sclk = VAR_12;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.type =
   VAR_5;
 } else if (VAR_8->family >= VAR_3) {
  VAR_12 = FUNC_0(VAR_11->si.usEngineClockLow);
  VAR_12 |= VAR_11->si.ucEngineClockHigh << 16;
  VAR_13 = FUNC_0(VAR_11->si.usMemoryClockLow);
  VAR_13 |= VAR_11->si.ucMemoryClockHigh << 16;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].mclk = VAR_13;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].sclk = VAR_12;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.type =
   VAR_6;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.voltage =
   FUNC_0(VAR_11->si.usVDDC);
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.vddci =
   FUNC_0(VAR_11->si.usVDDCI);
 } else if (VAR_8->family >= VAR_1) {
  VAR_12 = FUNC_0(VAR_11->evergreen.usEngineClockLow);
  VAR_12 |= VAR_11->evergreen.ucEngineClockHigh << 16;
  VAR_13 = FUNC_0(VAR_11->evergreen.usMemoryClockLow);
  VAR_13 |= VAR_11->evergreen.ucMemoryClockHigh << 16;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].mclk = VAR_13;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].sclk = VAR_12;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.type =
   VAR_6;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.voltage =
   FUNC_0(VAR_11->evergreen.usVDDC);
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.vddci =
   FUNC_0(VAR_11->evergreen.usVDDCI);
 } else {
  VAR_12 = FUNC_0(VAR_11->r600.usEngineClockLow);
  VAR_12 |= VAR_11->r600.ucEngineClockHigh << 16;
  VAR_13 = FUNC_0(VAR_11->r600.usMemoryClockLow);
  VAR_13 |= VAR_11->r600.ucMemoryClockHigh << 16;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].mclk = VAR_13;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].sclk = VAR_12;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.type =
   VAR_6;
  VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.voltage =
   FUNC_0(VAR_11->r600.usVDDC);
 }


 switch (VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.voltage) {
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  if (FUNC_1(VAR_8, VAR_7,
          VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.voltage,
          &VAR_14) == 0)
   VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].voltage.voltage = VAR_14;
  break;
 default:
  break;
 }

 if (VAR_8->flags & VAR_4) {

  if (VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].sclk == 0)
   return 0;
 } else {

  if ((VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].mclk == 0) ||
      (VAR_8->pm.power_state[VAR_9].clock_info[VAR_10].sclk == 0))
   return 0;
 }
 return 1;
}

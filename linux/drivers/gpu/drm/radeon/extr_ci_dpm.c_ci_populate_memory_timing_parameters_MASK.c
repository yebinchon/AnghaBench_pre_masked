
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ McArbBurstTime; void* McArbDramTiming2; void* McArbDramTiming; } ;
typedef TYPE_1__ SMU7_Discrete_MCArbDramTimingTableEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct radeon_device*,int,int,int*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct radeon_device*,int,int) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_4,
      u32 VAR_5,
      u32 VAR_6,
      SMU7_Discrete_MCArbDramTimingTableEntry *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 FUNC_3(VAR_4, VAR_5, VAR_6);

 VAR_8 = FUNC_0(VAR_1);
 VAR_9 = FUNC_0(VAR_2);
 VAR_10 = FUNC_0(VAR_0) & VAR_3;

 FUNC_1(VAR_4, VAR_5, VAR_6, &VAR_9);

 VAR_7->McArbDramTiming = FUNC_2(VAR_8);
 VAR_7->McArbDramTiming2 = FUNC_2(VAR_9);
 VAR_7->McArbBurstTime = (u8)VAR_10;

 return 0;
}

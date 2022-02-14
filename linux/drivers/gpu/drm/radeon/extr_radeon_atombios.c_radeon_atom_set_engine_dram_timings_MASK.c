
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_5__ {int atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
typedef int args ;
struct TYPE_6__ {void* ulClock; } ;
struct TYPE_7__ {TYPE_2__ sReserved; void* ulTargetEngineClock; } ;
typedef TYPE_3__ SET_ENGINE_CLOCK_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

void FUNC_4(struct radeon_device *VAR_4,
      u32 VAR_5, u32 VAR_6)
{
 SET_ENGINE_CLOCK_PS_ALLOCATION VAR_7;
 int VAR_8 = FUNC_0(VAR_0, VAR_2);
 u32 VAR_9;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));

 VAR_9 = VAR_5 & VAR_3;
 VAR_9 |= (VAR_1 << 24);

 VAR_7.ulTargetEngineClock = FUNC_2(VAR_9);
 if (VAR_6)
  VAR_7.sReserved.ulClock = FUNC_2(VAR_6 & VAR_3);

 FUNC_1(VAR_4->mode_info.atom_context, VAR_8, (uint32_t *)&VAR_7);
}

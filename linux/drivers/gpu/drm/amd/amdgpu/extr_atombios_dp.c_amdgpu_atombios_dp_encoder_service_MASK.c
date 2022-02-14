
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* u8 ;
struct TYPE_4__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef int args ;
struct TYPE_5__ {int ucLinkClock; int ucAction; void* ucStatus; void* ucLaneNum; void* ucConfig; } ;
typedef TYPE_2__ DP_ENCODER_SERVICE_PARAMETERS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static u8 FUNC_3(struct amdgpu_device *VAR_2,
          int VAR_3, int VAR_4,
          u8 VAR_5, u8 VAR_6)
{
 DP_ENCODER_SERVICE_PARAMETERS VAR_7;
 int VAR_8 = FUNC_0(VAR_0, VAR_1);

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.ucLinkClock = VAR_4 / 10;
 VAR_7.ucConfig = VAR_5;
 VAR_7.ucAction = VAR_3;
 VAR_7.ucLaneNum = VAR_6;
 VAR_7.ucStatus = 0;

 FUNC_1(VAR_2->mode_info.atom_context, VAR_8, (uint32_t *)&VAR_7);
 return VAR_7.ucStatus;
}

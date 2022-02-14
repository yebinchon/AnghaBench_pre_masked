
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int harvest_config; } ;
struct amdgpu_device {scalar_t__ asic_type; int grbm_idx_mutex; TYPE_1__ vce; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_9)
{
 int VAR_10;

 FUNC_4(&VAR_9->grbm_idx_mutex);
 for (VAR_10 = 0; VAR_10 < 2; ++VAR_10) {
  if (VAR_9->vce.harvest_config & (1 << VAR_10))
   continue;

  FUNC_1(VAR_5, FUNC_0(VAR_10));

  if (VAR_9->asic_type >= VAR_0)
   FUNC_3(VAR_8, 0, ~0x200001);
  else
   FUNC_2(VAR_4, VAR_1, 0);


  FUNC_2(VAR_3, VAR_2, 1);


  FUNC_1(VAR_7, 0);
 }

 FUNC_1(VAR_5, VAR_6);
 FUNC_5(&VAR_9->grbm_idx_mutex);

 return 0;
}

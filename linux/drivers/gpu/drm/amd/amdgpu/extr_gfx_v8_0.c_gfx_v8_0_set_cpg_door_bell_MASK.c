
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ring {int doorbell_index; scalar_t__ use_doorbell; } ;
struct TYPE_2__ {int gfx_ring0; } ;
struct amdgpu_device {scalar_t__ asic_type; int flags; TYPE_1__ doorbell_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_12, struct amdgpu_ring *VAR_13)
{
 u32 VAR_14;

 if (VAR_12->asic_type == VAR_1)
  return;

 VAR_14 = FUNC_1(VAR_9);

 if (VAR_13->use_doorbell) {
  VAR_14 = FUNC_0(VAR_14, VAR_2,
    VAR_7, VAR_13->doorbell_index);
  VAR_14 = FUNC_0(VAR_14, VAR_2,
      VAR_6, 0);
  VAR_14 = FUNC_0(VAR_14, VAR_2,
         VAR_5, 1);
 } else {
  VAR_14 = FUNC_0(VAR_14, VAR_2, VAR_5, 0);
 }

 FUNC_2(VAR_9, VAR_14);

 if (VAR_12->flags & VAR_0)
  return;

 VAR_14 = FUNC_0(0, VAR_3,
     VAR_8,
     VAR_12->doorbell_index.gfx_ring0);
 FUNC_2(VAR_10, VAR_14);

 FUNC_2(VAR_11,
  VAR_4);
}

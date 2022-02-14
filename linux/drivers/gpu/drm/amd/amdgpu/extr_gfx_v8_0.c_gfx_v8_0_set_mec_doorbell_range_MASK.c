
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kiq; int mec_ring7; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ doorbell_index; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_5)
{
 if (VAR_5->asic_type > VAR_0) {
  FUNC_0(VAR_3, VAR_5->doorbell_index.kiq << 2);
  FUNC_0(VAR_4, VAR_5->doorbell_index.mec_ring7 << 2);
 }

 FUNC_1(VAR_1, VAR_2, 1);
}

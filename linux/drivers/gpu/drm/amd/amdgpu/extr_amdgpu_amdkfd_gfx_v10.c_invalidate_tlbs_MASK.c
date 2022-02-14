
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct kgd_dev {int dummy; } ;
struct TYPE_6__ {scalar_t__ ready; } ;
struct amdgpu_ring {TYPE_3__ sched; } ;
struct TYPE_4__ {struct amdgpu_ring ring; } ;
struct TYPE_5__ {TYPE_1__ kiq; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct amdgpu_device*,int,int ,int ) ;
 int FUNC_2 (struct kgd_dev*,int) ;
 scalar_t__ FUNC_3 (struct kgd_dev*,int) ;
 int FUNC_4 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct kgd_dev *VAR_2, uint16_t VAR_3)
{
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *) VAR_2;
 int VAR_5;
 struct amdgpu_ring *VAR_6 = &VAR_4->gfx.kiq.ring;

 if (VAR_1 == 0 && VAR_6->sched.ready)
  return FUNC_4(VAR_4, VAR_3);

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  if (!FUNC_0(VAR_4, VAR_5))
   continue;
  if (FUNC_3(VAR_2, VAR_5)) {
   if (FUNC_2(VAR_2, VAR_5)
    == VAR_3) {
    FUNC_1(VAR_4, VAR_5,
      VAR_0, 0);
    break;
   }
  }
 }

 return 0;
}

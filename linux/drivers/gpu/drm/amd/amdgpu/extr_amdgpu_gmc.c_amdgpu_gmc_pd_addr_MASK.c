
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct amdgpu_device {scalar_t__ asic_type; } ;
struct TYPE_2__ {int bdev; } ;
struct amdgpu_bo {TYPE_1__ tbo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (struct amdgpu_bo*,int,int *,int *) ;
 struct amdgpu_device* FUNC_2 (int ) ;

uint64_t FUNC_3(struct amdgpu_bo *VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_2(VAR_2->tbo.bdev);
 uint64_t VAR_4;


 if (VAR_3->asic_type >= VAR_1) {
  uint64_t VAR_5 = VAR_0;

  FUNC_1(VAR_2, -1, &VAR_4, &VAR_5);
  VAR_4 |= VAR_5;
 } else {
  VAR_4 = FUNC_0(VAR_2);
 }
 return VAR_4;
}

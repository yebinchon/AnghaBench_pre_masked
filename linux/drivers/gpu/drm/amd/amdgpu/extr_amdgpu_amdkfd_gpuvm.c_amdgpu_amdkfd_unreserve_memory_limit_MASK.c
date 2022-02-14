
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int bdev; } ;
struct amdgpu_bo {scalar_t__ preferred_domains; int flags; TYPE_1__ tbo; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct amdgpu_bo*) ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int FUNC_2 (struct amdgpu_device*,int ,scalar_t__,int) ;

void FUNC_3(struct amdgpu_bo *VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_1(VAR_2->tbo.bdev);
 u32 VAR_4 = VAR_2->preferred_domains;
 bool VAR_5 = (VAR_2->preferred_domains == VAR_1);

 if (VAR_2->flags & VAR_0) {
  VAR_4 = VAR_1;
  VAR_5 = 0;
 }

 FUNC_2(VAR_3, FUNC_0(VAR_2), VAR_4, VAR_5);
}

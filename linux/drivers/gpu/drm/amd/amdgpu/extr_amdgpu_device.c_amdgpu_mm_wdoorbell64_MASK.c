
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ num_doorbells; scalar_t__ ptr; } ;
struct amdgpu_device {TYPE_1__ doorbell; } ;
typedef int atomic64_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct amdgpu_device *VAR_0, u32 VAR_1, u64 VAR_2)
{
 if (VAR_1 < VAR_0->doorbell.num_doorbells) {
  FUNC_1((atomic64_t *)(VAR_0->doorbell.ptr + VAR_1), VAR_2);
 } else {
  FUNC_0("writing beyond doorbell aperture: 0x%08x!\n", VAR_1);
 }
}

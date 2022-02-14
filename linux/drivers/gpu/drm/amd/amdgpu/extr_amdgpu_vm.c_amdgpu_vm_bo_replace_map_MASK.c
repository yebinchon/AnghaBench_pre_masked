
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo_va_mapping {scalar_t__ flags; scalar_t__ offset; scalar_t__ last; scalar_t__ start; } ;
struct TYPE_2__ {int vm; struct amdgpu_bo* bo; } ;
struct amdgpu_bo_va {TYPE_1__ base; } ;
struct amdgpu_bo {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (struct amdgpu_device*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_bo_va*,struct amdgpu_bo_va_mapping*) ;
 int FUNC_3 (struct amdgpu_bo_va_mapping*) ;
 struct amdgpu_bo_va_mapping* FUNC_4 (int,int ) ;

int FUNC_5(struct amdgpu_device *VAR_5,
        struct amdgpu_bo_va *VAR_6,
        uint64_t VAR_7, uint64_t VAR_8,
        uint64_t VAR_9, uint64_t VAR_10)
{
 struct amdgpu_bo_va_mapping *VAR_11;
 struct amdgpu_bo *VAR_12 = VAR_6->base.bo;
 uint64_t VAR_13;
 int VAR_14;


 if (VAR_7 & VAR_0 || VAR_8 & VAR_0 ||
     VAR_9 == 0 || VAR_9 & VAR_0)
  return -VAR_2;


 VAR_13 = VAR_7 + VAR_9 - 1;
 if (VAR_7 >= VAR_13 ||
     (VAR_12 && VAR_8 + VAR_9 > FUNC_0(VAR_12)))
  return -VAR_2;


 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 VAR_14 = FUNC_1(VAR_5, VAR_6->base.vm, VAR_7, VAR_9);
 if (VAR_14) {
  FUNC_3(VAR_11);
  return VAR_14;
 }

 VAR_7 /= VAR_1;
 VAR_13 /= VAR_1;

 VAR_11->start = VAR_7;
 VAR_11->last = VAR_13;
 VAR_11->offset = VAR_8;
 VAR_11->flags = VAR_10;

 FUNC_2(VAR_5, VAR_6, VAR_11);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_tt {int * func; } ;
struct ttm_buffer_object {int bdev; } ;
struct TYPE_2__ {struct ttm_tt ttm; } ;
struct amdgpu_ttm_tt {TYPE_1__ ttm; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct amdgpu_device* FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_ttm_tt*) ;
 struct amdgpu_ttm_tt* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct ttm_buffer_object*,int ) ;

__attribute__((used)) static struct ttm_tt *FUNC_4(struct ttm_buffer_object *VAR_2,
        uint32_t VAR_3)
{
 struct amdgpu_device *VAR_4;
 struct amdgpu_ttm_tt *VAR_5;

 VAR_4 = FUNC_0(VAR_2->bdev);

 VAR_5 = FUNC_2(sizeof(struct amdgpu_ttm_tt), VAR_0);
 if (VAR_5 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_5->ttm.ttm.func = &VAR_1;


 if (FUNC_3(&VAR_5->ttm, VAR_2, VAR_3)) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }
 return &VAR_5->ttm.ttm;
}

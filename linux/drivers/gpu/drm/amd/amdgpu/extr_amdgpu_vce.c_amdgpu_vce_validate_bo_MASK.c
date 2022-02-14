
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct amdgpu_cs_parser {int dummy; } ;
struct amdgpu_bo_va_mapping {int dummy; } ;
struct TYPE_4__ {unsigned int num_placement; } ;
struct amdgpu_bo {TYPE_2__ placement; int tbo; TYPE_1__* placements; } ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_3__ {unsigned int lpfn; int fpfn; } ;


 int FUNC_0 (char*,int,int,int,unsigned int,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct amdgpu_cs_parser*,int,struct amdgpu_bo**,struct amdgpu_bo_va_mapping**) ;
 scalar_t__ FUNC_3 (struct amdgpu_cs_parser*,int ,int) ;
 int FUNC_4 (int ,unsigned int) ;
 unsigned int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (int *,TYPE_2__*,struct ttm_operation_ctx*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_cs_parser *VAR_1, uint32_t VAR_2,
      int VAR_3, int VAR_4, unsigned VAR_5, int32_t VAR_6)
{
 int64_t VAR_7 = ((uint64_t)VAR_5) * ((int64_t)VAR_6);
 struct ttm_operation_ctx VAR_8 = { 0, 0 };
 struct amdgpu_bo_va_mapping *VAR_9;
 unsigned VAR_10, VAR_11, VAR_12;
 struct amdgpu_bo *VAR_13;
 uint64_t VAR_14;
 int VAR_15;

 VAR_14 = ((uint64_t)FUNC_3(VAR_1, VAR_2, VAR_3)) |
        ((uint64_t)FUNC_3(VAR_1, VAR_2, VAR_4)) << 32;
 if (VAR_6 >= 0) {
  VAR_14 += VAR_7;
  VAR_11 = FUNC_1(VAR_7) >> VAR_0;
  VAR_12 = 0x100000000ULL >> VAR_0;
 } else {
  VAR_11 = 0;
  VAR_12 = (0x100000000ULL - FUNC_1(VAR_7)) >> VAR_0;
 }

 VAR_15 = FUNC_2(VAR_1, VAR_14, &VAR_13, &VAR_9);
 if (VAR_15) {
  FUNC_0("Can't find BO for addr 0x%010Lx %d %d %d %d\n",
     VAR_14, VAR_3, VAR_4, VAR_5, VAR_6);
  return VAR_15;
 }

 for (VAR_10 = 0; VAR_10 < VAR_13->placement.num_placement; ++VAR_10) {
  VAR_13->placements[VAR_10].fpfn = FUNC_4(VAR_13->placements[VAR_10].fpfn, VAR_11);
  VAR_13->placements[VAR_10].lpfn = VAR_13->placements[VAR_10].lpfn ?
   FUNC_5(VAR_13->placements[VAR_10].lpfn, VAR_12) : VAR_12;
 }
 return FUNC_6(&VAR_13->tbo, &VAR_13->placement, &VAR_8);
}

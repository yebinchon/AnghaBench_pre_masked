
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct radeon_ib {int length_dw; TYPE_1__* fence; } ;
struct radeon_device {int dummy; } ;
struct radeon_bo {int placement; int tbo; } ;
struct TYPE_2__ {int is_vm_update; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_2 (struct radeon_bo*,TYPE_1__*,int) ;
 int FUNC_3 (struct radeon_bo*) ;
 int FUNC_4 (struct radeon_bo*,int) ;
 int FUNC_5 (struct radeon_bo*) ;
 int FUNC_6 (struct radeon_bo*) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_8 (struct radeon_device*,int ,struct radeon_ib*,int *,int) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ib*,int *,int) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ib*,int ,int ,unsigned int,int ,int ) ;
 int FUNC_11 (int *,int *,struct ttm_operation_ctx*) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_1,
         struct radeon_bo *VAR_2)
{
 struct ttm_operation_ctx VAR_3 = { 1, 0 };
 struct radeon_ib VAR_4;
 unsigned VAR_5;
 uint64_t VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2, 0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_11(&VAR_2->tbo, &VAR_2->placement, &VAR_3);
 if (VAR_7)
  goto error_unreserve;

 VAR_6 = FUNC_3(VAR_2);
 VAR_5 = FUNC_5(VAR_2) / 8;

 VAR_7 = FUNC_8(VAR_1, VAR_0, &VAR_4, ((void*)0), 256);
 if (VAR_7)
  goto error_unreserve;

 VAR_4.length_dw = 0;

 FUNC_10(VAR_1, &VAR_4, VAR_6, 0, VAR_5, 0, 0);
 FUNC_1(VAR_1, &VAR_4);
 FUNC_0(VAR_4.length_dw > 64);

 VAR_7 = FUNC_9(VAR_1, &VAR_4, ((void*)0), 0);
 if (VAR_7)
  goto error_free;

 VAR_4.fence->is_vm_update = 1;
 FUNC_2(VAR_2, VAR_4.fence, 0);

error_free:
 FUNC_7(VAR_1, &VAR_4);

error_unreserve:
 FUNC_6(VAR_2);
 return VAR_7;
}

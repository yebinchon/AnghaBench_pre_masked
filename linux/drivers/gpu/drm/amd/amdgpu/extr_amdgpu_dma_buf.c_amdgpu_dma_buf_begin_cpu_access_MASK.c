
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct dma_buf {int priv; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int bdev; } ;
struct amdgpu_bo {int allowed_domains; int placement; TYPE_1__ tbo; int pin_count; int flags; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_bo*,int) ;
 int FUNC_1 (struct amdgpu_bo*,int) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_device*,int ) ;
 struct amdgpu_device* FUNC_4 (int ) ;
 struct amdgpu_bo* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int *,struct ttm_operation_ctx*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dma_buf *VAR_3,
        enum dma_data_direction VAR_4)
{
 struct amdgpu_bo *VAR_5 = FUNC_5(VAR_3->priv);
 struct amdgpu_device *VAR_6 = FUNC_4(VAR_5->tbo.bdev);
 struct ttm_operation_ctx VAR_7 = { 1, 0 };
 u32 VAR_8 = FUNC_3(VAR_6, VAR_5->flags);
 int VAR_9;
 bool VAR_10 = (VAR_4 == VAR_1 ||
        VAR_4 == VAR_2);

 if (!VAR_10 || !(VAR_8 & VAR_0))
  return 0;


 VAR_9 = FUNC_1(VAR_5, 0);
 if (FUNC_7(VAR_9 != 0))
  return VAR_9;

 if (!VAR_5->pin_count && (VAR_5->allowed_domains & VAR_0)) {
  FUNC_0(VAR_5, VAR_0);
  VAR_9 = FUNC_6(&VAR_5->tbo, &VAR_5->placement, &VAR_7);
 }

 FUNC_2(VAR_5);
 return VAR_9;
}

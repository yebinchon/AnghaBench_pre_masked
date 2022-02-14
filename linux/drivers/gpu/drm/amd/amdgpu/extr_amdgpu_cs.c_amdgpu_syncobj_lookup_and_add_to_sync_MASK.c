
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u64 ;
struct dma_fence {int dummy; } ;
struct amdgpu_cs_parser {TYPE_1__* job; int adev; int filp; } ;
struct TYPE_2__ {int sync; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (int ,int *,struct dma_fence*,int) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int ,int ,int ,int ,struct dma_fence**) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_cs_parser *VAR_0,
       uint32_t VAR_1, u64 VAR_2,
       u64 VAR_3)
{
 struct dma_fence *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0->filp, VAR_1, VAR_2, VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_0("syncobj %u failed to find fence @ %llu (%d)!\n",
     VAR_1, VAR_2, VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_0->adev, &VAR_0->job->sync, VAR_4, 1);
 FUNC_2(VAR_4);

 return VAR_5;
}

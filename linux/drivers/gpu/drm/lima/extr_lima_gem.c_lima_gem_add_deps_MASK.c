
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lima_submit {TYPE_1__* task; int * in_sync; } ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {int deps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (int *,struct dma_fence*) ;
 int FUNC_3 (struct drm_file*,int ,int ,int ,struct dma_fence**) ;

__attribute__((used)) static int FUNC_4(struct drm_file *VAR_0, struct lima_submit *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->in_sync); VAR_2++) {
  struct dma_fence *VAR_4 = ((void*)0);

  if (!VAR_1->in_sync[VAR_2])
   continue;

  VAR_3 = FUNC_3(VAR_0, VAR_1->in_sync[VAR_2],
          0, 0, &VAR_4);
  if (VAR_3)
   return VAR_3;

  VAR_3 = FUNC_2(&VAR_1->task->deps, VAR_4);
  if (VAR_3) {
   FUNC_1(VAR_4);
   return VAR_3;
  }
 }

 return 0;
}

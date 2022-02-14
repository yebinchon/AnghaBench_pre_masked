
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_out_fence_state {scalar_t__ fd; int sync_file; int out_fence_ptr; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (struct dma_fence*) ;

__attribute__((used)) static int FUNC_3(struct drm_out_fence_state *VAR_3,
      struct dma_fence *VAR_4)
{
 VAR_3->fd = FUNC_0(VAR_2);
 if (VAR_3->fd < 0)
  return VAR_3->fd;

 if (FUNC_1(VAR_3->fd, VAR_3->out_fence_ptr))
  return -VAR_0;

 VAR_3->sync_file = FUNC_2(VAR_4);
 if (!VAR_3->sync_file)
  return -VAR_1;

 return 0;
}

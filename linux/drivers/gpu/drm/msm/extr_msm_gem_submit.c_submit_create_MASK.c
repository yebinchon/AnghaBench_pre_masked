
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef int u64 ;
struct msm_gpu_submitqueue {size_t prio; } ;
struct msm_gpu {int * rb; } ;
struct msm_gem_submit {int ticket; int bo_list; int node; scalar_t__ nr_cmds; scalar_t__ nr_bos; int ring; struct msm_gpu_submitqueue* queue; int * bos; void* cmd; int * fence; struct msm_gpu* gpu; struct msm_gem_address_space* aspace; struct drm_device* dev; } ;
struct msm_gem_address_space {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct msm_gem_submit* FUNC_1 (scalar_t__,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct msm_gem_submit*,int ,size_t) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static struct msm_gem_submit *FUNC_4(struct drm_device *VAR_6,
  struct msm_gpu *VAR_7, struct msm_gem_address_space *VAR_8,
  struct msm_gpu_submitqueue *VAR_9, uint32_t VAR_10,
  uint32_t VAR_11)
{
 struct msm_gem_submit *VAR_12;
 uint64_t VAR_13 = FUNC_2(VAR_12, VAR_4, VAR_10) +
      ((u64)VAR_11 * sizeof(VAR_12->cmd[0]));

 if (VAR_13 > VAR_1)
  return ((void*)0);

 VAR_12 = FUNC_1(VAR_13, VAR_0 | VAR_3 | VAR_2);
 if (!VAR_12)
  return ((void*)0);

 VAR_12->dev = VAR_6;
 VAR_12->aspace = VAR_8;
 VAR_12->gpu = VAR_7;
 VAR_12->fence = ((void*)0);
 VAR_12->cmd = (void *)&VAR_12->bos[VAR_10];
 VAR_12->queue = VAR_9;
 VAR_12->ring = VAR_7->rb[VAR_9->prio];


 VAR_12->nr_bos = 0;
 VAR_12->nr_cmds = 0;

 FUNC_0(&VAR_12->node);
 FUNC_0(&VAR_12->bo_list);
 FUNC_3(&VAR_12->ticket, &VAR_5);

 return VAR_12;
}

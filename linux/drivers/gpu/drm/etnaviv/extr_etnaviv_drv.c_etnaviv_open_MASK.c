
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct drm_sched_rq* sched_rq; } ;
struct etnaviv_gpu {TYPE_1__ sched; } ;
struct etnaviv_file_private {int * sched_entity; int mmu; } ;
struct etnaviv_drm_private {struct etnaviv_gpu** gpu; int cmdbuf_suballoc; int mmu_global; } ;
struct drm_sched_rq {int dummy; } ;
struct drm_file {struct etnaviv_file_private* driver_priv; } ;
struct drm_device {struct etnaviv_drm_private* dev_private; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct drm_sched_rq**,int,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct etnaviv_file_private*) ;
 struct etnaviv_file_private* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_4, struct drm_file *VAR_5)
{
 struct etnaviv_drm_private *VAR_6 = VAR_4->dev_private;
 struct etnaviv_file_private *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->mmu = FUNC_1(VAR_6->mmu_global,
           VAR_6->cmdbuf_suballoc);
 if (!VAR_7->mmu) {
  VAR_8 = -VAR_1;
  goto out_free;
 }

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  struct etnaviv_gpu *VAR_10 = VAR_6->gpu[VAR_9];
  struct drm_sched_rq *VAR_11;

  if (VAR_10) {
   VAR_11 = &VAR_10->sched.sched_rq[VAR_0];
   FUNC_0(&VAR_7->sched_entity[VAR_9],
           &VAR_11, 1, ((void*)0));
   }
 }

 VAR_5->driver_priv = VAR_7;

 return 0;

out_free:
 FUNC_2(VAR_7);
 return VAR_8;
}

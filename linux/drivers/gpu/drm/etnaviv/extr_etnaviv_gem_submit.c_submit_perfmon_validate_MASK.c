
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct etnaviv_gem_submit_bo {TYPE_2__* obj; } ;
struct etnaviv_gem_submit {scalar_t__ nr_pmrs; TYPE_1__* pmrs; } ;
struct drm_etnaviv_gem_submit_pmr {scalar_t__ read_offset; int flags; int sequence; int signal; int domain; int read_idx; } ;
struct TYPE_6__ {int size; } ;
struct TYPE_5__ {TYPE_3__ base; } ;
struct TYPE_4__ {int flags; int offset; int bo_vma; int sequence; int signal; int domain; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct drm_etnaviv_gem_submit_pmr const*,scalar_t__) ;
 int FUNC_3 (struct etnaviv_gem_submit*,int ,struct etnaviv_gem_submit_bo**) ;

__attribute__((used)) static int FUNC_4(struct etnaviv_gem_submit *VAR_3,
  u32 VAR_4, const struct drm_etnaviv_gem_submit_pmr *VAR_5)
{
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->nr_pmrs; VAR_6++) {
  const struct drm_etnaviv_gem_submit_pmr *VAR_7 = VAR_5 + VAR_6;
  struct etnaviv_gem_submit_bo *VAR_8;
  int VAR_9;

  VAR_9 = FUNC_3(VAR_3, VAR_7->read_idx, &VAR_8);
  if (VAR_9)
   return VAR_9;


  if (VAR_7->read_offset == 0) {
   FUNC_0("perfmon request: offset is 0");
   return -VAR_0;
  }

  if (VAR_7->read_offset >= VAR_8->obj->base.size - sizeof(u32)) {
   FUNC_0("perfmon request: offset %u outside object", VAR_6);
   return -VAR_0;
  }

  if (VAR_7->flags & ~(VAR_2 | VAR_1)) {
   FUNC_0("perfmon request: flags are not valid");
   return -VAR_0;
  }

  if (FUNC_2(VAR_7, VAR_4)) {
   FUNC_0("perfmon request: domain or signal not valid");
   return -VAR_0;
  }

  VAR_3->pmrs[VAR_6].flags = VAR_7->flags;
  VAR_3->pmrs[VAR_6].domain = VAR_7->domain;
  VAR_3->pmrs[VAR_6].signal = VAR_7->signal;
  VAR_3->pmrs[VAR_6].sequence = VAR_7->sequence;
  VAR_3->pmrs[VAR_6].offset = VAR_7->read_offset;
  VAR_3->pmrs[VAR_6].bo_vma = FUNC_1(&VAR_8->obj->base);
 }

 return 0;
}

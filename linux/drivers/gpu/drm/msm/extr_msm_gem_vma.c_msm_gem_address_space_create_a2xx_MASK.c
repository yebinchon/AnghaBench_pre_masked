
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
struct msm_gpu {int dummy; } ;
struct msm_gem_address_space {char const* name; int kref; int mm; int mmu; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct msm_gem_address_space* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 struct msm_gem_address_space* FUNC_3 (int,int ) ;
 int FUNC_4 (struct device*,struct msm_gpu*) ;
 int FUNC_5 (int *) ;

struct msm_gem_address_space *
FUNC_6(struct device *VAR_3, struct msm_gpu *VAR_4,
  const char *VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
 struct msm_gem_address_space *VAR_8;
 u64 VAR_9 = VAR_7 - VAR_6;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_5(&VAR_8->lock);
 VAR_8->name = VAR_5;
 VAR_8->mmu = FUNC_4(VAR_3, VAR_4);

 FUNC_1(&VAR_8->mm, (VAR_6 >> VAR_2),
  VAR_9 >> VAR_2);

 FUNC_2(&VAR_8->kref);

 return VAR_8;
}

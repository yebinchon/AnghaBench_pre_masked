
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct panfrost_gem_object {int node; int is_heap; int * mmu; scalar_t__ noexec; } ;
struct panfrost_file_priv {int mm_lock; int mm; int mmu; } ;
struct drm_gem_object {size_t size; } ;
struct drm_file {struct panfrost_file_priv* driver_priv; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int *,size_t,size_t,unsigned long,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct panfrost_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct panfrost_gem_object* FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_6(struct drm_gem_object *VAR_3, struct drm_file *VAR_4)
{
 int VAR_5;
 size_t VAR_6 = VAR_3->size;
 u64 VAR_7;
 struct panfrost_gem_object *VAR_8 = FUNC_5(VAR_3);
 unsigned long VAR_9 = VAR_8->noexec ? VAR_1 : 0;
 struct panfrost_file_priv *VAR_10 = VAR_4->driver_priv;







 if (!VAR_8->noexec)
  VAR_7 = VAR_6 >> VAR_0;
 else
  VAR_7 = VAR_6 >= VAR_2 ? VAR_2 >> VAR_0 : 0;

 VAR_8->mmu = &VAR_10->mmu;
 FUNC_3(&VAR_10->mm_lock);
 VAR_5 = FUNC_0(&VAR_10->mm, &VAR_8->node,
      VAR_6 >> VAR_0, VAR_7, VAR_9, 0);
 FUNC_4(&VAR_10->mm_lock);
 if (VAR_5)
  return VAR_5;

 if (!VAR_8->is_heap) {
  VAR_5 = FUNC_2(VAR_8);
  if (VAR_5) {
   FUNC_3(&VAR_10->mm_lock);
   FUNC_1(&VAR_8->node);
   FUNC_4(&VAR_10->mm_lock);
  }
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct msm_gem_vma {int dummy; } ;
struct msm_gem_object {int flags; scalar_t__ madv; int sgt; int lock; } ;
struct msm_gem_address_space {int dummy; } ;
struct drm_gem_object {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct page**) ;
 scalar_t__ FUNC_2 (int) ;
 struct page** FUNC_3 (struct drm_gem_object*) ;
 struct msm_gem_vma* FUNC_4 (struct drm_gem_object*,struct msm_gem_address_space*) ;
 int FUNC_5 (struct msm_gem_address_space*,struct msm_gem_vma*,int,int ,int) ;
 int FUNC_6 (int *) ;
 struct msm_gem_object* FUNC_7 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_8(struct drm_gem_object *VAR_7,
  struct msm_gem_address_space *VAR_8)
{
 struct msm_gem_object *VAR_9 = FUNC_7(VAR_7);
 struct msm_gem_vma *VAR_10;
 struct page **VAR_11;
 int VAR_12 = VAR_2;

 if (!(VAR_9->flags & VAR_4))
  VAR_12 |= VAR_3;

 FUNC_2(!FUNC_6(&VAR_9->lock));

 if (FUNC_2(VAR_9->madv != VAR_5))
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_7, VAR_8);
 if (FUNC_2(!VAR_10))
  return -VAR_1;

 VAR_11 = FUNC_3(VAR_7);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 return FUNC_5(VAR_8, VAR_10, VAR_12,
   VAR_9->sgt, VAR_7->size >> VAR_6);
}

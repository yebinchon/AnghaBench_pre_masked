
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_object {int flags; int * pages; scalar_t__ sgt; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_gem_object*,int *,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct msm_gem_object*) ;
 struct msm_gem_object* FUNC_5 (struct drm_gem_object*) ;
 scalar_t__ FUNC_6 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_7(struct drm_gem_object *VAR_2)
{
 struct msm_gem_object *VAR_3 = FUNC_5(VAR_2);

 if (VAR_3->pages) {
  if (VAR_3->sgt) {




   if (VAR_3->flags & (VAR_1|VAR_0))
    FUNC_4(VAR_3);

   FUNC_3(VAR_3->sgt);
   FUNC_1(VAR_3->sgt);
  }

  if (FUNC_6(VAR_2))
   FUNC_0(VAR_2, VAR_3->pages, 1, 0);
  else
   FUNC_2(VAR_2);

  VAR_3->pages = ((void*)0);
 }
}

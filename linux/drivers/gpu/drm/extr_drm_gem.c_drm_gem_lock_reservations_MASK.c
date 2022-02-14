
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ww_acquire_ctx {int dummy; } ;
struct drm_gem_object {int resv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ww_acquire_ctx*) ;
 int FUNC_1 (int ,struct ww_acquire_ctx*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ww_acquire_ctx*) ;
 int FUNC_4 (struct ww_acquire_ctx*,int *) ;

int
FUNC_5(struct drm_gem_object **VAR_2, int VAR_3,
     struct ww_acquire_ctx *VAR_4)
{
 int VAR_5 = -1;
 int VAR_6, VAR_7;

 FUNC_4(VAR_4, &VAR_1);

retry:
 if (VAR_5 != -1) {
  struct drm_gem_object *VAR_8 = VAR_2[VAR_5];

  VAR_7 = FUNC_1(VAR_8->resv,
         VAR_4);
  if (VAR_7) {
   FUNC_3(VAR_4);
   return VAR_7;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_6 == VAR_5)
   continue;

  VAR_7 = FUNC_0(VAR_2[VAR_6]->resv,
           VAR_4);
  if (VAR_7) {
   int VAR_9;

   for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
    FUNC_2(VAR_2[VAR_9]->resv);

   if (VAR_5 != -1 && VAR_5 >= VAR_6)
    FUNC_2(VAR_2[VAR_5]->resv);

   if (VAR_7 == -VAR_0) {
    VAR_5 = VAR_6;
    goto retry;
   }

   FUNC_3(VAR_4);
   return VAR_7;
  }
 }

 FUNC_3(VAR_4);

 return 0;
}

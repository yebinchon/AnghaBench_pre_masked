
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_flip_work {int (* func ) (struct drm_flip_work*,void*) ;int name; } ;
struct drm_flip_task {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 struct drm_flip_task* FUNC_2 (void*,int ) ;
 int FUNC_3 (struct drm_flip_work*,struct drm_flip_task*) ;
 int FUNC_4 (struct drm_flip_work*,void*) ;

void FUNC_5(struct drm_flip_work *VAR_2, void *VAR_3)
{
 struct drm_flip_task *VAR_4;

 VAR_4 = FUNC_2(VAR_3,
    FUNC_1() ? VAR_1 : VAR_0);
 if (VAR_4) {
  FUNC_3(VAR_2, VAR_4);
 } else {
  FUNC_0("%s could not allocate task!\n", VAR_2->name);
  VAR_2->func(VAR_2, VAR_3);
 }
}

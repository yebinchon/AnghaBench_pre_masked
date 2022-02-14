
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_object {int refcount; int id; scalar_t__ free_cb; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_mode_object *VAR_0)
{
 if (VAR_0->free_cb) {
  FUNC_0("OBJ ID: %d (%d)\n", VAR_0->id, FUNC_2(&VAR_0->refcount));
  FUNC_1(&VAR_0->refcount);
 }
}

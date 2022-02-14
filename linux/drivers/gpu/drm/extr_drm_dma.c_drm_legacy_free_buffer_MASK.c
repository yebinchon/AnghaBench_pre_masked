
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_buf {scalar_t__ used; int * file_priv; scalar_t__ pending; scalar_t__ waiting; } ;



void FUNC_0(struct drm_device *VAR_0, struct drm_buf * VAR_1)
{
 if (!VAR_1)
  return;

 VAR_1->waiting = 0;
 VAR_1->pending = 0;
 VAR_1->file_priv = ((void*)0);
 VAR_1->used = 0;
}

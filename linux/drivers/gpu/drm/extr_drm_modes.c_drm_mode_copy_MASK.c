
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct drm_display_mode {struct list_head head; } ;



void FUNC_0(struct drm_display_mode *VAR_0, const struct drm_display_mode *VAR_1)
{
 struct list_head VAR_2 = VAR_0->head;

 *VAR_0 = *VAR_1;
 VAR_0->head = VAR_2;
}

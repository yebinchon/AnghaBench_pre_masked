
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_rect {void* y2; void* x2; void* y1; void* x1; } ;


 int FUNC_0 (struct drm_rect*) ;
 void* FUNC_1 (void*,void*) ;
 void* FUNC_2 (void*,void*) ;

bool FUNC_3(struct drm_rect *VAR_0, const struct drm_rect *VAR_1)
{
 VAR_0->x1 = FUNC_1(VAR_0->x1, VAR_1->x1);
 VAR_0->y1 = FUNC_1(VAR_0->y1, VAR_1->y1);
 VAR_0->x2 = FUNC_2(VAR_0->x2, VAR_1->x2);
 VAR_0->y2 = FUNC_2(VAR_0->y2, VAR_1->y2);

 return FUNC_0(VAR_0);
}

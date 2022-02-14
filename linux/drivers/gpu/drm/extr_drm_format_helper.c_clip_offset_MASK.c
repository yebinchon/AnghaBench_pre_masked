
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_rect {unsigned int y1; unsigned int x1; } ;



__attribute__((used)) static unsigned int FUNC_0(struct drm_rect *VAR_0,
    unsigned int VAR_1, unsigned int VAR_2)
{
 return VAR_0->y1 * VAR_1 + VAR_0->x1 * VAR_2;
}

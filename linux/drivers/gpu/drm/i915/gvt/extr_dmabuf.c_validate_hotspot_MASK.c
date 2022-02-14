
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_cursor_plane_format {scalar_t__ x_hot; scalar_t__ width; scalar_t__ y_hot; scalar_t__ height; } ;



__attribute__((used)) static bool FUNC_0(struct intel_vgpu_cursor_plane_format *VAR_0)
{
 if (VAR_0 && VAR_0->x_hot <= VAR_0->width && VAR_0->y_hot <= VAR_0->height)
  return 1;
 else
  return 0;
}

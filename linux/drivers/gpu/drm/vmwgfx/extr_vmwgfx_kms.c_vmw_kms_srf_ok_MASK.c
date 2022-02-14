
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmw_private {scalar_t__ texture_max_width; scalar_t__ texture_max_height; } ;



__attribute__((used)) static bool
FUNC_0(struct vmw_private *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (VAR_1 > VAR_0->texture_max_width ||
     VAR_2 > VAR_0->texture_max_height)
  return 0;

 return 1;
}

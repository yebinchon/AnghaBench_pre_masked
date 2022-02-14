
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int max_handles; int* img_size; int * handles; } ;
struct radeon_device {TYPE_1__ uvd; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0,
         unsigned *VAR_1, unsigned *VAR_2)
{
 unsigned VAR_3;

 *VAR_1 = 0;
 *VAR_2 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->uvd.max_handles; ++VAR_3) {
  if (!FUNC_0(&VAR_0->uvd.handles[VAR_3]))
   continue;

  if (VAR_0->uvd.img_size[VAR_3] >= 720*576)
   ++(*VAR_2);
  else
   ++(*VAR_1);
 }
}

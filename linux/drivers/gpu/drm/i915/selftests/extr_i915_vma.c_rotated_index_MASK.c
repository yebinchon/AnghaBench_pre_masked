
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_rotation_info {TYPE_1__* plane; } ;
struct TYPE_2__ {unsigned int stride; unsigned int height; unsigned long offset; } ;



__attribute__((used)) static unsigned long FUNC_0(const struct intel_rotation_info *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2,
       unsigned int VAR_3)
{
 return (VAR_0->plane[VAR_1].stride * (VAR_0->plane[VAR_1].height - VAR_3 - 1) +
  VAR_0->plane[VAR_1].offset + VAR_2);
}

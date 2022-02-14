
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_remapped_info {TYPE_1__* plane; } ;
struct TYPE_2__ {unsigned int width; unsigned int height; } ;


 int FUNC_0 (TYPE_1__*) ;

unsigned int FUNC_1(const struct intel_remapped_info *VAR_0)
{
 unsigned int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0 ; VAR_2 < FUNC_0(VAR_0->plane); VAR_2++)
  VAR_1 += VAR_0->plane[VAR_2].width * VAR_0->plane[VAR_2].height;

 return VAR_1;
}

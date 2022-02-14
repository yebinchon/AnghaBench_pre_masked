
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct aper_size_info_8 {scalar_t__ size_value; int size; } ;
struct TYPE_4__ {int aperture_size_idx; void* current_size; void* previous_size; TYPE_1__* driver; } ;
struct TYPE_3__ {int num_aperture_sizes; int aperture_sizes; } ;


 struct aper_size_info_8* FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_1(u8 VAR_1)
{
 int VAR_2;
 struct aper_size_info_8 *VAR_3;

 VAR_3 = FUNC_0(VAR_0->driver->aperture_sizes);

 for (VAR_2 = 0; VAR_2 < VAR_0->driver->num_aperture_sizes; VAR_2++) {
  if (VAR_1 == VAR_3[VAR_2].size_value) {
   VAR_0->previous_size =
    VAR_0->current_size = (void *) (VAR_3 + VAR_2);
   VAR_0->aperture_size_idx = VAR_2;
   return VAR_3[VAR_2].size;
  }
 }
 return 0;
}

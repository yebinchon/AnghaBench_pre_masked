
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct aper_size_info_16 {scalar_t__ size_value; int size; } ;
struct TYPE_4__ {int aperture_size_idx; void* current_size; void* previous_size; TYPE_1__* driver; scalar_t__ capndx; int dev; } ;
struct TYPE_3__ {int num_aperture_sizes; int aperture_sizes; } ;


 scalar_t__ VAR_0 ;
 struct aper_size_info_16* FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;

int FUNC_2(void)
{
 u16 VAR_2;
 int VAR_3;
 struct aper_size_info_16 *VAR_4;

 FUNC_1(VAR_1->dev, VAR_1->capndx+VAR_0, &VAR_2);
 VAR_4 = FUNC_0(VAR_1->driver->aperture_sizes);

 for (VAR_3 = 0; VAR_3 < VAR_1->driver->num_aperture_sizes; VAR_3++) {
  if (VAR_2 == VAR_4[VAR_3].size_value) {
   VAR_1->previous_size =
    VAR_1->current_size = (void *) (VAR_4 + VAR_3);

   VAR_1->aperture_size_idx = VAR_3;
   return VAR_4[VAR_3].size;
  }
 }
 return 0;
}

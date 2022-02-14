
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct aper_size_info_32 {int size_value; int size; } ;
struct TYPE_4__ {int aperture_size_idx; void* current_size; void* previous_size; TYPE_1__* driver; int dev; } ;
struct TYPE_3__ {int num_aperture_sizes; int aperture_sizes; } ;


 int VAR_0 ;
 struct aper_size_info_32* FUNC_0 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2;
 u32 VAR_3;
 struct aper_size_info_32 *VAR_4;

 FUNC_1(VAR_1->dev, VAR_0, &VAR_3);
 VAR_3 &= ~(0xfffffff0);
 VAR_4 = FUNC_0(VAR_1->driver->aperture_sizes);

 for (VAR_2 = 0; VAR_2 < VAR_1->driver->num_aperture_sizes; VAR_2++) {
  if (VAR_3 == VAR_4[VAR_2].size_value) {
   VAR_1->previous_size =
       VAR_1->current_size = (void *) (VAR_4 + VAR_2);
   VAR_1->aperture_size_idx = VAR_2;
   return VAR_4[VAR_2].size;
  }
 }

 return 0;
}

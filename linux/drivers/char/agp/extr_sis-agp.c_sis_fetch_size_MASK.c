
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct aper_size_info_8 {int size_value; int size; } ;
struct TYPE_4__ {int aperture_size_idx; void* current_size; void* previous_size; TYPE_1__* driver; int dev; } ;
struct TYPE_3__ {int num_aperture_sizes; int aperture_sizes; } ;


 struct aper_size_info_8* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(void)
{
 u8 VAR_2;
 int VAR_3;
 struct aper_size_info_8 *VAR_4;

 FUNC_1(VAR_1->dev, VAR_0, &VAR_2);
 VAR_4 = FUNC_0(VAR_1->driver->aperture_sizes);
 for (VAR_3 = 0; VAR_3 < VAR_1->driver->num_aperture_sizes; VAR_3++) {
  if ((VAR_2 == VAR_4[VAR_3].size_value) ||
      ((VAR_2 & ~(0x07)) ==
       (VAR_4[VAR_3].size_value & ~(0x07)))) {
   VAR_1->previous_size =
       VAR_1->current_size = (void *) (VAR_4 + VAR_3);

   VAR_1->aperture_size_idx = VAR_3;
   return VAR_4[VAR_3].size;
  }
 }

 return 0;
}

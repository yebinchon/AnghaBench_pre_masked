
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aper_size_info_32 {int size; } ;
struct TYPE_6__ {int aperture_size_idx; void* current_size; void* previous_size; TYPE_2__* driver; TYPE_1__* dev; } ;
struct TYPE_5__ {int num_aperture_sizes; int aperture_sizes; } ;
struct TYPE_4__ {int dev; } ;


 struct aper_size_info_32* FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char**) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_3, VAR_4 = 0;
 struct aper_size_info_32 *VAR_5 =
     FUNC_0(VAR_1->driver->aperture_sizes);

 if (VAR_2) {
  char *VAR_6 = VAR_2;

  VAR_4 = FUNC_2(VAR_2, &VAR_2) >> 20;
  VAR_2 = VAR_6;

  for (VAR_3 = 0; VAR_3 < VAR_1->driver->num_aperture_sizes; VAR_3++)
   if (VAR_4 == VAR_5[VAR_3].size)
    break;

  if (VAR_3 == VAR_1->driver->num_aperture_sizes) {
   FUNC_1(&VAR_1->dev->dev, "invalid aperture size, "
    "using default\n");
   VAR_4 = 0;
   VAR_2 = ((void*)0);
  }
 }

 if (!VAR_4) {
  for (VAR_3 = 0; VAR_3 < VAR_1->driver->num_aperture_sizes; VAR_3++)
   if (VAR_5[VAR_3].size == VAR_0)
    break;
 }

 VAR_1->previous_size =
     VAR_1->current_size = (void *)(VAR_5 + VAR_3);
 VAR_1->aperture_size_idx = VAR_3;
 return VAR_5[VAR_3].size;
}

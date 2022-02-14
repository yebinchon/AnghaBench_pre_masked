
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dispc_device {TYPE_1__* feat; } ;
typedef enum dispc_feature_id { ____Placeholder_dispc_feature_id } dispc_feature_id ;
struct TYPE_2__ {unsigned int num_features; int* features; } ;



__attribute__((used)) static bool FUNC_0(struct dispc_device *VAR_0,
         enum dispc_feature_id VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->feat->num_features; VAR_2++) {
  if (VAR_0->feat->features[VAR_2] == VAR_1)
   return 1;
 }

 return 0;
}

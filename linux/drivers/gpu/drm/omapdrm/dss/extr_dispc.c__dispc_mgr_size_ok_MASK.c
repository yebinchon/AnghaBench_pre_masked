
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct dispc_device {TYPE_1__* feat; } ;
struct TYPE_2__ {scalar_t__ mgr_width_max; scalar_t__ mgr_height_max; } ;



__attribute__((used)) static bool FUNC_0(struct dispc_device *VAR_0,
          u16 VAR_1, u16 VAR_2)
{
 return VAR_1 <= VAR_0->feat->mgr_width_max &&
  VAR_2 <= VAR_0->feat->mgr_height_max;
}

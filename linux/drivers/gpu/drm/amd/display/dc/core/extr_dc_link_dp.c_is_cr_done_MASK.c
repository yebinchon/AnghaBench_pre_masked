
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int CR_DONE_0; } ;
union lane_status {TYPE_1__ bits; } ;
typedef size_t uint32_t ;
typedef enum dc_lane_count { ____Placeholder_dc_lane_count } dc_lane_count ;



__attribute__((used)) static bool FUNC_0(enum dc_lane_count VAR_0,
 union lane_status *VAR_1)
{
 bool VAR_2 = 1;
 uint32_t VAR_3;

 for (VAR_3 = 0; VAR_3 < (uint32_t)(VAR_0); VAR_3++) {
  if (!VAR_1[VAR_3].bits.CR_DONE_0)
   VAR_2 = 0;
 }
 return VAR_2;

}

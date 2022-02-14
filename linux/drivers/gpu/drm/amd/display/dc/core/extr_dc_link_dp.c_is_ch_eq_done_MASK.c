
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int CHANNEL_EQ_DONE_0; int SYMBOL_LOCKED_0; } ;
union lane_status {TYPE_2__ bits; } ;
struct TYPE_3__ {int INTERLANE_ALIGN_DONE; } ;
union lane_align_status_updated {TYPE_1__ bits; } ;
typedef size_t uint32_t ;
typedef enum dc_lane_count { ____Placeholder_dc_lane_count } dc_lane_count ;



__attribute__((used)) static bool FUNC_0(enum dc_lane_count VAR_0,
 union lane_status *VAR_1,
 union lane_align_status_updated *VAR_2)
{
 bool VAR_3 = 1;
 uint32_t VAR_4;
 if (!VAR_2->bits.INTERLANE_ALIGN_DONE)
  VAR_3 = 0;
 else {
  for (VAR_4 = 0; VAR_4 < (uint32_t)(VAR_0); VAR_4++) {
   if (!VAR_1[VAR_4].bits.SYMBOL_LOCKED_0 ||
    !VAR_1[VAR_4].bits.CHANNEL_EQ_DONE_0)
    VAR_3 = 0;
  }
 }
 return VAR_3;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ full; } ;
struct dce10_wm_params {scalar_t__ lb_size; scalar_t__ src_width; scalar_t__ active_time; scalar_t__ blank_time; scalar_t__ vtaps; TYPE_1__ vsc; } ;
struct TYPE_4__ {scalar_t__ full; } ;
typedef TYPE_2__ fixed20_12 ;


 scalar_t__ FUNC_0 (struct dce10_wm_params*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct dce10_wm_params *VAR_0)
{
 u32 VAR_1 = VAR_0->lb_size / VAR_0->src_width;
 u32 VAR_2 = VAR_0->active_time + VAR_0->blank_time;
 u32 VAR_3;
 u32 VAR_4;
 fixed20_12 VAR_5;

 VAR_5.full = FUNC_1(1);
 if (VAR_0->vsc.full > VAR_5.full)
  VAR_3 = 1;
 else {
  if (VAR_1 <= (VAR_0->vtaps + 1))
   VAR_3 = 1;
  else
   VAR_3 = 2;
 }

 VAR_4 = (VAR_3 * VAR_2 + VAR_0->blank_time);

 if (FUNC_0(VAR_0) <= VAR_4)
  return 1;
 else
  return 0;
}

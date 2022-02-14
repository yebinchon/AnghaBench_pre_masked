
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timing_generator {TYPE_2__* bp; } ;
struct dce110_timing_generator {int controller_id; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {int (* enable_crtc ) (TYPE_2__*,int ,int) ;} ;


 int VAR_0 ;
 struct dce110_timing_generator* FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

bool FUNC_2(struct timing_generator *VAR_1)
{
 enum bp_result VAR_2;

 struct dce110_timing_generator *VAR_3 = FUNC_0(VAR_1);

 VAR_2 = VAR_1->bp->funcs->enable_crtc(VAR_1->bp, VAR_3->controller_id, 0);
 return VAR_2 == VAR_0;
}

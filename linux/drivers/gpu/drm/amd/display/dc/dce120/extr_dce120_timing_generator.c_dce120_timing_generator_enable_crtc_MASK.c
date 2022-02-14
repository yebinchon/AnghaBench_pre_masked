
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

bool FUNC_3(struct timing_generator *VAR_5)
{
 enum bp_result VAR_6;
 struct dce110_timing_generator *VAR_7 = FUNC_1(VAR_5);




 FUNC_0(VAR_2,
   VAR_3, 0);

 FUNC_0(VAR_1,
   VAR_4, 0);


 VAR_6 = VAR_5->bp->funcs->enable_crtc(VAR_5->bp, VAR_7->controller_id, 1);

 return VAR_6 == VAR_0;
}

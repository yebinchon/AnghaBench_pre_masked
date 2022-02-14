
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;
struct TYPE_2__ {scalar_t__ HORZ_COUNT_BY_TWO; } ;
struct dc_crtc_timing {TYPE_1__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(
 struct timing_generator *VAR_3,
 const struct dc_crtc_timing *VAR_4)
{
 uint32_t VAR_5;
 struct dce110_timing_generator *VAR_6 = FUNC_1(VAR_3);

 VAR_5 = FUNC_2(VAR_3->ctx,
   FUNC_0(VAR_2));

 FUNC_4(VAR_5, 0, VAR_0,
   VAR_1);

 if (VAR_4->flags.HORZ_COUNT_BY_TWO)
  FUNC_4(VAR_5, 1, VAR_0,
     VAR_1);

 FUNC_3(VAR_3->ctx,
   FUNC_0(VAR_2), VAR_5);
}

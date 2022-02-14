
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timing_generator {int ctx; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_4 ;

void FUNC_3(struct timing_generator *VAR_5,
  bool VAR_6)
{
 struct dce110_timing_generator *VAR_7 = FUNC_1(VAR_5);

 FUNC_0(
  VAR_1,
  VAR_2, 1);

 if (VAR_6)
  FUNC_0(VAR_0, VAR_3, 1);
 else
  FUNC_2(VAR_5->ctx, VAR_4,
   VAR_7->offsets.crtc, 0);
}

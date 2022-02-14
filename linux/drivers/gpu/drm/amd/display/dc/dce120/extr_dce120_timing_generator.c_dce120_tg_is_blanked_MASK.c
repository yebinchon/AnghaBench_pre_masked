
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce110_timing_generator* FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;

bool FUNC_3(struct timing_generator *VAR_4)
{
 struct dce110_timing_generator *VAR_5 = FUNC_0(VAR_4);
 uint32_t VAR_6 = FUNC_1(
   VAR_4->ctx,
   VAR_3,
   VAR_5->offsets.crtc);

 if (FUNC_2(
  VAR_6,
  VAR_0,
  VAR_1) == 1 &&
     FUNC_2(
  VAR_6,
  VAR_0,
  VAR_2) == 1)
   return 1;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;
struct crtc_position {void* nominal_vcount; void* vertical_count; void* horizontal_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dce110_timing_generator* FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (int ,int ,int ) ;
 void* FUNC_2 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_3(
 struct timing_generator *VAR_7,
 struct crtc_position *VAR_8)
{
 struct dce110_timing_generator *VAR_9 = FUNC_0(VAR_7);
 uint32_t VAR_10 = FUNC_1(
    VAR_7->ctx,
    VAR_6,
    VAR_9->offsets.crtc);

 VAR_8->horizontal_count = FUNC_2(VAR_10,
   VAR_1, VAR_2);

 VAR_8->vertical_count = FUNC_2(VAR_10,
   VAR_1, VAR_3);

 VAR_10 = FUNC_1(
    VAR_7->ctx,
    VAR_5,
    VAR_9->offsets.crtc);

 VAR_8->nominal_vcount = FUNC_2(VAR_10,
   VAR_0, VAR_4);
}

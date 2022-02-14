
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timing_generator {int ctx; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;
struct crc_params {int selection; scalar_t__ continuous_mode; int windowb_y_end; int windowb_y_start; int windowb_x_end; int windowb_x_start; int windowa_y_end; int windowa_y_start; int windowa_x_end; int windowa_x_start; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int,int ,int ,int ,int) ;
 struct dce110_timing_generator* FUNC_2 (struct timing_generator*) ;
 int FUNC_3 (struct timing_generator*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_15 ;

__attribute__((used)) static bool FUNC_5(struct timing_generator *VAR_16,
     const struct crc_params *VAR_17)
{
 struct dce110_timing_generator *VAR_18 = FUNC_2(VAR_16);


 if (!FUNC_3(VAR_16))
  return 0;


 FUNC_4(VAR_16->ctx, VAR_15,
      VAR_18->offsets.crtc, 0);

 if (!VAR_17->enable)
  return 1;



 FUNC_0(VAR_0,
     VAR_7, VAR_17->windowa_x_start,
     VAR_6, VAR_17->windowa_x_end);


 FUNC_0(VAR_1,
     VAR_9, VAR_17->windowa_y_start,
     VAR_8, VAR_17->windowa_y_end);


 FUNC_0(VAR_2,
     VAR_11, VAR_17->windowb_x_start,
     VAR_10, VAR_17->windowb_x_end);


 FUNC_0(VAR_3,
     VAR_13, VAR_17->windowb_y_start,
     VAR_12, VAR_17->windowb_y_end);


 FUNC_1(VAR_4,
     VAR_14, VAR_17->continuous_mode ? 1 : 0,
     VAR_5, VAR_17->selection,
     VAR_14, 1);

 return 1;
}

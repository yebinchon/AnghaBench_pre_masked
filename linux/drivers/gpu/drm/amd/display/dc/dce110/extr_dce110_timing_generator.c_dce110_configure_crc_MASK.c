
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timing_generator {int ctx; } ;
struct dce110_timing_generator {int dummy; } ;
struct crc_params {int windowa_x_start; int windowa_x_end; int windowa_y_start; int windowa_y_end; int windowb_x_start; int windowb_x_end; int windowb_y_start; int windowb_y_end; int selection; scalar_t__ continuous_mode; int enable; } ;


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
 int VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (struct timing_generator*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (scalar_t__,int,int ,int ) ;

bool FUNC_5(struct timing_generator *VAR_21,
     const struct crc_params *VAR_22)
{
 uint32_t VAR_23 = 0;
 uint32_t VAR_24 = 0;
 uint32_t VAR_25;
 struct dce110_timing_generator *VAR_26 = FUNC_1(VAR_21);


 if (!FUNC_2(VAR_21))
  return 0;

 VAR_23 = FUNC_0(VAR_20);


 FUNC_3(VAR_21->ctx, VAR_23, 0);

 if (!VAR_22->enable)
  return 1;



 VAR_25 = 0;
 VAR_24 = FUNC_0(VAR_16);
 FUNC_4(VAR_25, VAR_22->windowa_x_start,
       VAR_1,
       VAR_3);
 FUNC_4(VAR_25, VAR_22->windowa_x_end,
       VAR_1,
       VAR_2);
 FUNC_3(VAR_21->ctx, VAR_24, VAR_25);


 VAR_25 = 0;
 VAR_24 = FUNC_0(VAR_17);
 FUNC_4(VAR_25, VAR_22->windowa_y_start,
       VAR_4,
       VAR_6);
 FUNC_4(VAR_25, VAR_22->windowa_y_end,
       VAR_4,
       VAR_5);
 FUNC_3(VAR_21->ctx, VAR_24, VAR_25);


 VAR_25 = 0;
 VAR_24 = FUNC_0(VAR_18);
 FUNC_4(VAR_25, VAR_22->windowb_x_start,
       VAR_7,
       VAR_9);
 FUNC_4(VAR_25, VAR_22->windowb_x_end,
       VAR_7,
       VAR_8);
 FUNC_3(VAR_21->ctx, VAR_24, VAR_25);


 VAR_25 = 0;
 VAR_24 = FUNC_0(VAR_19);
 FUNC_4(VAR_25, VAR_22->windowb_y_start,
       VAR_10,
       VAR_12);
 FUNC_4(VAR_25, VAR_22->windowb_y_end,
       VAR_10,
       VAR_11);
 FUNC_3(VAR_21->ctx, VAR_24, VAR_25);


 VAR_25 = 0;
 FUNC_4(VAR_25, VAR_22->continuous_mode ? 1 : 0,
       VAR_13, VAR_14);
 FUNC_4(VAR_25, VAR_22->selection,
       VAR_13, VAR_0);
 FUNC_4(VAR_25, 1, VAR_13, VAR_15);
 FUNC_3(VAR_21->ctx, VAR_23, VAR_25);

 return 1;
}

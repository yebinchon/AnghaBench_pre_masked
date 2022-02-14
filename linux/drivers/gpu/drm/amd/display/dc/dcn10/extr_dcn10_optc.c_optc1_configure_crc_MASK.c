
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;
struct crc_params {int selection; scalar_t__ continuous_mode; int windowb_y_end; int windowb_y_start; int windowb_x_end; int windowb_x_start; int windowa_y_end; int windowa_y_start; int windowa_x_end; int windowa_x_start; int enable; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
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
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct timing_generator*) ;

bool FUNC_5(struct timing_generator *VAR_16,
     const struct crc_params *VAR_17)
{
 struct optc *VAR_18 = FUNC_0(VAR_16);


 if (!FUNC_4(VAR_16))
  return 0;

 FUNC_3(VAR_13, 0);

 if (!VAR_17->enable)
  return 1;



 FUNC_1(VAR_1,
   VAR_3, VAR_17->windowa_x_start,
   VAR_2, VAR_17->windowa_x_end);


 FUNC_1(VAR_4,
   VAR_6, VAR_17->windowa_y_start,
   VAR_5, VAR_17->windowa_y_end);


 FUNC_1(VAR_7,
   VAR_9, VAR_17->windowb_x_start,
   VAR_8, VAR_17->windowb_x_end);


 FUNC_1(VAR_10,
   VAR_12, VAR_17->windowb_y_start,
   VAR_11, VAR_17->windowb_y_end);


 FUNC_2(VAR_13,
   VAR_14, VAR_17->continuous_mode ? 1 : 0,
   VAR_0, VAR_17->selection,
   VAR_15, 1);

 return 1;
}

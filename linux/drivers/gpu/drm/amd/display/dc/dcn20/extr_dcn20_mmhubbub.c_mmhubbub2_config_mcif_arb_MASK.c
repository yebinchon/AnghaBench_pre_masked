
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcif_wb {int dummy; } ;
struct mcif_arb_params {int time_per_pixel; int* cli_watermark; int* pstate_watermark; int max_scaled_time; int slice_lines; int arbitration_slice; } ;
struct dcn20_mmhubbub {int dummy; } ;


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
 int FUNC_0 (int ,int ,int) ;
 struct dcn20_mmhubbub* FUNC_1 (struct mcif_wb*) ;

__attribute__((used)) static void FUNC_2(struct mcif_wb *VAR_15,
  struct mcif_arb_params *VAR_16)
{
 struct dcn20_mmhubbub *VAR_17 = FUNC_1(VAR_15);


 FUNC_0(VAR_1, VAR_10, VAR_16->time_per_pixel);




 FUNC_0(VAR_9, VAR_6, 0x0);

 FUNC_0(VAR_11, VAR_5, VAR_16->cli_watermark[0]);
 FUNC_0(VAR_9, VAR_6, 0x1);

 FUNC_0(VAR_11, VAR_5, VAR_16->cli_watermark[1]);
 FUNC_0(VAR_9, VAR_6, 0x2);

 FUNC_0(VAR_11, VAR_5, VAR_16->cli_watermark[2]);
 FUNC_0(VAR_9, VAR_6, 0x3);

 FUNC_0(VAR_11, VAR_5, VAR_16->cli_watermark[3]);



 FUNC_0(VAR_7, VAR_14, 0x0);
 FUNC_0(VAR_8,
   VAR_13, VAR_16->pstate_watermark[0]);

 FUNC_0(VAR_7, VAR_14, 0x1);
 FUNC_0(VAR_8,
   VAR_13, VAR_16->pstate_watermark[1]);

 FUNC_0(VAR_7, VAR_14, 0x2);
 FUNC_0(VAR_8,
   VAR_13, VAR_16->pstate_watermark[2]);

 FUNC_0(VAR_7, VAR_14, 0x3);
 FUNC_0(VAR_8,
   VAR_13, VAR_16->pstate_watermark[3]);


 FUNC_0(VAR_12, VAR_0, VAR_16->max_scaled_time);


 FUNC_0(VAR_3, VAR_2, VAR_16->slice_lines-1);




 FUNC_0(VAR_1, VAR_4, VAR_16->arbitration_slice);
}

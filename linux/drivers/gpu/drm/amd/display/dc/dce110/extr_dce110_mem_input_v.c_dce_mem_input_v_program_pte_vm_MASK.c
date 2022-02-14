
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union dc_tiling_info {int dummy; } dc_tiling_info ;
typedef int uint32_t ;
struct mem_input {int dummy; } ;
struct TYPE_2__ {int ctx; } ;
struct dce_mem_input {TYPE_1__ base; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum dc_rotation_angle { ____Placeholder_dc_rotation_angle } dc_rotation_angle ;


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


 struct dce_mem_input* FUNC_0 (struct mem_input*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 unsigned int* FUNC_3 (union dc_tiling_info*,int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (int ,unsigned int const,int ,int ) ;

void FUNC_5(
  struct mem_input *VAR_22,
  enum surface_pixel_format VAR_23,
  union dc_tiling_info *VAR_24,
  enum dc_rotation_angle VAR_25)
{
 struct dce_mem_input *VAR_26 = FUNC_0(VAR_22);
 const unsigned int *VAR_27 = FUNC_3(VAR_24, VAR_23, 0);
 const unsigned int *VAR_28 = FUNC_3(VAR_24, VAR_23, 1);

 unsigned int VAR_29 = 0;
 unsigned int VAR_30 = 0;
 unsigned int VAR_31 = 0;
 unsigned int VAR_32 = 0;
 unsigned int VAR_33 = VAR_27[1];
 unsigned int VAR_34 = VAR_27[2];
 unsigned int VAR_35 = 0;
 unsigned int VAR_36 = 0;
 uint32_t VAR_37 = 0;

 while ((VAR_33 >>= 1) != 0)
  VAR_29++;
 while ((VAR_34 >>= 1) != 0)
  VAR_30++;

 VAR_33 = VAR_28[1];
 VAR_34 = VAR_28[2];
 while ((VAR_33 >>= 1) != 0)
  VAR_31++;
 while ((VAR_34 >>= 1) != 0)
  VAR_32++;

 switch (VAR_25) {
 case 128:
 case 129:
  VAR_35 = VAR_27[4];
  VAR_36 = VAR_28[4];
  break;
 default:
  VAR_35 = VAR_27[3];
  VAR_36 = VAR_28[3];
  break;
 }

 VAR_37 = FUNC_1(VAR_26->base.ctx, VAR_21);

 FUNC_4(VAR_37, 0xff, VAR_14, VAR_16);
 FUNC_4(VAR_37, 0xff, VAR_14, VAR_15);
 FUNC_2(VAR_26->base.ctx, VAR_21, VAR_37);

 VAR_37 = FUNC_1(VAR_26->base.ctx, VAR_19);
 FUNC_4(VAR_37, VAR_29, VAR_12, VAR_6);
 FUNC_4(VAR_37, VAR_30, VAR_12, VAR_4);
 FUNC_4(VAR_37, VAR_35, VAR_12, VAR_2);
 FUNC_2(VAR_26->base.ctx, VAR_19, VAR_37);

 VAR_37 = FUNC_1(VAR_26->base.ctx, VAR_17);
 FUNC_4(VAR_37, VAR_27[5], VAR_10, VAR_8);
 FUNC_4(VAR_37, 0xff, VAR_10, VAR_0);
 FUNC_2(VAR_26->base.ctx, VAR_17, VAR_37);

 VAR_37 = FUNC_1(VAR_26->base.ctx, VAR_20);
 FUNC_4(VAR_37, VAR_31, VAR_13, VAR_7);
 FUNC_4(VAR_37, VAR_32, VAR_13, VAR_5);
 FUNC_4(VAR_37, VAR_36, VAR_13, VAR_3);
 FUNC_2(VAR_26->base.ctx, VAR_20, VAR_37);

 VAR_37 = FUNC_1(VAR_26->base.ctx, VAR_18);
 FUNC_4(VAR_37, VAR_28[5], VAR_11, VAR_9);
 FUNC_4(VAR_37, 0xff, VAR_11, VAR_1);
 FUNC_2(VAR_26->base.ctx, VAR_18, VAR_37);
}

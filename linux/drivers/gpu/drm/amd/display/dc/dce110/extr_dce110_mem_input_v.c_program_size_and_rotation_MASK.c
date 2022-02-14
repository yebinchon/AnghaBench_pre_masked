
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int x; int y; int width; int height; } ;
struct TYPE_4__ {int x; int y; int width; int height; } ;
struct plane_size {int surface_pitch; int chroma_pitch; TYPE_2__ chroma_size; TYPE_1__ surface_size; } ;
struct TYPE_6__ {int ctx; } ;
struct dce_mem_input {TYPE_3__ base; } ;
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
 int VAR_10 ;



 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (scalar_t__,int,int ,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(
 struct dce_mem_input *VAR_33,
 enum dc_rotation_angle VAR_34,
 const struct plane_size *VAR_35)
{
 uint32_t VAR_36 = 0;
 struct plane_size VAR_37 = *VAR_35;

 if (VAR_34 == 128 ||
  VAR_34 == 129) {

  FUNC_2(VAR_37.surface_size.x,
       VAR_37.surface_size.y);
  FUNC_2(VAR_37.surface_size.width,
       VAR_37.surface_size.height);
  FUNC_2(VAR_37.chroma_size.x,
       VAR_37.chroma_size.y);
  FUNC_2(VAR_37.chroma_size.width,
       VAR_37.chroma_size.height);
 }

 VAR_36 = 0;
 FUNC_1(VAR_36, VAR_37.surface_pitch,
   VAR_12, VAR_1);

 FUNC_0(
  VAR_33->base.ctx,
  VAR_23,
  VAR_36);

 VAR_36 = 0;
 FUNC_1(VAR_36, VAR_37.chroma_pitch,
   VAR_11, VAR_0);
 FUNC_0(
  VAR_33->base.ctx,
  VAR_22,
  VAR_36);

 VAR_36 = 0;
 FUNC_1(VAR_36, 0,
   VAR_16, VAR_5);
 FUNC_0(
  VAR_33->base.ctx,
  VAR_27,
  VAR_36);

 VAR_36 = 0;
 FUNC_1(VAR_36, 0,
   VAR_15, VAR_4);
 FUNC_0(
  VAR_33->base.ctx,
  VAR_26,
  VAR_36);

 VAR_36 = 0;
 FUNC_1(VAR_36, 0,
   VAR_20, VAR_9);
 FUNC_0(
  VAR_33->base.ctx,
  VAR_31,
  VAR_36);

 VAR_36 = 0;
 FUNC_1(VAR_36, 0,
   VAR_19, VAR_8);
 FUNC_0(
  VAR_33->base.ctx,
  VAR_30,
  VAR_36);

 VAR_36 = 0;
 FUNC_1(VAR_36, VAR_37.surface_size.x +
   VAR_37.surface_size.width,
   VAR_14, VAR_3);
 FUNC_0(
  VAR_33->base.ctx,
  VAR_25,
  VAR_36);

 VAR_36 = 0;
 FUNC_1(VAR_36, VAR_37.chroma_size.x +
   VAR_37.chroma_size.width,
   VAR_13, VAR_2);
 FUNC_0(
  VAR_33->base.ctx,
  VAR_24,
  VAR_36);

 VAR_36 = 0;
 FUNC_1(VAR_36, VAR_37.surface_size.y +
   VAR_37.surface_size.height,
   VAR_18, VAR_7);
 FUNC_0(
  VAR_33->base.ctx,
  VAR_29,
  VAR_36);

 VAR_36 = 0;
 FUNC_1(VAR_36, VAR_37.chroma_size.y +
   VAR_37.chroma_size.height,
   VAR_17, VAR_6);
 FUNC_0(
  VAR_33->base.ctx,
  VAR_28,
  VAR_36);

 VAR_36 = 0;
 switch (VAR_34) {
 case 128:
  FUNC_1(VAR_36, 3,
   VAR_21, VAR_10);
  break;
 case 130:
  FUNC_1(VAR_36, 2,
   VAR_21, VAR_10);
  break;
 case 129:
  FUNC_1(VAR_36, 1,
   VAR_21, VAR_10);
  break;
 default:
  FUNC_1(VAR_36, 0,
   VAR_21, VAR_10);
  break;
 }

 FUNC_0(
  VAR_33->base.ctx,
  VAR_32,
  VAR_36);
}

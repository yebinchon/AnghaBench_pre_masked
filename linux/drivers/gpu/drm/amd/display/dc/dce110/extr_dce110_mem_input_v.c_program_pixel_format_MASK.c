
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int ctx; } ;
struct dce_mem_input {TYPE_1__ base; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 struct dce_mem_input *VAR_8,
 enum surface_pixel_format VAR_9)
{
 if (VAR_9 < VAR_2) {
  uint32_t VAR_10;
  uint8_t VAR_11;
  uint8_t VAR_12;

  VAR_10 = FUNC_0(
    VAR_8->base.ctx,
    VAR_6);

  switch (VAR_9) {
  case 131:
   VAR_11 = 0;
   VAR_12 = 0;
   break;
  case 130:
   VAR_11 = 1;
   VAR_12 = 1;
   break;
  case 132:
  case 136:
   VAR_11 = 2;
   VAR_12 = 0;
   break;
  case 133:
  case 138:
  case 137:
   VAR_11 = 2;
   VAR_12 = 1;
   break;
  case 135:
  case 139:
  case 134:
   VAR_11 = 3;
   VAR_12 = 0;
   break;
  default:
   VAR_11 = 2;
   VAR_12 = 0;
   break;
  }

  FUNC_2(
    VAR_10,
    VAR_11,
    VAR_3,
    VAR_0);
  FUNC_2(
    VAR_10,
    VAR_12,
    VAR_3,
    VAR_1);

  FUNC_1(
    VAR_8->base.ctx,
    VAR_6,
    VAR_10);

  VAR_10 = FUNC_0(
    VAR_8->base.ctx,
    VAR_7);


  FUNC_2(
    VAR_10,
    0,
    VAR_4,
    VAR_5);
  FUNC_1(
    VAR_8->base.ctx,
    VAR_7,
    VAR_10);

 } else {

  uint32_t VAR_13;
  uint8_t VAR_14;

  VAR_13 = FUNC_0(
    VAR_8->base.ctx,
    VAR_7);

  switch (VAR_9) {
  case 129:
   VAR_14 = 2;
   break;
  case 128:
   VAR_14 = 3;
   break;
  default:
   VAR_14 = 0;
   break;
  }

  FUNC_2(
   VAR_13,
   VAR_14,
   VAR_4,
   VAR_5);

  FUNC_1(
   VAR_8->base.ctx,
   VAR_7,
   VAR_13);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rect {int width; int height; int y; int x; } ;
struct TYPE_2__ {struct dc_context* ctx; } ;
struct dce_transform {TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


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
 int FUNC_0 (struct dc_context*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(
 struct dce_transform *VAR_16,
 struct rect *VAR_17,
 struct rect *VAR_18)
{
 struct dc_context *VAR_19 = VAR_16->base.ctx;
 uint32_t VAR_20 = 0;
 uint32_t VAR_21 = 0;

 if (VAR_17->width != 0 && VAR_17->height != 0) {
  VAR_21 = VAR_14;
  VAR_20 = 0;
  FUNC_1(
   VAR_20,
   VAR_17->x,
   VAR_2,
   VAR_8);
  FUNC_1(
   VAR_20,
   VAR_17->y,
   VAR_2,
   VAR_10);
  FUNC_0(VAR_19, VAR_21, VAR_20);

  VAR_21 = VAR_12;
  VAR_20 = 0;
  FUNC_1(
   VAR_20,
   VAR_17->height,
   VAR_0,
   VAR_4);
  FUNC_1(
   VAR_20,
   VAR_17->width,
   VAR_0,
   VAR_6);
  FUNC_0(VAR_19, VAR_21, VAR_20);
 }

 if (VAR_18->width != 0 && VAR_18->height != 0) {
  VAR_21 = VAR_15;
  VAR_20 = 0;
  FUNC_1(
   VAR_20,
   VAR_18->x,
   VAR_3,
   VAR_9);
  FUNC_1(
   VAR_20,
   VAR_18->y,
   VAR_3,
   VAR_11);
  FUNC_0(VAR_19, VAR_21, VAR_20);

  VAR_21 = VAR_13;
  VAR_20 = 0;
  FUNC_1(
   VAR_20,
   VAR_18->height,
   VAR_1,
   VAR_5);
  FUNC_1(
   VAR_20,
   VAR_18->width,
   VAR_1,
   VAR_7);
  FUNC_0(VAR_19, VAR_21, VAR_20);
 }
}

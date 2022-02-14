
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int h_taps; int v_taps; int h_taps_c; int v_taps_c; } ;
struct scaler_data {scalar_t__ format; TYPE_2__ taps; } ;
struct TYPE_3__ {struct dc_context* ctx; } ;
struct dce_transform {TYPE_1__ base; } ;
struct dc_context {int dummy; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (struct dc_context*,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (scalar_t__,int,int ,int ) ;

__attribute__((used)) static bool FUNC_3(
 struct dce_transform *VAR_16,
 const struct scaler_data *VAR_17)
{
 bool VAR_18 = 0;
 struct dc_context *VAR_19 = VAR_16->base.ctx;
 uint32_t VAR_20 = 0;

 FUNC_2(VAR_20, VAR_17->taps.h_taps - 1,
   VAR_3, VAR_5);
 FUNC_2(VAR_20, VAR_17->taps.v_taps - 1,
   VAR_3, VAR_11);
 FUNC_2(VAR_20, VAR_17->taps.h_taps_c - 1,
   VAR_3, VAR_6);
 FUNC_2(VAR_20, VAR_17->taps.v_taps_c - 1,
   VAR_3, VAR_12);
 FUNC_0(VAR_19, VAR_15, VAR_20);

 VAR_20 = 0;
 if (VAR_17->taps.h_taps + VAR_17->taps.v_taps > 2) {
  FUNC_2(VAR_20, 1, VAR_2, VAR_7);
  FUNC_2(VAR_20, 1, VAR_2, VAR_9);
  VAR_18 = 1;
 } else {
  FUNC_2(VAR_20, 0, VAR_2, VAR_7);
  FUNC_2(VAR_20, 0, VAR_2, VAR_9);
 }

 if (VAR_17->taps.h_taps_c + VAR_17->taps.v_taps_c > 2) {
  FUNC_2(VAR_20, 1, VAR_2, VAR_8);
  FUNC_2(VAR_20, 1, VAR_2, VAR_10);
  VAR_18 = 1;
 } else if (VAR_17->format != VAR_0) {
  FUNC_2(
   VAR_20,
   FUNC_1(VAR_20, VAR_2, VAR_7),
   VAR_2,
   VAR_8);
  FUNC_2(
   VAR_20,
   FUNC_1(VAR_20, VAR_2, VAR_9),
   VAR_2,
   VAR_10);
 } else {
  FUNC_2(VAR_20, 0, VAR_2, VAR_8);
  FUNC_2(VAR_20, 0, VAR_2, VAR_10);
 }
 FUNC_0(VAR_19, VAR_14, VAR_20);

 VAR_20 = 0;





 FUNC_2(VAR_20, 1, VAR_1, VAR_4);
 FUNC_0(VAR_19, VAR_13, VAR_20);

 return VAR_18;
}

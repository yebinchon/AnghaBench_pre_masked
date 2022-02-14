
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct dce_aux {int dummy; } ;
struct aux_engine_dce110 {int timeout_period; } ;
typedef enum aux_channel_operation_result { ____Placeholder_aux_channel_operation_result } aux_channel_operation_result ;


 int FUNC_0 (int) ;
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
 struct aux_engine_dce110* FUNC_1 (struct dce_aux*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int,int) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;

__attribute__((used)) static enum aux_channel_operation_result FUNC_5(
 struct dce_aux *VAR_16,
 uint8_t *VAR_17)
{
 struct aux_engine_dce110 *VAR_18 = FUNC_1(VAR_16);

 uint32_t VAR_19;

 if (VAR_17 == ((void*)0)) {

  FUNC_0(0);
  return VAR_2;
 }
 *VAR_17 = 0;


 FUNC_3(VAR_7, VAR_5, 1,
    10, VAR_18->timeout_period/10);

 VAR_19 = FUNC_2(VAR_7);

 if ((VAR_19 & VAR_9))
  return VAR_0;
 if (VAR_19 & VAR_8) {
  if ((VAR_19 & VAR_15) ||
   (VAR_19 & VAR_14))
   return VAR_3;

  else if ((VAR_19 & VAR_10) ||
   (VAR_19 & VAR_13) ||
   (VAR_19 &
    VAR_11) ||
   (VAR_19 & VAR_12))
   return VAR_1;

  *VAR_17 = FUNC_4(VAR_19,
    VAR_7,
    VAR_6);

  if (*VAR_17 == 0)
   return
   VAR_1;
  else {
   *VAR_17 -= 1;
   return VAR_4;
  }
 } else {



  FUNC_0(0);
  return VAR_3;
 }
}

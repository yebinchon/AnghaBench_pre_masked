
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drv_crypto_direction { ____Placeholder_drv_crypto_direction } drv_crypto_direction ;
typedef enum cc_flow_mode { ____Placeholder_cc_flow_mode } cc_flow_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum cc_flow_mode FUNC_0(enum drv_crypto_direction VAR_8,
       enum cc_flow_mode VAR_9,
       bool VAR_10)
{
 enum cc_flow_mode VAR_11;

 if (VAR_8 == VAR_6) {
  if (VAR_9 == VAR_7)
   VAR_11 = VAR_10 ?
    VAR_1 : VAR_4;
  else
   VAR_11 = VAR_10 ?
    VAR_3 : VAR_5;
 } else {
  if (VAR_9 == VAR_7)
   VAR_11 = VAR_10 ?
    VAR_0 : VAR_4;
  else
   VAR_11 = VAR_10 ?
    VAR_2 : VAR_5;
 }

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aux_payload {scalar_t__ write; scalar_t__ mot; scalar_t__ i2c_over_aux; } ;
typedef enum i2caux_transaction_action { ____Placeholder_i2caux_transaction_action } i2caux_transaction_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum i2caux_transaction_action FUNC_0(struct aux_payload *VAR_6)
{
 if (VAR_6->i2c_over_aux) {
  if (VAR_6->write) {
   if (VAR_6->mot)
    return VAR_5;
   return VAR_4;
  }
  if (VAR_6->mot)
   return VAR_3;
  return VAR_2;
 }
 if (VAR_6->write)
  return VAR_1;
 return VAR_0;
}

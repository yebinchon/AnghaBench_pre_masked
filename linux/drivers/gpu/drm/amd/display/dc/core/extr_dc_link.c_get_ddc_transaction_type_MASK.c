
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum ddc_transaction_type { ____Placeholder_ddc_transaction_type } ddc_transaction_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static enum ddc_transaction_type FUNC_0(
  enum signal_type VAR_3)
{
 enum ddc_transaction_type VAR_4 = VAR_2;

 switch (VAR_3) {
 case 132:
 case 133:
 case 130:
 case 129:
 case 128:
  VAR_4 = VAR_0;
  break;

 case 135:
 case 131:
  VAR_4 = VAR_1;
  break;

 case 134:



  VAR_4 = VAR_1;
  break;

 default:
  break;
 }

 return VAR_4;
}

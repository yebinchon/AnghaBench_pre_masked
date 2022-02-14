
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intel_encoder {int dummy; } ;
struct intel_dp {int* train_set; } ;
struct TYPE_2__ {struct intel_encoder base; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct intel_dp*) ;
 int FUNC_1 (struct intel_encoder*,unsigned long,unsigned long,unsigned long,int ) ;

__attribute__((used)) static u32 FUNC_2(struct intel_dp *VAR_2)
{
 struct intel_encoder *VAR_3 = &FUNC_0(VAR_2)->base;
 unsigned long VAR_4, VAR_5,
  VAR_6;
 u8 VAR_7 = VAR_2->train_set[0];

 switch (VAR_7 & VAR_0) {
 case 135:
  VAR_5 = 0x0004000;
  switch (VAR_7 & VAR_1) {
  case 131:
   VAR_4 = 0x2B405555;
   VAR_6 = 0x552AB83A;
   break;
  case 130:
   VAR_4 = 0x2B404040;
   VAR_6 = 0x5548B83A;
   break;
  case 129:
   VAR_4 = 0x2B245555;
   VAR_6 = 0x5560B83A;
   break;
  case 128:
   VAR_4 = 0x2B405555;
   VAR_6 = 0x5598DA3A;
   break;
  default:
   return 0;
  }
  break;
 case 134:
  VAR_5 = 0x0002000;
  switch (VAR_7 & VAR_1) {
  case 131:
   VAR_4 = 0x2B404040;
   VAR_6 = 0x5552B83A;
   break;
  case 130:
   VAR_4 = 0x2B404848;
   VAR_6 = 0x5580B83A;
   break;
  case 129:
   VAR_4 = 0x2B404040;
   VAR_6 = 0x55ADDA3A;
   break;
  default:
   return 0;
  }
  break;
 case 133:
  VAR_5 = 0x0000000;
  switch (VAR_7 & VAR_1) {
  case 131:
   VAR_4 = 0x2B305555;
   VAR_6 = 0x5570B83A;
   break;
  case 130:
   VAR_4 = 0x2B2B4040;
   VAR_6 = 0x55ADDA3A;
   break;
  default:
   return 0;
  }
  break;
 case 132:
  VAR_5 = 0x0006000;
  switch (VAR_7 & VAR_1) {
  case 131:
   VAR_4 = 0x1B405555;
   VAR_6 = 0x55ADDA3A;
   break;
  default:
   return 0;
  }
  break;
 default:
  return 0;
 }

 FUNC_1(VAR_3, VAR_4, VAR_5,
     VAR_6, 0);

 return 0;
}


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
 int FUNC_0 (struct intel_encoder*,int,int,int) ;
 TYPE_1__* FUNC_1 (struct intel_dp*) ;

__attribute__((used)) static u32 FUNC_2(struct intel_dp *VAR_2)
{
 struct intel_encoder *VAR_3 = &FUNC_1(VAR_2)->base;
 u32 VAR_4, VAR_5;
 bool VAR_6 = 0;
 u8 VAR_7 = VAR_2->train_set[0];

 switch (VAR_7 & VAR_0) {
 case 135:
  switch (VAR_7 & VAR_1) {
  case 131:
   VAR_4 = 128;
   VAR_5 = 52;
   break;
  case 130:
   VAR_4 = 128;
   VAR_5 = 77;
   break;
  case 129:
   VAR_4 = 128;
   VAR_5 = 102;
   break;
  case 128:
   VAR_4 = 128;
   VAR_5 = 154;
   VAR_6 = 1;
   break;
  default:
   return 0;
  }
  break;
 case 134:
  switch (VAR_7 & VAR_1) {
  case 131:
   VAR_4 = 85;
   VAR_5 = 78;
   break;
  case 130:
   VAR_4 = 85;
   VAR_5 = 116;
   break;
  case 129:
   VAR_4 = 85;
   VAR_5 = 154;
   break;
  default:
   return 0;
  }
  break;
 case 133:
  switch (VAR_7 & VAR_1) {
  case 131:
   VAR_4 = 64;
   VAR_5 = 104;
   break;
  case 130:
   VAR_4 = 64;
   VAR_5 = 154;
   break;
  default:
   return 0;
  }
  break;
 case 132:
  switch (VAR_7 & VAR_1) {
  case 131:
   VAR_4 = 43;
   VAR_5 = 154;
   break;
  default:
   return 0;
  }
  break;
 default:
  return 0;
 }

 FUNC_0(VAR_3, VAR_4,
     VAR_5, VAR_6);

 return 0;
}

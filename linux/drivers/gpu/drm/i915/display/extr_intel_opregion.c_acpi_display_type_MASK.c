
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int connector_type; } ;
struct intel_connector {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct intel_connector *VAR_5)
{
 u32 VAR_6;

 switch (VAR_5->base.connector_type) {
 case 130:
 case 140:
  VAR_6 = VAR_4;
  break;
 case 142:
 case 133:
 case 143:
 case 144:
 case 132:
  VAR_6 = VAR_3;
  break;
 case 138:
 case 139:
 case 137:
 case 136:
 case 135:
  VAR_6 = VAR_0;
  break;
 case 134:
 case 128:
 case 141:
  VAR_6 = VAR_1;
  break;
 case 131:
 case 129:
  VAR_6 = VAR_2;
  break;
 default:
  FUNC_0(VAR_5->base.connector_type);
  VAR_6 = VAR_2;
  break;
 }

 return VAR_6;
}

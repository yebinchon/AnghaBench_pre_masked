
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (char*,int) ;
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






__attribute__((used)) static
u32 FUNC_1(struct intel_digital_port *VAR_11)
{
 enum port VAR_12 = VAR_11->base.port;
 switch (VAR_12) {
 case 132:
  return VAR_1 | VAR_2;
 case 131:
  return VAR_3 | VAR_4;
 case 130:
  return VAR_5 | VAR_6;
 case 129:
  return VAR_7 | VAR_8;
 case 128:
  return VAR_9 | VAR_10;
 default:
  break;
 }
 FUNC_0("Unknown port %d\n", VAR_12);
 return -VAR_0;
}

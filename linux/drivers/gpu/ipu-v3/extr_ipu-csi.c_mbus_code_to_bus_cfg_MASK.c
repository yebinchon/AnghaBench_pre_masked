
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipu_csi_bus_config {void* data_width; void* mipi_dt; void* data_fmt; } ;
typedef enum v4l2_mbus_type { ____Placeholder_v4l2_mbus_type } v4l2_mbus_type ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_0(struct ipu_csi_bus_config *VAR_22, u32 VAR_23,
    enum v4l2_mbus_type VAR_24)
{
 switch (VAR_23) {
 case 165:
 case 164:
 case 157:
 case 156:
  if (VAR_24 == VAR_21)
   VAR_22->data_fmt = VAR_4;
  else
   VAR_22->data_fmt = VAR_0;
  VAR_22->mipi_dt = VAR_18;
  VAR_22->data_width = VAR_12;
  break;
 case 161:
 case 160:
  VAR_22->data_fmt = VAR_2;
  VAR_22->mipi_dt = VAR_16;
  VAR_22->data_width = VAR_12;
  break;
 case 159:
 case 158:
  VAR_22->data_fmt = VAR_3;
  VAR_22->mipi_dt = VAR_17;
  VAR_22->data_width = VAR_12;
  break;
 case 155:
 case 163:
  VAR_22->data_fmt = VAR_5;
  VAR_22->mipi_dt = VAR_19;
  VAR_22->data_width = VAR_12;
  break;
 case 133:
  VAR_22->data_fmt = VAR_6;
  VAR_22->mipi_dt = VAR_20;
  VAR_22->data_width = VAR_12;
  break;
 case 128:
  VAR_22->data_fmt = VAR_7;
  VAR_22->mipi_dt = VAR_20;
  VAR_22->data_width = VAR_12;
  break;
 case 134:
 case 129:
  VAR_22->data_fmt = VAR_0;
  VAR_22->mipi_dt = VAR_20;
  VAR_22->data_width = VAR_11;
  break;
 case 147:
 case 143:
 case 139:
 case 135:
 case 130:
  VAR_22->data_fmt = VAR_0;
  VAR_22->mipi_dt = VAR_15;
  VAR_22->data_width = VAR_12;
  break;
 case 149:
 case 145:
 case 141:
 case 137:
 case 153:
 case 152:
 case 151:
 case 150:
  VAR_22->data_fmt = VAR_0;
  VAR_22->mipi_dt = VAR_13;
  VAR_22->data_width = VAR_12;
  break;
 case 154:
 case 146:
 case 142:
 case 138:
 case 132:
  VAR_22->data_fmt = VAR_0;
  VAR_22->mipi_dt = VAR_13;
  VAR_22->data_width = VAR_9;
  break;
 case 148:
 case 144:
 case 140:
 case 136:
 case 131:
  VAR_22->data_fmt = VAR_0;
  VAR_22->mipi_dt = VAR_14;
  VAR_22->data_width = VAR_10;
  break;
 case 162:

  VAR_22->data_fmt = VAR_1;
  VAR_22->mipi_dt = VAR_15;
  VAR_22->data_width = VAR_12;
  break;
 default:
  return -VAR_8;
 }

 return 0;
}

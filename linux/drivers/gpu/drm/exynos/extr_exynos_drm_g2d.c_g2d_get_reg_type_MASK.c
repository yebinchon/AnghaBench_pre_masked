
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {int dev; } ;
typedef enum g2d_reg_type { ____Placeholder_g2d_reg_type } g2d_reg_type ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum g2d_reg_type FUNC_1(struct g2d_data *VAR_7, int VAR_8)
{
 enum g2d_reg_type VAR_9;

 switch (VAR_8) {
 case 133:
 case 128:
 case 132:
 case 131:
 case 129:
  VAR_9 = VAR_5;
  break;
 case 130:
  VAR_9 = VAR_6;
  break;
 case 141:
 case 136:
 case 140:
 case 139:
 case 137:
  VAR_9 = VAR_0;
  break;
 case 138:
  VAR_9 = VAR_1;
  break;
 case 134:
  VAR_9 = VAR_4;
  break;
 case 135:
  VAR_9 = VAR_2;
  break;
 default:
  VAR_9 = VAR_3;
  FUNC_0(VAR_7->dev, "Unknown register offset![%d]\n",
         VAR_8);
  break;
 }

 return VAR_9;
}

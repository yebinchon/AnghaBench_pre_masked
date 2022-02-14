
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; } ;
typedef enum pattern_set { ____Placeholder_pattern_set } pattern_set ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct analogix_dp_device *VAR_9,
          enum pattern_set VAR_10)
{
 u32 VAR_11;

 switch (VAR_10) {
 case 130:
  VAR_11 = VAR_5 | VAR_3;
  FUNC_0(VAR_11, VAR_9->reg_base + VAR_0);
  break;
 case 132:
  VAR_11 = VAR_5 | VAR_1;
  FUNC_0(VAR_11, VAR_9->reg_base + VAR_0);
  break;
 case 129:
  VAR_11 = VAR_4 | VAR_7;
  FUNC_0(VAR_11, VAR_9->reg_base + VAR_0);
  break;
 case 128:
  VAR_11 = VAR_4 | VAR_8;
  FUNC_0(VAR_11, VAR_9->reg_base + VAR_0);
  break;
 case 131:
  VAR_11 = VAR_5 |
   VAR_2 |
   VAR_6;
  FUNC_0(VAR_11, VAR_9->reg_base + VAR_0);
  break;
 default:
  break;
 }
}

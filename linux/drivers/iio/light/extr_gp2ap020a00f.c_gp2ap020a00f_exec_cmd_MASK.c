
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gp2ap020a00f_data {int flags; int cur_opmode; } ;
typedef enum gp2ap020a00f_cmd { ____Placeholder_gp2ap020a00f_cmd } gp2ap020a00f_cmd ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct gp2ap020a00f_data*) ;
 int FUNC_2 (struct gp2ap020a00f_data*,int ,int ) ;
 int FUNC_3 (struct gp2ap020a00f_data*) ;
 int FUNC_4 (struct gp2ap020a00f_data*,int ) ;
 int FUNC_5 (struct gp2ap020a00f_data*,int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct gp2ap020a00f_data *VAR_21,
     enum gp2ap020a00f_cmd VAR_22)
{
 int VAR_23 = 0;

 switch (VAR_22) {
 case 136:
  if (VAR_21->cur_opmode != VAR_15)
   return -VAR_0;
  VAR_23 = FUNC_4(VAR_21,
     VAR_12);
  break;
 case 135:
  if (VAR_21->cur_opmode != VAR_15)
   return -VAR_0;
  VAR_23 = FUNC_4(VAR_21,
     VAR_13);
  break;
 case 134:
  if (VAR_21->cur_opmode != VAR_15)
   return -VAR_0;
  VAR_23 = FUNC_4(VAR_21,
     VAR_14);
  break;
 case 132:
  if (VAR_21->cur_opmode == VAR_10)
   return -VAR_0;
  if (!FUNC_1(VAR_21))
   VAR_23 = FUNC_2(VAR_21,
      VAR_9,
      VAR_1);
  FUNC_6(VAR_2, &VAR_21->flags);
  break;
 case 133:
  FUNC_0(VAR_2, &VAR_21->flags);
  if (FUNC_1(VAR_21))
   break;
  VAR_23 = FUNC_2(VAR_21,
      VAR_9,
      VAR_16);
  break;
 case 130:
  if (VAR_21->cur_opmode == VAR_10)
   return -VAR_0;
  if (!FUNC_1(VAR_21))
   VAR_23 = FUNC_2(VAR_21,
      VAR_9,
      VAR_1);
  FUNC_6(VAR_4, &VAR_21->flags);
  break;
 case 131:
  FUNC_0(VAR_4, &VAR_21->flags);
  if (FUNC_1(VAR_21))
   break;
  VAR_23 = FUNC_2(VAR_21,
      VAR_9,
      VAR_16);
  break;
 case 128:
  if (VAR_21->cur_opmode == VAR_10)
   return -VAR_0;
  VAR_23 = FUNC_2(VAR_21,
      VAR_11,
      VAR_1);
  FUNC_6(VAR_8, &VAR_21->flags);
  break;
 case 129:
  FUNC_0(VAR_8, &VAR_21->flags);
  VAR_23 = FUNC_2(VAR_21,
      VAR_11,
      VAR_16);
  break;
 case 143:
  if (FUNC_7(VAR_5, &VAR_21->flags))
   return 0;
  if (VAR_21->cur_opmode == VAR_10)
   return -VAR_0;
  if (!FUNC_1(VAR_21)) {
   VAR_23 = FUNC_2(VAR_21,
      VAR_9,
      VAR_1);
   if (VAR_23 < 0)
    return VAR_23;
  }
  FUNC_6(VAR_5, &VAR_21->flags);
  VAR_23 = FUNC_5(VAR_21,
     VAR_19, 1);
  break;
 case 144:
  if (!FUNC_7(VAR_5, &VAR_21->flags))
   return 0;
  FUNC_0(VAR_5, &VAR_21->flags);
  if (!FUNC_1(VAR_21)) {
   VAR_23 = FUNC_2(VAR_21,
      VAR_9,
      VAR_16);
   if (VAR_23 < 0)
    return VAR_23;
  }
  VAR_23 = FUNC_5(VAR_21,
     VAR_19, 0);
  break;
 case 141:
  if (FUNC_7(VAR_3, &VAR_21->flags))
   return 0;
  if (VAR_21->cur_opmode == VAR_10)
   return -VAR_0;
  if (!FUNC_1(VAR_21)) {
   VAR_23 = FUNC_2(VAR_21,
      VAR_9,
      VAR_1);
   if (VAR_23 < 0)
    return VAR_23;
  }
  FUNC_6(VAR_3, &VAR_21->flags);
  VAR_23 = FUNC_5(VAR_21,
     VAR_20, 1);
  break;
 case 142:
  if (!FUNC_7(VAR_3, &VAR_21->flags))
   return 0;
  FUNC_0(VAR_3, &VAR_21->flags);
  if (!FUNC_1(VAR_21)) {
   VAR_23 = FUNC_2(VAR_21,
      VAR_9,
      VAR_16);
   if (VAR_23 < 0)
    return VAR_23;
  }
  VAR_23 = FUNC_5(VAR_21,
     VAR_20, 0);
  break;
 case 139:
  if (FUNC_7(VAR_7, &VAR_21->flags))
   return 0;
  if (FUNC_1(VAR_21) ||
      VAR_21->cur_opmode == VAR_11)
   return -VAR_0;
  if (!FUNC_3(VAR_21)) {
   VAR_23 = FUNC_4(VAR_21,
     VAR_10);
   if (VAR_23 < 0)
    return VAR_23;
  }
  FUNC_6(VAR_7, &VAR_21->flags);
  VAR_23 = FUNC_5(VAR_21,
     VAR_17, 1);
  break;
 case 140:
  if (!FUNC_7(VAR_7, &VAR_21->flags))
   return 0;
  FUNC_0(VAR_7, &VAR_21->flags);
  VAR_23 = FUNC_4(VAR_21,
     VAR_15);
  if (VAR_23 < 0)
   return VAR_23;
  VAR_23 = FUNC_5(VAR_21,
     VAR_17, 0);
  break;
 case 137:
  if (FUNC_7(VAR_6, &VAR_21->flags))
   return 0;
  if (FUNC_1(VAR_21) ||
      VAR_21->cur_opmode == VAR_11)
   return -VAR_0;
  if (!FUNC_3(VAR_21)) {
   VAR_23 = FUNC_4(VAR_21,
     VAR_10);
   if (VAR_23 < 0)
    return VAR_23;
  }
  FUNC_6(VAR_6, &VAR_21->flags);
  VAR_23 = FUNC_5(VAR_21,
     VAR_18, 1);
  break;
 case 138:
  if (!FUNC_7(VAR_6, &VAR_21->flags))
   return 0;
  FUNC_0(VAR_6, &VAR_21->flags);
  VAR_23 = FUNC_4(VAR_21,
     VAR_15);
  if (VAR_23 < 0)
   return VAR_23;
  VAR_23 = FUNC_5(VAR_21,
     VAR_18, 0);
  break;
 }

 return VAR_23;
}

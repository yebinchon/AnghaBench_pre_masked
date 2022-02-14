
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83627hf_data {int type; int vid; int vrm_ovt; int* sens; } ;
struct platform_device {int dev; } ;
typedef enum chips { ____Placeholder_chips } chips ;


 int* VAR_0 ;
 int* VAR_1 ;
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
 int FUNC_0 (int *,char*) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 struct w83627hf_data* FUNC_1 (struct platform_device*) ;
 int VAR_15 ;
 int FUNC_2 (struct w83627hf_data*,int ) ;
 int FUNC_3 (struct w83627hf_data*,int ,int) ;
 int VAR_16 ;
 int FUNC_4 (struct platform_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct platform_device*) ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_20)
{
 struct w83627hf_data *VAR_21 = FUNC_1(VAR_20);
 int VAR_22;
 enum chips VAR_23 = VAR_21->type;
 u8 VAR_24;




 if (VAR_23 == VAR_15) {
  FUNC_3(VAR_21, VAR_8, 0x89);
  FUNC_3(VAR_21, VAR_7, VAR_13);
 }


 if (VAR_23 == VAR_15 || VAR_23 == VAR_17) {
  int VAR_25 = FUNC_2(VAR_21, VAR_12);
  int VAR_26 = FUNC_2(VAR_21, VAR_5);
  VAR_21->vid = (VAR_25 & 0x0f) | ((VAR_26 & 0x01) << 4);
 } else if (VAR_23 == VAR_16) {
  VAR_21->vid = FUNC_4(VAR_20);
 } else if (VAR_23 == VAR_18) {
  VAR_21->vid = FUNC_5(VAR_20);
 }


 if (VAR_23 == VAR_16 || VAR_23 == VAR_17 || VAR_23 == VAR_18) {
  VAR_21->vrm_ovt =
   FUNC_2(VAR_21, VAR_4);
 }

 VAR_24 = FUNC_2(VAR_21, VAR_9);
 for (VAR_22 = 1; VAR_22 <= 3; VAR_22++) {
  if (!(VAR_24 & VAR_0[VAR_22 - 1])) {
   VAR_21->sens[VAR_22 - 1] = 4;
  } else {
   if (FUNC_2
       (VAR_21,
        VAR_10) & VAR_1[VAR_22 - 1])
    VAR_21->sens[VAR_22 - 1] = 1;
   else
    VAR_21->sens[VAR_22 - 1] = 2;
  }
  if ((VAR_23 == VAR_19) && (VAR_22 == 2))
   break;
 }

 if(VAR_14) {

  VAR_24 = FUNC_2(VAR_21, VAR_2);
  if (VAR_24 & 0x01) {
   FUNC_0(&VAR_20->dev, "Enabling temp2, readings "
     "might not make sense\n");
   FUNC_3(VAR_21, VAR_2,
    VAR_24 & 0xfe);
  }


  if (VAR_23 != VAR_19) {
   VAR_24 = FUNC_2(VAR_21,
    VAR_3);
   if (VAR_24 & 0x01) {
    FUNC_0(&VAR_20->dev, "Enabling temp3, "
      "readings might not make sense\n");
    FUNC_3(VAR_21,
     VAR_3, VAR_24 & 0xfe);
   }
  }
 }


 FUNC_3(VAR_21, VAR_6,
       (FUNC_2(VAR_21,
      VAR_6) & 0xf7)
       | 0x01);


 VAR_24 = FUNC_2(VAR_21, VAR_11);
 if (!(VAR_24 & 0x01))
  FUNC_3(VAR_21, VAR_11, VAR_24 | 0x01);
}

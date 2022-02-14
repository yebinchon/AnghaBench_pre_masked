
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mxl {TYPE_1__* base; int i2cdev; } ;
struct MXL_HYDRA_SKU_COMMAND_T {int sku_type; } ;
struct TYPE_2__ {scalar_t__ type; int sku_type; } ;


 int FUNC_0 (int ,int ,int,struct MXL_HYDRA_SKU_COMMAND_T*,int*) ;
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
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct mxl*,int*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mxl*,int*,int ) ;
 int FUNC_4 (struct mxl*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mxl*,int ,int *) ;
 int FUNC_7 (struct mxl*,int,int*) ;
 int FUNC_8 (struct mxl*,int,int ,int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct mxl*,int,int) ;

__attribute__((used)) static int FUNC_11(struct mxl *VAR_14, u8 *VAR_15, u32 VAR_16)
{
 int VAR_17;
 u32 VAR_18 = 0;
 struct MXL_HYDRA_SKU_COMMAND_T VAR_19;
 u8 VAR_20 = sizeof(struct MXL_HYDRA_SKU_COMMAND_T);
 u8 VAR_21[sizeof(struct MXL_HYDRA_SKU_COMMAND_T) + 6];

 if (FUNC_1(VAR_14, VAR_15, VAR_16))
  return -1;


 VAR_17 = FUNC_8(VAR_14, 0x8003003C, 0, 1, 0);
 if (VAR_17)
  return VAR_17;
 FUNC_9(1000, 2000);


 VAR_17 = FUNC_10(VAR_14, VAR_6,
    VAR_5);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_10(VAR_14, VAR_4,
    VAR_3);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_10(VAR_14, VAR_8,
    VAR_7);
 if (VAR_17)
  return VAR_17;




 VAR_17 = FUNC_10(VAR_14, VAR_1,
    VAR_0);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_6(VAR_14, VAR_2, &VAR_18);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_3(VAR_14, VAR_15, VAR_16);
 if (VAR_17)
  return VAR_17;

 if (VAR_14->base->type == VAR_11) {
  FUNC_9(10000, 11000);


  VAR_17 = FUNC_10(VAR_14, 0x90720000, 1);
  if (VAR_17)
   return VAR_17;
  FUNC_5(500);


  VAR_17 = FUNC_10(VAR_14, 0x9076B510, 1);
  if (VAR_17)
   return VAR_17;
 } else {

  VAR_17 = FUNC_8(VAR_14, 0x8003003C, 0, 1, 1);
  if (VAR_17)
   return VAR_17;

  FUNC_5(150);
 }


 VAR_17 = FUNC_10(VAR_14, VAR_13, 0x76543210);
 if (VAR_17)
  return VAR_17;

 if (!FUNC_4(VAR_14))
  return -1;

 FUNC_2(VAR_14->i2cdev, "Hydra FW alive. Hail!\n");




 FUNC_5(50);

 VAR_19.sku_type = VAR_14->base->sku_type;
 FUNC_0(VAR_12, VAR_9,
   VAR_20, &VAR_19, VAR_21);
 VAR_17 = FUNC_7(VAR_14, VAR_20 + VAR_10,
         &VAR_21[0]);

 return VAR_17;
}

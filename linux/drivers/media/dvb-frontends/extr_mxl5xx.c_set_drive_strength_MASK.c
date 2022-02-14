
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxl {int i2cdev; } ;
typedef enum MXL_HYDRA_TS_DRIVE_STRENGTH_E { ____Placeholder_MXL_HYDRA_TS_DRIVE_STRENGTH_E } MXL_HYDRA_TS_DRIVE_STRENGTH_E ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mxl*,int,int*) ;
 int FUNC_2 (struct mxl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct mxl *VAR_0,
  enum MXL_HYDRA_TS_DRIVE_STRENGTH_E VAR_1)
{
 int VAR_2 = 0;
 u32 VAR_3;

 FUNC_1(VAR_0, 0x90000194, &VAR_3);
 FUNC_0(VAR_0->i2cdev, "DIGIO = %08x\n", VAR_3);
 FUNC_0(VAR_0->i2cdev, "set drive_strength = %u\n", VAR_1);


 VAR_2 |= FUNC_2(VAR_0, 0x90000194, 0, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x90000194, 20, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x90000194, 24, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x90000198, 12, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x90000198, 16, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x90000198, 20, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x90000198, 24, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x9000019C, 0, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x9000019C, 4, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x9000019C, 8, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x9000019C, 24, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x9000019C, 28, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x900001A0, 0, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x900001A0, 4, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x900001A0, 20, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x900001A0, 24, 3, VAR_1);
 VAR_2 |= FUNC_2(VAR_0, 0x900001A0, 28, 3, VAR_1);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mxl {int i2cdev; } ;
struct MXL_HYDRA_TUNER_CMD {int tuner_id; int enable; } ;
typedef int ctrl_tuner_cmd ;


 int FUNC_0 (int ,int ,int,struct MXL_HYDRA_TUNER_CMD*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mxl*,int ,int*) ;
 int FUNC_4 (struct mxl*,int,int*) ;

__attribute__((used)) static int FUNC_5(struct mxl *VAR_5, u32 VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;
 struct MXL_HYDRA_TUNER_CMD VAR_9;
 u8 VAR_10 = sizeof(VAR_9);
 u8 VAR_11[VAR_3];
 u32 VAR_12, VAR_13 = 10;

 VAR_9.tuner_id = VAR_6;
 VAR_9.enable = VAR_7;
 FUNC_0(VAR_4, VAR_1,
   VAR_10, &VAR_9, VAR_11);
 VAR_8 = FUNC_4(VAR_5, VAR_10 + VAR_2,
       &VAR_11[0]);
 if (VAR_8)
  return VAR_8;
 FUNC_3(VAR_5, VAR_0, &VAR_12);
 while (--VAR_13 && ((VAR_12 >> VAR_6) & 1) != VAR_7) {
  FUNC_2(20);
  FUNC_3(VAR_5, VAR_0, &VAR_12);
 }
 if (!VAR_13)
  return -1;
 FUNC_3(VAR_5, VAR_0, &VAR_12);
 FUNC_1(VAR_5->i2cdev, "tuner %u ready = %u\n",
  VAR_6, (VAR_12 >> VAR_6) & 1);

 return 0;
}

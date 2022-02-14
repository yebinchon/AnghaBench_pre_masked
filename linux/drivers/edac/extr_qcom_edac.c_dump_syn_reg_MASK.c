
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct llcc_drv_data {int dummy; } ;
struct edac_device_ctl_info {struct llcc_drv_data* pvt_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct llcc_drv_data*,int ,int) ;
 int FUNC_1 (struct edac_device_ctl_info*,int ,int ,char*) ;
 int FUNC_2 (struct edac_device_ctl_info*,int ,int ,char*) ;
 int FUNC_3 (int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct edac_device_ctl_info *VAR_3, int VAR_4, u32 VAR_5)
{
 struct llcc_drv_data *VAR_6 = VAR_3->pvt_info;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_4);
 if (VAR_7)
  return VAR_7;

 switch (VAR_4) {
 case 131:
  FUNC_1(VAR_3, 0, VAR_5,
          "LLCC Data RAM correctable Error");
  break;
 case 130:
  FUNC_2(VAR_3, 0, VAR_5,
          "LLCC Data RAM uncorrectable Error");
  break;
 case 129:
  FUNC_1(VAR_3, 0, VAR_5,
          "LLCC Tag RAM correctable Error");
  break;
 case 128:
  FUNC_2(VAR_3, 0, VAR_5,
          "LLCC Tag RAM uncorrectable Error");
  break;
 default:
  VAR_7 = -VAR_1;
  FUNC_3(VAR_2, VAR_0, "Unexpected error type: %d\n",
       VAR_4);
 }

 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_adapter {int dummy; } ;
typedef enum drm_lspcon_mode { ____Placeholder_drm_lspcon_mode } drm_lspcon_mode ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct i2c_adapter*,int ,int *,int) ;
 int FUNC_3 (struct i2c_adapter*,int*) ;
 int FUNC_4 (int) ;

int FUNC_5(struct i2c_adapter *VAR_5,
   enum drm_lspcon_mode VAR_6)
{
 u8 VAR_7 = 0;
 int VAR_8;
 int VAR_9 = 200;
 enum drm_lspcon_mode VAR_10;

 if (VAR_6 == VAR_3)
  VAR_7 = VAR_1;


 VAR_8 = FUNC_2(VAR_5, VAR_0,
         &VAR_7, sizeof(VAR_7));
 if (VAR_8 < 0) {
  FUNC_1("LSPCON mode change failed\n");
  return VAR_8;
 }






 do {
  VAR_8 = FUNC_3(VAR_5, &VAR_10);
  if (VAR_8) {
   FUNC_1("can't confirm LSPCON mode change\n");
   return VAR_8;
  } else {
   if (VAR_10 != VAR_6) {
    FUNC_4(10);
    VAR_9 -= 10;
   } else {
    FUNC_0("LSPCON mode changed to %s\n",
      VAR_6 == VAR_2 ?
      "LS" : "PCON");
    return 0;
   }
  }
 } while (VAR_9);

 FUNC_1("LSPCON mode change timed out\n");
 return -VAR_4;
}

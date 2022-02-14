
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
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct i2c_adapter*,int ,int*,int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct i2c_adapter *VAR_6,
   enum drm_lspcon_mode *VAR_7)
{
 u8 VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 if (!VAR_7) {
  FUNC_1("NULL input\n");
  return -VAR_5;
 }


 for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {
  if (VAR_10)
   FUNC_3(500, 1000);

  VAR_9 = FUNC_2(VAR_6,
         VAR_0,
         &VAR_8, sizeof(VAR_8));
  if (!VAR_9)
   break;
 }

 if (VAR_9 < 0) {
  FUNC_0("LSPCON read(0x80, 0x41) failed\n");
  return -VAR_4;
 }

 if (VAR_8 & VAR_1)
  *VAR_7 = VAR_3;
 else
  *VAR_7 = VAR_2;
 return 0;
}

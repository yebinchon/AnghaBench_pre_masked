
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cdn_dp_device {int dev; } ;
typedef int msg ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cdn_dp_device*) ;
 int FUNC_2 (struct cdn_dp_device*,int) ;

int FUNC_3(struct cdn_dp_device *VAR_4, bool VAR_5)
{
 u8 VAR_6[5];
 int VAR_7, VAR_8;

 VAR_6[0] = VAR_2;
 VAR_6[1] = VAR_3;
 VAR_6[2] = 0;
 VAR_6[3] = 1;
 VAR_6[4] = VAR_5 ? VAR_0 : VAR_1;

 for (VAR_8 = 0; VAR_8 < sizeof(VAR_6); VAR_8++) {
  VAR_7 = FUNC_2(VAR_4, VAR_6[VAR_8]);
  if (VAR_7)
   goto err_set_firmware_active;
 }


 for (VAR_8 = 0; VAR_8 < sizeof(VAR_6); VAR_8++) {
  VAR_7 = FUNC_1(VAR_4);
  if (VAR_7 < 0)
   goto err_set_firmware_active;

  VAR_6[VAR_8] = VAR_7;
 }

 VAR_7 = 0;

err_set_firmware_active:
 if (VAR_7 < 0)
  FUNC_0(VAR_4->dev, "set firmware active failed\n");
 return VAR_7;
}

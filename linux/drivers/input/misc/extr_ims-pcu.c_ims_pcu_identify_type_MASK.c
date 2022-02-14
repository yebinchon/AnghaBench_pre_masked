
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ims_pcu {int dev; int * cmd_buf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ims_pcu*,int ) ;

__attribute__((used)) static int FUNC_3(struct ims_pcu *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (VAR_4) {
  FUNC_1(VAR_2->dev,
   "GET_DEVICE_ID command failed, error: %d\n", VAR_4);
  return VAR_4;
 }

 *VAR_3 = VAR_2->cmd_buf[VAR_1];
 FUNC_0(VAR_2->dev, "Detected device ID: %d\n", *VAR_3);

 return 0;
}

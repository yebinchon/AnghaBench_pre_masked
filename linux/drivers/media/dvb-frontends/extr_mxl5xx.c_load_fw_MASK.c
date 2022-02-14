
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl5xx_cfg {int fw_len; int fw_priv; int (* fw_read ) (int ,int *,int) ;int * fw; } ;
struct mxl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl*,int *,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mxl *VAR_1, struct mxl5xx_cfg *VAR_2)
{
 int VAR_3 = 0;
 u8 *VAR_4;

 if (VAR_2->fw)
  return FUNC_0(VAR_1, VAR_2->fw, VAR_2->fw_len);

 if (!VAR_2->fw_read)
  return -1;

 VAR_4 = FUNC_3(0x40000);
 if (!VAR_4)
  return -VAR_0;

 VAR_2->fw_read(VAR_2->fw_priv, VAR_4, 0x40000);
 VAR_3 = FUNC_0(VAR_1, VAR_4, 0x40000);
 FUNC_2(VAR_4);

 return VAR_3;
}

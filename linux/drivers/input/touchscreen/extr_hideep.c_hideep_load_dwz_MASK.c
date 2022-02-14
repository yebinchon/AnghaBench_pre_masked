
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int release_ver; int product_code; } ;
struct hideep_ts {int fw_size; int nvm_mask; TYPE_2__ dwz_info; TYPE_1__* client; } ;
typedef int __be32 ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct hideep_ts*) ;
 int FUNC_5 (struct hideep_ts*,int ,void*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct hideep_ts *VAR_2)
{
 u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_6(50);

 VAR_4 = FUNC_5(VAR_2, VAR_1,
     (void *)&VAR_2->dwz_info,
     sizeof(VAR_2->dwz_info) / sizeof(__be32));

 FUNC_0(10);
 FUNC_6(50);

 if (VAR_4) {
  FUNC_3(&VAR_2->client->dev,
   "failed to fetch DWZ data: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_3 = FUNC_1(VAR_2->dwz_info.product_code);

 switch (VAR_3 & 0xF0) {
 case 0x40:
  FUNC_2(&VAR_2->client->dev, "used crimson IC");
  VAR_2->fw_size = 1024 * 48;
  VAR_2->nvm_mask = 0x00310000;
  break;
 case 0x60:
  FUNC_2(&VAR_2->client->dev, "used lime IC");
  VAR_2->fw_size = 1024 * 64;
  VAR_2->nvm_mask = 0x0030027B;
  break;
 default:
  FUNC_3(&VAR_2->client->dev, "product code is wrong: %#04x",
   VAR_3);
  return -VAR_0;
 }

 FUNC_2(&VAR_2->client->dev, "firmware release version: %#04x",
  FUNC_1(VAR_2->dwz_info.release_ver));

 return 0;
}

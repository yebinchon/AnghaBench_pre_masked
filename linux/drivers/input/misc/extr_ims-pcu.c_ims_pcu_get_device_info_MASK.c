
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu {int* cmd_buf; int reset_reason; int bl_version; int fw_version; int serial_number; int date_of_manufacturing; int part_number; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ims_pcu*,int ) ;
 int FUNC_3 (struct ims_pcu*) ;
 int FUNC_4 (int ,int,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct ims_pcu *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_1);
 if (VAR_5) {
  FUNC_1(VAR_4->dev,
   "GET_FW_VERSION command failed, error: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_4(VAR_4->fw_version, sizeof(VAR_4->fw_version),
   "%02d%02d%02d%02d.%c%c",
   VAR_4->cmd_buf[2], VAR_4->cmd_buf[3], VAR_4->cmd_buf[4], VAR_4->cmd_buf[5],
   VAR_4->cmd_buf[6], VAR_4->cmd_buf[7]);

 VAR_5 = FUNC_2(VAR_4, VAR_0);
 if (VAR_5) {
  FUNC_1(VAR_4->dev,
   "GET_BL_VERSION command failed, error: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_4(VAR_4->bl_version, sizeof(VAR_4->bl_version),
   "%02d%02d%02d%02d.%c%c",
   VAR_4->cmd_buf[2], VAR_4->cmd_buf[3], VAR_4->cmd_buf[4], VAR_4->cmd_buf[5],
   VAR_4->cmd_buf[6], VAR_4->cmd_buf[7]);

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_4->dev,
   "RESET_REASON command failed, error: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_4(VAR_4->reset_reason, sizeof(VAR_4->reset_reason),
   "%02x", VAR_4->cmd_buf[VAR_2]);

 FUNC_0(VAR_4->dev,
  "P/N: %s, MD: %s, S/N: %s, FW: %s, BL: %s, RR: %s\n",
  VAR_4->part_number,
  VAR_4->date_of_manufacturing,
  VAR_4->serial_number,
  VAR_4->fw_version,
  VAR_4->bl_version,
  VAR_4->reset_reason);

 return 0;
}

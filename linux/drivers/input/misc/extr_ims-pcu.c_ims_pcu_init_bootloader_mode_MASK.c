
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ims_pcu {int async_firmware_done; int dev; void* fw_end_addr; void* fw_start_addr; int * cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,void*,void*) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (struct ims_pcu*,int ,int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,int,int ,int ,int ,struct ims_pcu*,int ) ;

__attribute__((used)) static int FUNC_6(struct ims_pcu *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_4(VAR_7, VAR_4, ((void*)0), 0,
        VAR_1);
 if (VAR_8) {
  FUNC_1(VAR_7->dev, "Bootloader does not respond, aborting\n");
  return VAR_8;
 }

 VAR_7->fw_start_addr =
  FUNC_3(&VAR_7->cmd_buf[VAR_2 + 11]);
 VAR_7->fw_end_addr =
  FUNC_3(&VAR_7->cmd_buf[VAR_2 + 15]);

 FUNC_2(VAR_7->dev,
   "Device is in bootloader mode (addr 0x%08x-0x%08x), requesting firmware\n",
   VAR_7->fw_start_addr, VAR_7->fw_end_addr);

 VAR_8 = FUNC_5(VAR_5, 1,
     VAR_3,
     VAR_7->dev, VAR_0, VAR_7,
     VAR_6);
 if (VAR_8) {

  FUNC_0(&VAR_7->async_firmware_done);
 }

 return 0;
}

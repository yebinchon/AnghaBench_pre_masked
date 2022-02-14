
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ims_pcu_flash_fmt {int data; scalar_t__ len; int addr; } ;
struct ims_pcu {int fw_start_addr; int fw_end_addr; unsigned int update_firmware_status; int dev; int * cmd_buf; } ;
struct ihex_binrec {int data; int len; int addr; } ;
struct firmware {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,...) ;
 struct ihex_binrec* FUNC_3 (struct ihex_binrec const*) ;
 int FUNC_4 (struct ims_pcu*,int ,int *,scalar_t__,int) ;
 int FUNC_5 (struct ims_pcu*,int,scalar_t__,int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static int FUNC_8(struct ims_pcu *VAR_4,
      const struct firmware *VAR_5,
      unsigned int VAR_6)
{
 const struct ihex_binrec *VAR_7 = (const struct ihex_binrec *)VAR_5->data;
 struct ims_pcu_flash_fmt *VAR_8;
 unsigned int VAR_9 = 0;
 u32 VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_4, VAR_0, ((void*)0), 0, 2000);
 if (VAR_12) {
  FUNC_2(VAR_4->dev,
   "Failed to erase application image, error: %d\n",
   VAR_12);
  return VAR_12;
 }

 while (VAR_7) {






  VAR_10 = FUNC_1(VAR_7->addr) / 2;
  VAR_11 = FUNC_0(VAR_7->len);

  VAR_8 = (void *)&VAR_4->cmd_buf[1];
  FUNC_7(VAR_10, &VAR_8->addr);
  VAR_8->len = VAR_11;
  FUNC_6(VAR_8->data, VAR_7->data, VAR_11);

  VAR_12 = FUNC_4(VAR_4, VAR_3,
      ((void*)0), VAR_11 + 5,
      VAR_1);
  if (VAR_12) {
   FUNC_2(VAR_4->dev,
    "Failed to write block at 0x%08x, len %d, error: %d\n",
    VAR_10, VAR_11, VAR_12);
   return VAR_12;
  }

  if (VAR_10 >= VAR_4->fw_start_addr && VAR_10 < VAR_4->fw_end_addr) {
   VAR_12 = FUNC_5(VAR_4, VAR_10, VAR_11, VAR_7->data);
   if (VAR_12)
    return VAR_12;
  }

  VAR_9++;
  VAR_4->update_firmware_status = (VAR_9 * 100) / VAR_6;

  VAR_7 = FUNC_3(VAR_7);
 }

 VAR_12 = FUNC_4(VAR_4, VAR_2,
         ((void*)0), 0, 2000);
 if (VAR_12)
  FUNC_2(VAR_4->dev,
   "Failed to send PROGRAM_COMPLETE, error: %d\n",
   VAR_12);

 return 0;
}

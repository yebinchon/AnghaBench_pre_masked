
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int ucode_array_offset_bytes; int ucode_size_bytes; } ;
struct smc_firmware_header_v1_0 {TYPE_2__ header; int ucode_start_addr; } ;
struct radeon_device {int family; int smc_idx_lock; TYPE_1__* smc_fw; scalar_t__ new_fw; } ;
struct TYPE_3__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;


 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct radeon_device *VAR_9, u32 VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 const u8 *VAR_14;
 u32 VAR_15;

 if (!VAR_9->smc_fw)
  return -VAR_3;

 if (VAR_9->new_fw) {
  const struct smc_firmware_header_v1_0 *VAR_16 =
   (const struct smc_firmware_header_v1_0 *)VAR_9->smc_fw->data;

  FUNC_5(&VAR_16->header);

  VAR_12 = FUNC_4(VAR_16->ucode_start_addr);
  VAR_13 = FUNC_4(VAR_16->header.ucode_size_bytes);
  VAR_14 = (const u8 *)
   (VAR_9->smc_fw->data + FUNC_4(VAR_16->header.ucode_array_offset_bytes));
 } else {
  switch (VAR_9->family) {
  case 129:
   VAR_12 = VAR_2;
   VAR_13 = VAR_1;
   break;
  case 128:
   VAR_12 = VAR_5;
   VAR_13 = VAR_4;
   break;
  default:
   FUNC_1("unknown asic in smc ucode loader\n");
   FUNC_0();
  }

  VAR_14 = (const u8 *)VAR_9->smc_fw->data;
 }

 if (VAR_13 & 3)
  return -VAR_3;

 FUNC_6(&VAR_9->smc_idx_lock, VAR_11);
 FUNC_2(VAR_8, VAR_12);
 FUNC_3(VAR_6, VAR_0, ~VAR_0);
 while (VAR_13 >= 4) {

  VAR_15 = (VAR_14[0] << 24) | (VAR_14[1] << 16) | (VAR_14[2] << 8) | VAR_14[3];

  FUNC_2(VAR_7, VAR_15);

  VAR_14 += 4;
  VAR_13 -= 4;
 }
 FUNC_3(VAR_6, 0, ~VAR_0);
 FUNC_7(&VAR_9->smc_idx_lock, VAR_11);

 return 0;
}

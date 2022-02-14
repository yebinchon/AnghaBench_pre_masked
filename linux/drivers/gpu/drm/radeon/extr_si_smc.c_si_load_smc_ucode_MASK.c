
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
 int FUNC_0 () ;





 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct radeon_device *VAR_15, u32 VAR_16)
{
 unsigned long VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 const u8 *VAR_20;
 u32 VAR_21;

 if (!VAR_15->smc_fw)
  return -VAR_1;

 if (VAR_15->new_fw) {
  const struct smc_firmware_header_v1_0 *VAR_22 =
   (const struct smc_firmware_header_v1_0 *)VAR_15->smc_fw->data;

  FUNC_5(&VAR_22->header);

  VAR_18 = FUNC_4(VAR_22->ucode_start_addr);
  VAR_19 = FUNC_4(VAR_22->header.ucode_size_bytes);
  VAR_20 = (const u8 *)
   (VAR_15->smc_fw->data + FUNC_4(VAR_22->header.ucode_array_offset_bytes));
 } else {
  switch (VAR_15->family) {
  case 129:
   VAR_18 = VAR_12;
   VAR_19 = VAR_11;
   break;
  case 130:
   VAR_18 = VAR_7;
   VAR_19 = VAR_6;
   break;
  case 128:
   VAR_18 = VAR_14;
   VAR_19 = VAR_13;
   break;
  case 131:
   VAR_18 = VAR_5;
   VAR_19 = VAR_4;
   break;
  case 132:
   VAR_18 = VAR_3;
   VAR_19 = VAR_2;
   break;
  default:
   FUNC_1("unknown asic in smc ucode loader\n");
   FUNC_0();
  }
  VAR_20 = (const u8 *)VAR_15->smc_fw->data;
 }

 if (VAR_19 & 3)
  return -VAR_1;

 FUNC_6(&VAR_15->smc_idx_lock, VAR_17);
 FUNC_2(VAR_10, VAR_18);
 FUNC_3(VAR_8, VAR_0, ~VAR_0);
 while (VAR_19 >= 4) {

  VAR_21 = (VAR_20[0] << 24) | (VAR_20[1] << 16) | (VAR_20[2] << 8) | VAR_20[3];

  FUNC_2(VAR_9, VAR_21);

  VAR_20 += 4;
  VAR_19 -= 4;
 }
 FUNC_3(VAR_8, 0, ~VAR_0);
 FUNC_7(&VAR_15->smc_idx_lock, VAR_17);

 return 0;
}

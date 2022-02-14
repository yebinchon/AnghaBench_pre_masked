
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fw_header {int kernel_la; int kernel_ep; int unk5; scalar_t__* md5sum1; int ver_lo; int ver_mid; int ver_hi; int sver_lo; int sver_hi; int unk4; void* unk3; void* unk2; void* boot_len; void* boot_ofs; void* rootfs_len; void* rootfs_ofs; void* kernel_len; void* kernel_ofs; void* fw_length; void* hw_ver_add; void* hw_rev; void* hw_id; scalar_t__* fw_version; void* version; } ;
struct TYPE_8__ {int hw_id; int hw_rev; int hw_ver_add; int flags; } ;
struct TYPE_7__ {int file_size; } ;
struct TYPE_6__ {int fw_max_len; } ;
struct TYPE_5__ {int file_size; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int,scalar_t__*) ;
 int VAR_7 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (struct fw_header*,float,int) ;
 TYPE_1__ VAR_14 ;
 int VAR_15 ;
 unsigned int FUNC_6 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_7(char *VAR_19, int VAR_20)
{
 struct fw_header *VAR_21 = (struct fw_header *)VAR_19;
 unsigned VAR_22;

 FUNC_5(VAR_21, '\xff', sizeof(struct fw_header));

 VAR_21->version = FUNC_2(FUNC_0(VAR_7));
 VAR_22 = FUNC_6(VAR_18);
 if (VAR_22 > (sizeof(VAR_21->fw_version) - 1))
  VAR_22 = sizeof(VAR_21->fw_version) - 1;

 FUNC_4(VAR_21->fw_version, VAR_18, VAR_22);
 VAR_21->fw_version[VAR_22] = 0;

 VAR_21->hw_id = FUNC_2(VAR_1->hw_id);
 VAR_21->hw_rev = FUNC_2(VAR_1->hw_rev);
 VAR_21->hw_ver_add = FUNC_2(VAR_1->hw_ver_add);

 if (VAR_2.file_size == 0) {
  FUNC_4(VAR_21->md5sum1, VAR_13, sizeof(VAR_21->md5sum1));
  VAR_21->boot_ofs = FUNC_2(0);
  VAR_21->boot_len = FUNC_2(0);
 } else {
  FUNC_4(VAR_21->md5sum1, VAR_12, sizeof(VAR_21->md5sum1));
  VAR_21->boot_ofs = FUNC_2(VAR_15 + VAR_14.file_size);
  VAR_21->boot_len = FUNC_2(VAR_14.file_size);
 }

 VAR_21->kernel_la = FUNC_2(VAR_9);
 VAR_21->kernel_ep = FUNC_2(VAR_8);
 VAR_21->fw_length = FUNC_2(VAR_11->fw_max_len);
 VAR_21->kernel_ofs = FUNC_2(sizeof(struct fw_header));
 VAR_21->kernel_len = FUNC_2(VAR_10);
 if (!VAR_3) {
  VAR_21->rootfs_ofs = FUNC_2(VAR_15);
  VAR_21->rootfs_len = FUNC_2(VAR_14.file_size);
 }

 VAR_21->boot_ofs = FUNC_2(0);
 VAR_21->boot_len = FUNC_2(VAR_2.file_size);

 VAR_21->unk2 = FUNC_2(0);
 VAR_21->unk3 = FUNC_2(0xffffffff);
 VAR_21->unk4 = FUNC_3(0x55aa);
 VAR_21->unk5 = 0xa5;

 VAR_21->sver_hi = VAR_16;
 VAR_21->sver_lo = VAR_17;

 VAR_21->ver_hi = VAR_4;
 VAR_21->ver_mid = VAR_6;
 VAR_21->ver_lo = VAR_5;

 if (VAR_1->flags & VAR_0) {
  VAR_21->kernel_la = FUNC_0(VAR_21->kernel_la);
  VAR_21->kernel_ep = FUNC_0(VAR_21->kernel_ep);
 }

 FUNC_1(VAR_19, VAR_20, VAR_21->md5sum1);
}

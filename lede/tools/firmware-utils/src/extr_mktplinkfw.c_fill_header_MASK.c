
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fw_header {int md5sum1; void* kernel_ep; void* kernel_la; int region_str2; int region_str1; void* region_code; void* ver_lo; void* ver_mid; void* ver_hi; void* rootfs_ofs; void* rootfs_len; void* fw_length; void* kernel_len; void* kernel_ofs; void* hw_rev; void* hw_id; int fw_version; int vendor_name; void* version; } ;
struct TYPE_8__ {scalar_t__ file_size; } ;
struct TYPE_7__ {int fw_max_len; } ;
struct TYPE_6__ {int code; int* name; } ;
struct TYPE_5__ {int file_size; } ;


 TYPE_4__ VAR_0 ;
 void* FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_6 ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct fw_header*,int ,int) ;
 TYPE_2__* VAR_15 ;
 TYPE_1__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_6 (int ,int,char*,int,int,int,int) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_8(char *VAR_21, int VAR_22)
{
 struct fw_header *VAR_23 = (struct fw_header *)VAR_21;

 FUNC_5(VAR_23, 0, sizeof(struct fw_header));

 VAR_23->version = FUNC_2(VAR_6);
 FUNC_7(VAR_23->vendor_name, VAR_19, sizeof(VAR_23->vendor_name));
 FUNC_7(VAR_23->fw_version, VAR_20, sizeof(VAR_23->fw_version));
 VAR_23->hw_id = FUNC_2(VAR_7);
 VAR_23->hw_rev = FUNC_2(VAR_8);

 VAR_23->kernel_la = FUNC_2(VAR_10);
 VAR_23->kernel_ep = FUNC_2(VAR_9);
 VAR_23->kernel_ofs = FUNC_2(sizeof(struct fw_header));
 VAR_23->kernel_len = FUNC_2(VAR_11);

 if (!VAR_1) {
  if (VAR_0.file_size == 0)
   FUNC_4(VAR_23->md5sum1, VAR_14, sizeof(VAR_23->md5sum1));
  else
   FUNC_4(VAR_23->md5sum1, VAR_13, sizeof(VAR_23->md5sum1));

  VAR_23->fw_length = FUNC_2(VAR_12->fw_max_len);
  VAR_23->rootfs_ofs = FUNC_2(VAR_17);
  VAR_23->rootfs_len = FUNC_2(VAR_16.file_size);
 }

 if (VAR_1 && VAR_18) {
  VAR_23->rootfs_ofs = FUNC_2(sizeof(struct fw_header) + VAR_11);
 }

 VAR_23->ver_hi = FUNC_3(VAR_3);
 VAR_23->ver_mid = FUNC_3(VAR_5);
 VAR_23->ver_lo = FUNC_3(VAR_4);

 if (VAR_15) {
  VAR_23->region_code = FUNC_2(VAR_15->code);
  FUNC_6(
   VAR_23->region_str1, sizeof(VAR_23->region_str1), "00000000;%02X%02X%02X%02X;",
   VAR_15->name[0], VAR_15->name[1], VAR_15->name[2], VAR_15->name[3]
  );
  FUNC_6(
   VAR_23->region_str2, sizeof(VAR_23->region_str2), "%02X%02X%02X%02X",
   VAR_15->name[0], VAR_15->name[1], VAR_15->name[2], VAR_15->name[3]
  );
 }

 if (VAR_2) {
  VAR_23->kernel_la = FUNC_0(VAR_23->kernel_la);
  VAR_23->kernel_ep = FUNC_0(VAR_23->kernel_ep);
 }

 if (!VAR_1)
  FUNC_1(VAR_21, VAR_22, VAR_23->md5sum1);
}

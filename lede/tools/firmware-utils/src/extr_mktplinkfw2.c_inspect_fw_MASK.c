
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct fw_header {int kernel_la; int kernel_ep; int version; int boot_len; int unk2; int unk3; int unk4; int unk5; char* fw_version; int hw_id; int hw_rev; int hw_ver_add; int ver_hi; int ver_mid; int ver_lo; int sver_hi; int sver_lo; int kernel_ofs; int kernel_len; int rootfs_ofs; int rootfs_len; int boot_ofs; int fw_length; int * md5sum2; int * md5sum1; } ;
struct board_info {int flags; } ;
typedef int md5sum ;
struct TYPE_3__ {int file_size; char* file_name; } ;
typedef int FILE ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 struct board_info VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (char*,int,int *) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int *,char*) ;
 int FUNC_10 (char*,char*) ;
 TYPE_1__ VAR_6 ;
 char* FUNC_11 (int) ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (TYPE_1__*,char*) ;
 int FUNC_18 (char*,char*,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*) ;

__attribute__((used)) static int FUNC_21(void)
{
 char *VAR_9;
 struct fw_header *VAR_10;
 uint8_t VAR_11[VAR_2];
 struct board_info *VAR_12;
 int VAR_13 = VAR_0;

 VAR_9 = FUNC_11(VAR_6.file_size);
 if (!VAR_9) {
  FUNC_0("no memory for buffer!\n");
  goto out;
 }

 VAR_13 = FUNC_17(&VAR_6, VAR_9);
 if (VAR_13)
  goto out_free_buf;
 VAR_10 = (struct fw_header *)VAR_9;

 VAR_12 = &VAR_3;

 if (VAR_12->flags & VAR_1) {
  VAR_10->kernel_la = FUNC_1(VAR_10->kernel_la);
  VAR_10->kernel_ep = FUNC_1(VAR_10->kernel_ep);
 }

 FUNC_10("File name", VAR_6.file_name);
 FUNC_8("File size", VAR_6.file_size);

 switch(FUNC_1(FUNC_14(VAR_10->version))) {
 case 2:
 case 3:
  break;
 default:
  FUNC_0("file does not seem to have V2/V3 header!\n");
  goto out_free_buf;
 }

 FUNC_8("Version 2 Header size", sizeof(struct fw_header));

 FUNC_13(VAR_11, VAR_10->md5sum1, sizeof(VAR_11));
 if (FUNC_14(VAR_10->boot_len) == 0)
  FUNC_13(VAR_10->md5sum1, VAR_8, sizeof(VAR_11));
 else
  FUNC_13(VAR_10->md5sum1, VAR_7, sizeof(VAR_11));
 FUNC_6(VAR_9, VAR_6.file_size, VAR_10->md5sum1);

 if (FUNC_12(VAR_11, VAR_10->md5sum1, sizeof(VAR_11))) {
  FUNC_9("Header MD5Sum1", VAR_11, "(*ERROR*)");
  FUNC_9("          --> expected", VAR_10->md5sum1, "");
 } else {
  FUNC_9("Header MD5Sum1", VAR_11, "(ok)");
 }
 if (FUNC_14(VAR_10->unk2) != 0)
  FUNC_8("Unknown value 2", VAR_10->unk2);
 FUNC_9("Header MD5Sum2", VAR_10->md5sum2,
                    "(purpose yet unknown, unchecked here)");

 if (FUNC_14(VAR_10->unk3) != 0xffffffff)
  FUNC_8("Unknown value 3", VAR_10->unk3);

 if (FUNC_15(VAR_10->unk4) != 0x55aa)
  FUNC_8("Unknown value 4", VAR_10->unk4);

 if (VAR_10->unk5 != 0xa5)
  FUNC_8("Unknown value 5", VAR_10->unk5);

 FUNC_16("\n");

 FUNC_10("Firmware version", VAR_10->fw_version);
 FUNC_7("Hardware ID", FUNC_14(VAR_10->hw_id));
 FUNC_7("Hardware Revision",
   FUNC_14(VAR_10->hw_rev));
 FUNC_7("Additional HW Version",
   FUNC_14(VAR_10->hw_ver_add));

 FUNC_16("%-23s: %d.%d.%d-%d.%d\n", "Software version",
        VAR_10->ver_hi, VAR_10->ver_mid, VAR_10->ver_lo,
        VAR_10->sver_hi, VAR_10->sver_lo);

 FUNC_16("\n");

 FUNC_8("Kernel data offset",
                    FUNC_14(VAR_10->kernel_ofs));
 FUNC_8("Kernel data length",
                    FUNC_14(VAR_10->kernel_len));
 FUNC_7("Kernel load address",
   FUNC_14(VAR_10->kernel_la));
 FUNC_7("Kernel entry point",
   FUNC_14(VAR_10->kernel_ep));
 FUNC_8("Rootfs data offset",
      FUNC_14(VAR_10->rootfs_ofs));
 FUNC_8("Rootfs data length",
                    FUNC_14(VAR_10->rootfs_len));
 FUNC_8("Boot loader data offset",
                    FUNC_14(VAR_10->boot_ofs));
 FUNC_8("Boot loader data length",
                    FUNC_14(VAR_10->boot_len));
 FUNC_8("Total firmware length",
                    FUNC_14(VAR_10->fw_length));

 if (VAR_5) {
  FILE *VAR_14;
  char *VAR_15;

  FUNC_16("\n");

  VAR_15 = FUNC_11(FUNC_20(VAR_6.file_name) + 8);
  FUNC_18(VAR_15, "%s-kernel", VAR_6.file_name);
  FUNC_16("Extracting kernel to \"%s\"...\n", VAR_15);
  VAR_14 = FUNC_3(VAR_15, "w");
  if (VAR_14) {
   if (!FUNC_5(VAR_9 + FUNC_14(VAR_10->kernel_ofs),
               FUNC_14(VAR_10->kernel_len), 1, VAR_14)) {
    FUNC_0("error in fwrite(): %s", FUNC_19(VAR_4));
   }
   FUNC_2(VAR_14);
  } else {
   FUNC_0("error in fopen(): %s", FUNC_19(VAR_4));
  }
  FUNC_4(VAR_15);

  VAR_15 = FUNC_11(FUNC_20(VAR_6.file_name) + 8);
  FUNC_18(VAR_15, "%s-rootfs", VAR_6.file_name);
  FUNC_16("Extracting rootfs to \"%s\"...\n", VAR_15);
  VAR_14 = FUNC_3(VAR_15, "w");
  if (VAR_14) {
   if (!FUNC_5(VAR_9 + FUNC_14(VAR_10->rootfs_ofs),
               FUNC_14(VAR_10->rootfs_len), 1, VAR_14)) {
    FUNC_0("error in fwrite(): %s", FUNC_19(VAR_4));
   }
   FUNC_2(VAR_14);
  } else {
   FUNC_0("error in fopen(): %s", FUNC_19(VAR_4));
  }
  FUNC_4(VAR_15);
 }

 out_free_buf:
 FUNC_4(VAR_9);
 out:
 return VAR_13;
}

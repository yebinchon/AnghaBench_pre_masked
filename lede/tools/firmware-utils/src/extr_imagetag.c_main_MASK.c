
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct gengetopt_args_info {char* kernel_arg; char* rootfs_arg; char* output_arg; scalar_t__ pad_arg; int entry_arg; int load_addr_arg; int kernel_file_has_header_flag; int block_size_arg; int image_offset_arg; int flash_start_arg; scalar_t__ pad_given; int altinfo_arg; scalar_t__ altinfo_given; int info2_arg; scalar_t__ info2_given; int info1_arg; scalar_t__ info1_given; int rsa_signature_arg; scalar_t__ rsa_signature_given; int layoutver_arg; scalar_t__ layoutver_given; int signature2_arg; int signature_arg; int chipid_arg; int boardid_arg; int tag_version_arg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,char**,struct gengetopt_args_info*) ;
 int FUNC_3 (char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *,int) ;
 int FUNC_6 (char*,char*,char*,struct gengetopt_args_info*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_7(int VAR_11, char **VAR_12)
{
    int VAR_13, VAR_14;
 char *VAR_15, *VAR_16, *VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 VAR_18 = VAR_19 = VAR_20 = VAR_21 = VAR_22 = 0;
 struct gengetopt_args_info VAR_23;

 VAR_15 = VAR_16 = VAR_17 = ((void*)0);

 if (FUNC_2(VAR_11, VAR_12, &VAR_23)) {
   FUNC_0(1);
 }

 FUNC_3("Broadcom 63xx image tagger - v2.0.0\n");
 FUNC_3("Copyright (C) 2008 Axel Gembe\n");
 FUNC_3("Copyright (C) 2009-2010 Daniel Dickinson\n");
 FUNC_3("Licensed under the terms of the Gnu General Public License\n");

 VAR_15 = VAR_23.kernel_arg;
 VAR_16 = VAR_23.rootfs_arg;
 VAR_17 = VAR_23.output_arg;
 if (FUNC_4(VAR_23.tag_version_arg) >= VAR_9) {
   FUNC_1(VAR_10, "Error: Tag Version (tag_version,v) too long.\n");
   FUNC_0(1);
 }
 if (FUNC_4(VAR_23.boardid_arg) >= VAR_1) {
   FUNC_1(VAR_10, "Error: Board ID (boardid,b) too long.\n");
   FUNC_0(1);
 }
 if (FUNC_4(VAR_23.chipid_arg) >= VAR_2) {
   FUNC_1(VAR_10, "Error: Chip ID (chipid,c) too long.\n");
   FUNC_0(1);
 }
 if (FUNC_4(VAR_23.signature_arg) >= VAR_5) {
   FUNC_1(VAR_10, "Error: Magic string (signature,a) too long.\n");
   FUNC_0(1);
 }
 if (FUNC_4(VAR_23.signature2_arg) >= VAR_6) {
   FUNC_1(VAR_10, "Error: Second magic string (signature2,m) too long.\n");
   FUNC_0(1);
 }
 if (VAR_23.layoutver_given) {
   if (FUNC_4(VAR_23.layoutver_arg) > VAR_3) {
  FUNC_1(VAR_10, "Error: Flash layout version (layoutver,y) too long.\n");
  FUNC_0(1);
   }
 }
 if (VAR_23.rsa_signature_given) {
   if (FUNC_4(VAR_23.rsa_signature_arg) > VAR_4) {
  FUNC_1(VAR_10, "Error: RSA Signature (rsa_signature,r) too long.\n");
  FUNC_0(1);
   }
 }

 if (VAR_23.info1_given) {
   if (FUNC_4(VAR_23.info1_arg) >= VAR_7) {
  FUNC_1(VAR_10, "Error: Vendor Information 1 (info1) too long.\n");
  FUNC_0(1);
   }
 }

 if (VAR_23.info2_given) {
   if (FUNC_4(VAR_23.info2_arg) >= VAR_8) {
  FUNC_1(VAR_10, "Error: Vendor Information 2 (info2) too long.\n");
  FUNC_0(1);
   }
 }

 if (VAR_23.altinfo_given) {
   if (FUNC_4(VAR_23.altinfo_arg) >= VAR_0) {
  FUNC_1(VAR_10, "Error: Vendor Information 1 (info1) too long.\n");
  FUNC_0(1);
   }
 }

 if (VAR_23.pad_given) {
   if (VAR_23.pad_arg < 0) {
  FUNC_1(VAR_10, "Error: pad size must be positive.\r");
  FUNC_0(1);
   }
 }

 VAR_18 = FUNC_5(VAR_23.flash_start_arg, ((void*)0), 16);
 VAR_19 = FUNC_5(VAR_23.image_offset_arg, ((void*)0), 16);
 VAR_20 = FUNC_5(VAR_23.block_size_arg, ((void*)0), 16);

 if (!VAR_23.kernel_file_has_header_flag) {
   VAR_21 = FUNC_5(VAR_23.load_addr_arg, ((void*)0), 16);
   VAR_22 = FUNC_5(VAR_23.entry_arg, ((void*)0), 16);
   if (VAR_21 == 0) {
  FUNC_1(VAR_10, "Error: Invalid value for load address\n");
   }
   if (VAR_22 == 0) {
  FUNC_1(VAR_10, "Error: Invalid value for entry\n");
   }
 }

 return FUNC_6(VAR_15, VAR_16, VAR_17, &VAR_23, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);
}

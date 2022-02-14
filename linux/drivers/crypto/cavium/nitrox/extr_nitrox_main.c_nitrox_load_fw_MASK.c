
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ucd_core_eid_ucode_block_num {unsigned long long value; int ucode_len; scalar_t__ ucode_blk; } ;
union aqm_grp_execmsk_lo {int exec_0_to_39; unsigned long long value; } ;
union aqm_grp_execmsk_hi {int exec_40_to_79; unsigned long long value; } ;
typedef int u64 ;
typedef int u32 ;
struct ucode {int version; int * code; int code_size; } ;
struct TYPE_2__ {char** fw_name; int se_cores; int ae_cores; } ;
struct nitrox_device {TYPE_1__ hw; } ;
struct firmware {scalar_t__ data; } ;


 char* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct nitrox_device*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 char* VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,char*,char const*) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (struct nitrox_device*,int ,unsigned long long) ;
 int FUNC_11 (struct firmware const*) ;
 int FUNC_12 (struct firmware const**,char const*,int ) ;
 int FUNC_13 (struct nitrox_device*,int,int *,int) ;

__attribute__((used)) static int FUNC_14(struct nitrox_device *VAR_8)
{
 const struct firmware *VAR_9;
 const char *VAR_10;
 struct ucode *VAR_11;
 u64 *VAR_12;
 u64 VAR_13;
 union ucd_core_eid_ucode_block_num VAR_14;
 union aqm_grp_execmsk_lo VAR_15;
 union aqm_grp_execmsk_hi VAR_16;
 u32 VAR_17;
 int VAR_18, VAR_19 = 0;

 VAR_10 = VAR_6;
 FUNC_8(FUNC_2(VAR_8), "Loading firmware \"%s\"\n", VAR_10);

 VAR_18 = FUNC_12(&VAR_9, VAR_10, FUNC_2(VAR_8));
 if (VAR_18 < 0) {
  FUNC_7(FUNC_2(VAR_8), "failed to get firmware %s\n", VAR_10);
  return VAR_18;
 }

 VAR_11 = (struct ucode *)VAR_9->data;

 VAR_17 = FUNC_6(VAR_11->code_size) * 2;
 if (!VAR_17 || VAR_17 > VAR_1) {
  FUNC_7(FUNC_2(VAR_8), "Invalid ucode size: %u for firmware %s\n",
   VAR_17, VAR_10);
  FUNC_11(VAR_9);
  return -VAR_5;
 }
 VAR_12 = VAR_11->code;


 FUNC_9(&VAR_8->hw.fw_name[0][0], VAR_11->version, (VAR_7 - 2));
 VAR_8->hw.fw_name[0][VAR_7 - 1] = '\0';


 FUNC_13(VAR_8, VAR_17, VAR_12, 0);

 FUNC_11(VAR_9);


 VAR_13 = FUNC_3(VAR_4);
 FUNC_10(VAR_8, VAR_13, (~0ULL));






 VAR_14.value = 0ULL;
 VAR_14.ucode_blk = 0;
 if (VAR_17 <= VAR_2)
  VAR_14.ucode_len = 1;
 else
  VAR_14.ucode_len = 0;

 for (VAR_19 = 0; VAR_19 < VAR_8->hw.se_cores; VAR_19++) {
  VAR_13 = FUNC_5(VAR_19);
  FUNC_10(VAR_8, VAR_13, VAR_14.value);
 }


 VAR_10 = VAR_0;
 FUNC_8(FUNC_2(VAR_8), "Loading firmware \"%s\"\n", VAR_10);

 VAR_18 = FUNC_12(&VAR_9, VAR_10, FUNC_2(VAR_8));
 if (VAR_18 < 0) {
  FUNC_7(FUNC_2(VAR_8), "failed to get firmware %s\n", VAR_10);
  return VAR_18;
 }

 VAR_11 = (struct ucode *)VAR_9->data;

 VAR_17 = FUNC_6(VAR_11->code_size) * 2;
 if (!VAR_17 || VAR_17 > VAR_1) {
  FUNC_7(FUNC_2(VAR_8), "Invalid ucode size: %u for firmware %s\n",
   VAR_17, VAR_10);
  FUNC_11(VAR_9);
  return -VAR_5;
 }
 VAR_12 = VAR_11->code;


 FUNC_9(&VAR_8->hw.fw_name[1][0], VAR_11->version, (VAR_7 - 2));
 VAR_8->hw.fw_name[1][VAR_7 - 1] = '\0';


 FUNC_13(VAR_8, VAR_17, VAR_12, 2);

 FUNC_11(VAR_9);


 VAR_13 = FUNC_1(VAR_3);
 VAR_15.exec_0_to_39 = 0xFFFFFFFFFFULL;
 FUNC_10(VAR_8, VAR_13, VAR_15.value);
 VAR_13 = FUNC_0(VAR_3);
 VAR_16.exec_40_to_79 = 0xFFFFFFFFFFULL;
 FUNC_10(VAR_8, VAR_13, VAR_16.value);






 VAR_14.value = 0ULL;
 VAR_14.ucode_blk = 0;
 if (VAR_17 <= VAR_2)
  VAR_14.ucode_len = 1;
 else
  VAR_14.ucode_len = 0;

 for (VAR_19 = 0; VAR_19 < VAR_8->hw.ae_cores; VAR_19++) {
  VAR_13 = FUNC_4(VAR_19);
  FUNC_10(VAR_8, VAR_13, VAR_14.value);
 }

 return 0;
}

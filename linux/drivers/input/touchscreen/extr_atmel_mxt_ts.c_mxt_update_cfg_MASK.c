
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct mxt_object {int dummy; } ;
struct mxt_info {int dummy; } ;
struct mxt_data {scalar_t__ info_crc; scalar_t__ config_crc; scalar_t__ mem_size; scalar_t__ T71_address; scalar_t__ T7_address; TYPE_3__* info; TYPE_1__* client; } ;
struct TYPE_5__ {scalar_t__ family_id; scalar_t__ variant_id; } ;
struct mxt_cfg {scalar_t__ start_ofs; scalar_t__ mem_size; scalar_t__ raw; scalar_t__ mem; scalar_t__ raw_pos; TYPE_2__ info; int raw_size; } ;
struct firmware {int size; int data; } ;
struct device {int dummy; } ;
struct TYPE_6__ {scalar_t__ family_id; scalar_t__ variant_id; int object_num; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct device*,char*,scalar_t__) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct mxt_data*) ;
 int FUNC_9 (struct mxt_data*,struct mxt_cfg*) ;
 int FUNC_10 (struct mxt_data*) ;
 int FUNC_11 (struct mxt_data*,int ,int) ;
 int FUNC_12 (struct mxt_data*,struct mxt_cfg*) ;
 int FUNC_13 (scalar_t__,char*,...) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct mxt_data *VAR_9, const struct firmware *VAR_10)
{
 struct device *VAR_11 = &VAR_9->client->dev;
 struct mxt_cfg VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 u32 VAR_16, VAR_17, VAR_18;
 u16 VAR_19 = 0;


 VAR_12.raw = FUNC_5(VAR_10->data, VAR_10->size, VAR_2);
 if (!VAR_12.raw)
  return -VAR_1;

 VAR_12.raw_size = VAR_10->size;

 FUNC_11(VAR_9, VAR_6, 1);

 if (FUNC_15(VAR_12.raw, VAR_4, FUNC_14(VAR_4))) {
  FUNC_1(VAR_11, "Unrecognised config file\n");
  VAR_13 = -VAR_0;
  goto release_raw;
 }

 VAR_12.raw_pos = FUNC_14(VAR_4);


 for (VAR_15 = 0; VAR_15 < sizeof(struct mxt_info); VAR_15++) {
  VAR_13 = FUNC_13(VAR_12.raw + VAR_12.raw_pos, "%hhx%n",
        (unsigned char *)&VAR_12.info + VAR_15,
        &VAR_14);
  if (VAR_13 != 1) {
   FUNC_1(VAR_11, "Bad format\n");
   VAR_13 = -VAR_0;
   goto release_raw;
  }

  VAR_12.raw_pos += VAR_14;
 }

 if (VAR_12.info.family_id != VAR_9->info->family_id) {
  FUNC_1(VAR_11, "Family ID mismatch!\n");
  VAR_13 = -VAR_0;
  goto release_raw;
 }

 if (VAR_12.info.variant_id != VAR_9->info->variant_id) {
  FUNC_1(VAR_11, "Variant ID mismatch!\n");
  VAR_13 = -VAR_0;
  goto release_raw;
 }


 VAR_13 = FUNC_13(VAR_12.raw + VAR_12.raw_pos, "%x%n", &VAR_16, &VAR_14);
 if (VAR_13 != 1) {
  FUNC_1(VAR_11, "Bad format: failed to parse Info CRC\n");
  VAR_13 = -VAR_0;
  goto release_raw;
 }
 VAR_12.raw_pos += VAR_14;

 VAR_13 = FUNC_13(VAR_12.raw + VAR_12.raw_pos, "%x%n", &VAR_17, &VAR_14);
 if (VAR_13 != 1) {
  FUNC_1(VAR_11, "Bad format: failed to parse Config CRC\n");
  VAR_13 = -VAR_0;
  goto release_raw;
 }
 VAR_12.raw_pos += VAR_14;







 if (VAR_16 == VAR_9->info_crc) {
  if (VAR_17 == 0 || VAR_9->config_crc == 0) {
   FUNC_2(VAR_11, "CRC zero, attempting to apply config\n");
  } else if (VAR_17 == VAR_9->config_crc) {
   FUNC_0(VAR_11, "Config CRC 0x%06X: OK\n",
     VAR_9->config_crc);
   VAR_13 = 0;
   goto release_raw;
  } else {
   FUNC_2(VAR_11, "Config CRC 0x%06X: does not match file 0x%06X\n",
     VAR_9->config_crc, VAR_17);
  }
 } else {
  FUNC_3(VAR_11,
    "Warning: Info CRC error - device=0x%06X file=0x%06X\n",
    VAR_9->info_crc, VAR_16);
 }


 VAR_12.start_ofs = VAR_8 +
   VAR_9->info->object_num * sizeof(struct mxt_object) +
   VAR_7;
 VAR_12.mem_size = VAR_9->mem_size - VAR_12.start_ofs;
 VAR_12.mem = FUNC_6(VAR_12.mem_size, VAR_2);
 if (!VAR_12.mem) {
  VAR_13 = -VAR_1;
  goto release_raw;
 }

 VAR_13 = FUNC_9(VAR_9, &VAR_12);
 if (VAR_13)
  goto release_mem;


 if (VAR_9->T71_address)
  VAR_19 = VAR_9->T71_address;
 else if (VAR_9->T7_address)
  VAR_19 = VAR_9->T7_address;
 else
  FUNC_3(VAR_11, "Could not find CRC start\n");

 if (VAR_19 > VAR_12.start_ofs) {
  VAR_18 = FUNC_7(VAR_12.mem,
         VAR_19 - VAR_12.start_ofs,
         VAR_12.mem_size);

  if (VAR_17 > 0 && VAR_17 != VAR_18)
   FUNC_3(VAR_11, "Config CRC in file inconsistent, calculated=%06X, file=%06X\n",
     VAR_18, VAR_17);
 }

 VAR_13 = FUNC_12(VAR_9, &VAR_12);
 if (VAR_13)
  goto release_mem;

 FUNC_11(VAR_9, VAR_5, VAR_3);

 VAR_13 = FUNC_10(VAR_9);
 if (VAR_13)
  goto release_mem;

 FUNC_2(VAR_11, "Config successfully updated\n");


 FUNC_8(VAR_9);

release_mem:
 FUNC_4(VAR_12.mem);
release_raw:
 FUNC_4(VAR_12.raw);
 return VAR_13;
}

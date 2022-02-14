
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct sdio_func {int dummy; } ;
struct memory_type_mapping {size_t* mem_ptr; size_t mem_size; char* mem_name; size_t done_flag; } ;
struct device {int dummy; } ;
struct btmrvl_sdio_card {TYPE_2__* func; TYPE_1__* reg; int supports_fw_dump; struct btmrvl_private* priv; } ;
struct btmrvl_private {int dummy; } ;
typedef enum rdwr_status { ____Placeholder_rdwr_status } rdwr_status ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {unsigned int fw_dump_start; unsigned int fw_dump_end; int fw_dump_ctrl; } ;


 size_t FUNC_0 (struct memory_type_mapping*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct btmrvl_private*) ;
 int FUNC_4 (struct btmrvl_private*,size_t) ;
 int FUNC_5 (struct btmrvl_private*) ;
 int FUNC_6 (int *,size_t*,size_t,int ) ;
 struct sdio_func* FUNC_7 (struct device*) ;
 struct memory_type_mapping* VAR_4 ;
 int FUNC_8 (size_t*,size_t*,size_t) ;
 int FUNC_9 (TYPE_2__*) ;
 struct btmrvl_sdio_card* FUNC_10 (struct sdio_func*) ;
 size_t FUNC_11 (TYPE_2__*,unsigned int,int*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int ,int ,int*) ;
 int FUNC_14 (size_t*,char*) ;
 scalar_t__ FUNC_15 (char*) ;
 int FUNC_16 (size_t*) ;
 void* FUNC_17 (size_t) ;

__attribute__((used)) static void FUNC_18(struct device *VAR_5)
{
 struct sdio_func *VAR_6 = FUNC_7(VAR_5);
 struct btmrvl_sdio_card *VAR_7;
 struct btmrvl_private *VAR_8;
 int VAR_9 = 0;
 unsigned int VAR_10, VAR_11, VAR_12;
 enum rdwr_status VAR_13;
 u8 *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 u8 VAR_18 = 0, VAR_19, VAR_20, VAR_21, VAR_22 = 0;
 u32 VAR_23, VAR_24 = 0;

 VAR_7 = FUNC_10(VAR_6);
 VAR_8 = VAR_7->priv;


 FUNC_3(VAR_8);

 if (!VAR_7->supports_fw_dump) {
  FUNC_1("Firmware dump not supported for this card!");
  return;
 }

 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_4); VAR_19++) {
  struct memory_type_mapping *VAR_25 = &VAR_4[VAR_19];

  if (VAR_25->mem_ptr) {
   FUNC_16(VAR_25->mem_ptr);
   VAR_25->mem_ptr = ((void*)0);
  }
  VAR_25->mem_size = 0;
 }

 FUNC_5(VAR_8);
 FUNC_9(VAR_7->func);

 FUNC_2("== btmrvl firmware dump start ==");

 VAR_13 = FUNC_4(VAR_8, VAR_22);
 if (VAR_13 == VAR_3)
  goto done;

 VAR_10 = VAR_7->reg->fw_dump_start;

 VAR_18 = FUNC_11(VAR_7->func, VAR_10, &VAR_9);

 if (VAR_9) {
  FUNC_1("SDIO read memory length err");
  goto done;
 }


 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  struct memory_type_mapping *VAR_26 = &VAR_4[VAR_19];

  VAR_13 = FUNC_4(VAR_8, VAR_22);
  if (VAR_13 == VAR_3)
   goto done;

  VAR_23 = 0;
  VAR_10 = VAR_7->reg->fw_dump_start;
  for (VAR_20 = 0; VAR_20 < 4; VAR_20++) {
   VAR_21 = FUNC_11(VAR_7->func, VAR_10, &VAR_9);
   if (VAR_9) {
    FUNC_1("SDIO read err");
    goto done;
   }
   VAR_23 |= (VAR_21 << VAR_20*8);
   VAR_10++;
  }

  if (VAR_23 == 0) {
   FUNC_2("Firmware dump finished!");
   FUNC_13(VAR_7->func, VAR_0,
        VAR_7->reg->fw_dump_ctrl, &VAR_9);
   if (VAR_9) {
    FUNC_1("SDIO Write MEMDUMP_FINISH ERR");
    goto done;
   }
   break;
  }

  FUNC_2("%s_SIZE=0x%x", VAR_26->mem_name, VAR_23);
  VAR_26->mem_ptr = FUNC_17(VAR_23 + 1);
  VAR_26->mem_size = VAR_23;
  if (!VAR_26->mem_ptr) {
   FUNC_1("Vzalloc %s failed", VAR_26->mem_name);
   goto done;
  }

  VAR_24 += (FUNC_15("========Start dump ") +
    FUNC_15(VAR_26->mem_name) +
    FUNC_15("========\n") +
    (VAR_23 + 1) +
    FUNC_15("\n========End dump========\n"));

  VAR_14 = VAR_26->mem_ptr;
  VAR_15 = VAR_14 + VAR_23;

  VAR_22 = VAR_26->done_flag;
  FUNC_2("Start %s output, please wait...",
   VAR_26->mem_name);

  do {
   VAR_13 = FUNC_4(VAR_8, VAR_22);
   if (VAR_13 == VAR_3)
    goto done;

   VAR_11 = VAR_7->reg->fw_dump_start;
   VAR_12 = VAR_7->reg->fw_dump_end;
   for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
    *VAR_14 = FUNC_11(VAR_7->func, VAR_10, &VAR_9);
    if (VAR_9) {
     FUNC_1("SDIO read err");
     goto done;
    }
    if (VAR_14 < VAR_15)
     VAR_14++;
    else
     FUNC_1("Allocated buffer not enough");
   }

   if (VAR_13 != VAR_2) {
    continue;
   } else {
    FUNC_2("%s done: size=0x%tx",
     VAR_26->mem_name,
     VAR_14 - VAR_26->mem_ptr);
    break;
   }
  } while (1);
 }

 FUNC_2("== btmrvl firmware dump end ==");

done:
 FUNC_12(VAR_7->func);

 if (VAR_24 == 0)
  return;

 VAR_16 = FUNC_17(VAR_24+1);
 if (!VAR_16) {
  FUNC_1("Vzalloc fw_dump_data fail!");
  return;
 }
 VAR_17 = VAR_16;




 FUNC_2("== btmrvl firmware dump to /sys/class/devcoredump start");
 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  struct memory_type_mapping *VAR_27 = &VAR_4[VAR_19];

  if (VAR_27->mem_ptr) {
   FUNC_14(VAR_17, "========Start dump ");
   VAR_17 += FUNC_15("========Start dump ");

   FUNC_14(VAR_17, VAR_27->mem_name);
   VAR_17 += FUNC_15(VAR_27->mem_name);

   FUNC_14(VAR_17, "========\n");
   VAR_17 += FUNC_15("========\n");

   FUNC_8(VAR_17, VAR_27->mem_ptr, VAR_27->mem_size);
   VAR_17 += VAR_27->mem_size;

   FUNC_14(VAR_17, "\n========End dump========\n");
   VAR_17 += FUNC_15("\n========End dump========\n");

   FUNC_16(VAR_4[VAR_19].mem_ptr);
   VAR_4[VAR_19].mem_ptr = ((void*)0);
  }
 }




 FUNC_6(&VAR_7->func->dev, VAR_16, VAR_24, VAR_1);
 FUNC_2("== btmrvl firmware dump to /sys/class/devcoredump end");
}
